
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup_entry {void* var; int (* fn ) (void*) ;} ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 struct cleanup_entry* VAR_1 ;
 int FUNC_1 (void*) ;

void
FUNC_2(void *VAR_2)
{
    while (VAR_0 != 0) {
 struct cleanup_entry VAR_3;

 VAR_0--;
 VAR_3 = VAR_1[VAR_0];
 VAR_3.fn(VAR_3.var);
 if (VAR_3.var == VAR_2)
     return;
    }
    FUNC_0();
}
