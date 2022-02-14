
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlist {scalar_t__ name; void* value; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(
 struct varlist *VAR_1
 )
{
 register struct varlist *VAR_2;

 for (VAR_2 = VAR_1; VAR_2 < VAR_1 + VAR_0 && VAR_2->name != 0; VAR_2++) {
  FUNC_0((void *)(intptr_t)VAR_2->name);
  VAR_2->name = 0;
  if (VAR_2->value != 0) {
   FUNC_0(VAR_2->value);
   VAR_2->value = 0;
  }
 }
}
