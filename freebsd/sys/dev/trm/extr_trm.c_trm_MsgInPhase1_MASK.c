
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_3__ {int SRBState; } ;
typedef TYPE_1__* PSRB ;
typedef int PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(PACB VAR_8, PSRB VAR_9, u_int16_t *VAR_10)
{

 FUNC_0(VAR_0, VAR_6);
 FUNC_1(1,VAR_7);
 if (!(VAR_9->SRBState & VAR_4)) {
  VAR_9->SRBState &= VAR_3;
  VAR_9->SRBState |= VAR_4;
 }
 FUNC_0(VAR_1, VAR_6);




 FUNC_2(VAR_2, VAR_5);
}
