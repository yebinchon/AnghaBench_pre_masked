
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup_entry {int var; int (* fn ) (int ) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct cleanup_entry* VAR_2 ;
 int FUNC_0 (int ) ;

void
FUNC_1(void)
{
    while (VAR_1 > VAR_0) {
 struct cleanup_entry VAR_3;

 VAR_1--;
 VAR_3 = VAR_2[VAR_1];
 VAR_3.fn(VAR_3.var);
    }
}
