
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup_entry {void* var; int fn; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct cleanup_entry* VAR_2 ;

void
FUNC_1(void *VAR_3)
{
    struct cleanup_entry *VAR_4;

    VAR_4 = VAR_2 + VAR_1;
    while (VAR_4 != VAR_2) {
        VAR_4--;
 if (VAR_4->var == VAR_3) {
     VAR_4->fn = VAR_0;
     return;
 }
    }
    FUNC_0();
}
