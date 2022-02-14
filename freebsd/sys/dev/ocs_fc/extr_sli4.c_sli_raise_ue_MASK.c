
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_6__ {int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,unsigned int) ;

int32_t FUNC_6(sli4_t *VAR_12, uint8_t VAR_13)
{

 if (VAR_1 == FUNC_4(VAR_12)) {
  switch(FUNC_3(VAR_12)) {
  case 129: {
   FUNC_5(VAR_12, VAR_7, 0xffffffff);
   FUNC_5(VAR_12, VAR_8, 0);
   break;
  }
  case 128: {
   uint32_t VAR_14;
   VAR_14 = FUNC_0(VAR_12->os, VAR_11);
   FUNC_1(VAR_12->os, VAR_11, (VAR_14 | (1U << 24)));
   break;
  }
  default:
   FUNC_2(VAR_12->os, "invalid asic type %d\n", FUNC_3(VAR_12));
   return -1;
  }
 } else if (VAR_2 == FUNC_4(VAR_12)) {
  if (VAR_13 == 2) {
   FUNC_5(VAR_12, VAR_6, VAR_9 | VAR_10);
  } else {
   uint32_t VAR_15 = VAR_4;
   if (VAR_13 == 1) {
    VAR_15 |= VAR_3;
   }
   FUNC_5(VAR_12, VAR_5, VAR_15);
  }
 } else {
  FUNC_2(VAR_12->os, "invalid iftype=%d\n", FUNC_4(VAR_12));
  return -1;
 }
 return 0;
}
