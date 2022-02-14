
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pmap {int dummy; } ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pmap*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

void
FUNC_10(struct pmap *VAR_2, vm_offset_t VAR_3)
{
 register_t VAR_4;
 register_t VAR_5;
 int VAR_6;

 VAR_3 &= ~VAR_0;

 VAR_5 = FUNC_1();
 VAR_4 = FUNC_3() & VAR_1;

 FUNC_6(0);
 FUNC_5(FUNC_0(VAR_3, FUNC_7(VAR_2)));
 FUNC_9();
 VAR_6 = FUNC_4();
 if (VAR_6 >= 0)
  FUNC_8(VAR_6);

 FUNC_5(VAR_4);
 FUNC_2(VAR_5);
}
