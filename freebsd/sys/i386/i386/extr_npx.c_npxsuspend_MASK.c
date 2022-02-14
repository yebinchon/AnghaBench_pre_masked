
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union savefpu {int dummy; } savefpu ;
typedef int register_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,union savefpu*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (union savefpu*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void
FUNC_6(union savefpu *VAR_4)
{
 register_t VAR_5;

 if (!VAR_2)
  return;
 if (FUNC_0(VAR_1) == ((void*)0)) {
  FUNC_1(VAR_3, VAR_4, VAR_0);
  return;
 }
 VAR_5 = FUNC_4();
 FUNC_5();
 FUNC_2(VAR_4);
 FUNC_3(VAR_5);
}
