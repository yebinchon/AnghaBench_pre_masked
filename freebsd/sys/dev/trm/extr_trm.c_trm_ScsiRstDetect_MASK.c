
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {int ACBFlag; int * pActiveDCB; } ;
typedef TYPE_1__* PACB ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(PACB VAR_7)
{
 int VAR_8;
 u_long VAR_9;

 FUNC_1("trm_ScsiRstDetect \n");
 VAR_9 = 1000;
 while (--VAR_9)
  FUNC_0(1000);
 VAR_8 = FUNC_2();
     FUNC_8(VAR_4,VAR_5);

 FUNC_7(VAR_0,VAR_6);

 if (VAR_7->ACBFlag & VAR_2)
  VAR_7->ACBFlag |= VAR_3;
 else {
  VAR_7->ACBFlag |= VAR_1;
  FUNC_6(VAR_7);

  FUNC_5(VAR_7);
  VAR_7->pActiveDCB = ((void*)0);
  VAR_7->ACBFlag = 0;
  FUNC_4(VAR_7);
 }
 FUNC_3(VAR_8);
     return;
}
