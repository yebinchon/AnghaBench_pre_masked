
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {int kb_delay2; int kb_delay1; } ;
typedef TYPE_1__ keyboard_t ;
typedef int int32_t ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

void
FUNC_2(keyboard_t *VAR_9, uint16_t VAR_10, uint16_t VAR_11, int32_t VAR_12)
{
 int VAR_13[2], VAR_14 = 0, VAR_15, VAR_16;

 if (VAR_10 == VAR_1) {
  VAR_15 = VAR_16 = FUNC_0(VAR_9);
  switch (VAR_11) {
  case 130:
   VAR_14 = VAR_0;
   break;
  case 129:
   VAR_14 = VAR_5;
   break;
  case 128:
   VAR_14 = VAR_8;
   break;
  }

  if (VAR_12)
   VAR_15 |= VAR_14;
  else
   VAR_15 &= ~VAR_14;

  if (VAR_15 != VAR_16)
   FUNC_1(VAR_9, VAR_3, (caddr_t)&VAR_15);

 } else if (VAR_10 == VAR_2 && VAR_11 == VAR_6) {
  VAR_13[0] = VAR_12;
  VAR_13[1] = VAR_9->kb_delay2;
  FUNC_1(VAR_9, VAR_4, (caddr_t)VAR_13);
 } else if (VAR_10 == VAR_2 && VAR_11 == VAR_7) {
  VAR_13[0] = VAR_9->kb_delay1;
  VAR_13[1] = VAR_12;
  FUNC_1(VAR_9, VAR_4, (caddr_t)VAR_13);
 }
}
