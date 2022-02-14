
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_7__ {int * ppath; scalar_t__ ACBFlag; int * pActiveDCB; } ;
typedef TYPE_1__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_11(PACB VAR_8)
{
 int VAR_9;
 u_int16_t VAR_10;

     FUNC_1("trm: RESET");
     VAR_9 = FUNC_2();
 FUNC_9(0x00, VAR_5);
 FUNC_9(0x00, VAR_7);

 FUNC_7(VAR_8);
 for (VAR_10 = 0; VAR_10 < 500; VAR_10++)
  FUNC_0(1000);
     FUNC_9(0x7F, VAR_7);

 FUNC_9(VAR_3, VAR_5);

 FUNC_9(VAR_1, VAR_4);

 FUNC_8(VAR_2,VAR_6);
 FUNC_6(VAR_8);
 FUNC_5(VAR_8);
 VAR_8->pActiveDCB = ((void*)0);
 VAR_8->ACBFlag = 0;
 FUNC_4(VAR_8);

 if (VAR_8->ppath != ((void*)0))
  FUNC_10(VAR_0, VAR_8->ppath, ((void*)0));
 FUNC_3(VAR_9);
     return;
}
