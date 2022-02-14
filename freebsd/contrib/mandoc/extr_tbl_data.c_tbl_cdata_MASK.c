
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const tab; } ;
struct tbl_node {void* part; TYPE_3__* last_span; TYPE_1__ opts; } ;
struct tbl_dat {int block; char const* string; TYPE_2__* layout; int pos; } ;
struct TYPE_6__ {struct tbl_dat* last; } ;
struct TYPE_5__ {scalar_t__ pos; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct tbl_node*,TYPE_3__*,int,char const*,int*) ;
 int FUNC_1 (int ,int,int,char*,char const*) ;
 char const* FUNC_2 (char const*,size_t) ;
 char const* FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,size_t) ;
 int FUNC_5 (char const*) ;

void
FUNC_6(struct tbl_node *VAR_4, int VAR_5, const char *VAR_6, int VAR_7)
{
 struct tbl_dat *VAR_8;
 size_t VAR_9;

 VAR_8 = VAR_4->last_span->last;

 if (VAR_6[VAR_7] == 'T' && VAR_6[VAR_7 + 1] == '}') {
  VAR_7 += 2;
  if (VAR_6[VAR_7] == VAR_4->opts.tab) {
   VAR_4->part = VAR_3;
   VAR_7++;
   while (VAR_6[VAR_7] != '\0')
    FUNC_0(VAR_4, VAR_4->last_span, VAR_5, VAR_6, &VAR_7);
   return;
  } else if (VAR_6[VAR_7] == '\0') {
   VAR_4->part = VAR_3;
   return;
  }


 }

 VAR_8->pos = VAR_2;
 VAR_8->block = 1;

 if (VAR_8->string != ((void*)0)) {
  VAR_9 = FUNC_5(VAR_6 + VAR_7) + FUNC_5(VAR_8->string) + 2;
  VAR_8->string = FUNC_2(VAR_8->string, VAR_9);
  (void)FUNC_4(VAR_8->string, " ", VAR_9);
  (void)FUNC_4(VAR_8->string, VAR_6 + VAR_7, VAR_9);
 } else
  VAR_8->string = FUNC_3(VAR_6 + VAR_7);

 if (VAR_8->layout->pos == VAR_1)
  FUNC_1(VAR_0,
      VAR_5, VAR_7, "%s", VAR_8->string);
}
