
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct vm*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct vm *VAR_0, int VAR_1, enum vcpu_state VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 0)) != 0)
  FUNC_0("Error %d setting state to %d\n", VAR_3, VAR_2);
}
