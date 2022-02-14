
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_hpp {char* buf; size_t size; } ;
struct hists {int dummy; } ;
struct hist_entry {int dummy; } ;
typedef int bf ;
struct TYPE_2__ {scalar_t__ use_callchain; int field_sep; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (struct hist_entry*,struct hists*,int *) ;
 int FUNC_2 (struct perf_hpp*,struct hist_entry*,int) ;
 int FUNC_3 (struct hist_entry*,char*,size_t,struct hists*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct hist_entry *VAR_1, size_t VAR_2,
          struct hists *VAR_3, FILE *VAR_4)
{
 char VAR_5[512];
 int VAR_6;
 struct perf_hpp VAR_7 = {
  .buf = VAR_5,
  .size = VAR_2,
 };
 bool VAR_8 = !VAR_0.field_sep;

 if (VAR_2 == 0 || VAR_2 > sizeof(VAR_5))
  VAR_2 = VAR_7.size = sizeof(VAR_5);

 VAR_6 = FUNC_2(&VAR_7, VAR_1, VAR_8);
 FUNC_3(VAR_1, VAR_5 + VAR_6, VAR_2 - VAR_6, VAR_3);

 VAR_6 = FUNC_0(VAR_4, "%s\n", VAR_5);

 if (VAR_0.use_callchain)
  VAR_6 += FUNC_1(VAR_1, VAR_3, VAR_4);

 return VAR_6;
}
