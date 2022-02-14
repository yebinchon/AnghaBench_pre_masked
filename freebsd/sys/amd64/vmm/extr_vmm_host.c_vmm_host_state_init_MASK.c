
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xsave_enabled; int xcr0_allowed; int xsave_max_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int,int*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;

void
FUNC_5(void)
{
 int VAR_14[4];

 VAR_10 = FUNC_3(VAR_3);
 VAR_11 = FUNC_3(VAR_4);
 VAR_8 = FUNC_1() | VAR_0;
 VAR_9 = FUNC_2() | VAR_1;
 if (VAR_9 & VAR_2) {
  VAR_13.xsave_enabled = 1;
  VAR_12 = FUNC_4(0);
  VAR_13.xcr0_allowed = VAR_12 &
      (VAR_5 | VAR_7 | VAR_6);

  FUNC_0(0xd, 0x0, VAR_14);
  VAR_13.xsave_max_size = VAR_14[1];
 }
}
