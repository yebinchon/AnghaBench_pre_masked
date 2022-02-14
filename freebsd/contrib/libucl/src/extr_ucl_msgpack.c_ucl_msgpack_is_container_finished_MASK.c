
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ucl_stack {int level; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1 (struct ucl_stack *VAR_1)
{
 uint64_t VAR_2;

 FUNC_0 (VAR_1 != ((void*)0));

 if (VAR_1->level & VAR_0) {
  VAR_2 = VAR_1->level & ~VAR_0;

  if (VAR_2 == 0) {
   return 1;
  }
 }

 return 0;
}
