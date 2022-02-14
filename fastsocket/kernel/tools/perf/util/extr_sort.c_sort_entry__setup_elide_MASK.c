
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strlist {int dummy; } ;
struct sort_entry {int elide; } ;
struct TYPE_2__ {char* s; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,char*) ;
 TYPE_1__* FUNC_1 (struct strlist*,int ) ;
 int FUNC_2 (struct strlist*) ;

void FUNC_3(struct sort_entry *VAR_0, struct strlist *VAR_1,
        const char *VAR_2, FILE *VAR_3)
{
 if (VAR_1 && FUNC_2(VAR_1) == 1) {
  if (VAR_3 != ((void*)0))
   FUNC_0(VAR_3, "# %s: %s\n", VAR_2,
    FUNC_1(VAR_1, 0)->s);
  VAR_0->elide = 1;
 }
}
