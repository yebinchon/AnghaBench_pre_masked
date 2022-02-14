
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup_entry {void (* fn ) (void*) ;char const* file; size_t line; void* var; } ;


 int VAR_0 ;
 struct cleanup_entry* VAR_1 ;
 int VAR_2 ;
 struct cleanup_entry* FUNC_0 (struct cleanup_entry*,int) ;

void
FUNC_1(void *VAR_3, void (*VAR_4) (void *)



)
{
    struct cleanup_entry *VAR_5;

    if (VAR_0 == VAR_2) {
 if (VAR_2 == 0)
     VAR_2 = 64;
 else
     VAR_2 *= 2;
 VAR_1 = FUNC_0(VAR_1,
     VAR_2 * sizeof (*VAR_1));
    }
    VAR_5 = VAR_1 + VAR_0;
    VAR_5->var = VAR_3;
    VAR_5->fn = VAR_4;




    VAR_0++;
}
