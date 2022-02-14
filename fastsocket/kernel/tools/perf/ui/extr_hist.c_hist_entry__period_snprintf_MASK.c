
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_hpp {char* buf; int size; } ;
struct hist_entry {int parent; } ;
struct TYPE_4__ {int (* color ) (struct perf_hpp*,struct hist_entry*) ;int (* entry ) (struct perf_hpp*,struct hist_entry*) ;int cond; } ;
struct TYPE_3__ {char* field_sep; scalar_t__ exclude_other; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_hpp*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*,int ,char*,char*) ;
 int FUNC_2 (struct perf_hpp*,struct hist_entry*) ;
 int FUNC_3 (struct perf_hpp*,struct hist_entry*) ;
 TYPE_1__ VAR_2 ;

int FUNC_4(struct perf_hpp *VAR_3, struct hist_entry *VAR_4,
    bool VAR_5)
{
 const char *VAR_6 = VAR_2.field_sep;
 char *VAR_7 = VAR_3->buf;
 int VAR_8, VAR_9;
 bool VAR_10 = 1;

 if (VAR_2.exclude_other && !VAR_4->parent)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (!VAR_1[VAR_8].cond)
   continue;





  if (!VAR_6 || !VAR_10) {
   VAR_9 = FUNC_1(VAR_3->buf, VAR_3->size, "%s", VAR_6 ?: "  ");
   FUNC_0(VAR_3, VAR_9);
  } else
   VAR_10 = 0;

  if (VAR_5 && VAR_1[VAR_8].color)
   VAR_9 = VAR_1[VAR_8].color(VAR_3, VAR_4);
  else
   VAR_9 = VAR_1[VAR_8].entry(VAR_3, VAR_4);

  FUNC_0(VAR_3, VAR_9);
 }

 return VAR_3->buf - VAR_7;
}
