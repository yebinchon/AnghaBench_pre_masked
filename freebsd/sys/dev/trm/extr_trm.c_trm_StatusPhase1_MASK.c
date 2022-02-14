
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(PACB VAR_11, PSRB VAR_12, u_int16_t *VAR_13)
{

 if (FUNC_0(VAR_5) & 0x0001) {
  if (!(FUNC_1(VAR_10) & 0x40))
          FUNC_2(VAR_1, VAR_9);
  if (!(FUNC_0(VAR_7) & 0x8000))
   FUNC_3(VAR_0, VAR_6);
 } else {
  if (!(FUNC_0(VAR_7) & 0x8000))
   FUNC_3(VAR_0, VAR_6);
  if (!(FUNC_1(VAR_10) & 0x40))
   FUNC_2(VAR_1, VAR_9);
 }
 VAR_12->SRBState = VAR_4;
 FUNC_2(VAR_2, VAR_9);




 FUNC_3(VAR_3, VAR_8);
}
