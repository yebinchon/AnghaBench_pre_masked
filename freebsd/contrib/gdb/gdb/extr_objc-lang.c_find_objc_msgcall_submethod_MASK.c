
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objc_submethod_helper_data {int (* f ) (int ,int *) ;int * new_pc; int pc; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1 (int (*VAR_2) (CORE_ADDR, CORE_ADDR *),
        CORE_ADDR VAR_3,
        CORE_ADDR *VAR_4)
{
  struct objc_submethod_helper_data VAR_5;

  VAR_5.f = VAR_2;
  VAR_5.pc = VAR_3;
  VAR_5.new_pc = VAR_4;

  if (FUNC_0 (VAR_1,
      (void *) &VAR_5,
      "Unable to determine target of Objective-C method call (ignoring):\n",
      VAR_0) == 0)
    return 1;
  else
    return 0;
}
