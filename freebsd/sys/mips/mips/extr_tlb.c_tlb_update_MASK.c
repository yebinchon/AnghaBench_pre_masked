
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pmap {int dummy; } ;
typedef int register_t ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pmap*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

void
FUNC_13(struct pmap *VAR_4, vm_offset_t VAR_5, pt_entry_t VAR_6)
{
 register_t VAR_7;
 register_t VAR_8;
 int VAR_9;

 VAR_5 &= ~VAR_0;
 VAR_6 &= ~VAR_3;

 VAR_8 = FUNC_1();
 VAR_7 = FUNC_3() & VAR_2;

 FUNC_8(0);
 FUNC_5(FUNC_0(VAR_5, FUNC_9(VAR_4)));
 FUNC_10();
 VAR_9 = FUNC_4();
 if (VAR_9 >= 0) {
  FUNC_11();

  if ((VAR_5 & VAR_1) == 0) {
   FUNC_6(VAR_6);
  } else {
   FUNC_7(VAR_6);
  }
  FUNC_12();
 }

 FUNC_5(VAR_7);
 FUNC_2(VAR_8);
}
