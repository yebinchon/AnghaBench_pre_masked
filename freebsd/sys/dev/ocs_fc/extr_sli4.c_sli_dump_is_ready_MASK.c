
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

int32_t FUNC_6(sli4_t *VAR_9)
{
 int32_t VAR_10 = 0;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;

 if (VAR_1 == FUNC_4(VAR_9)) {

  VAR_13 = FUNC_5(VAR_9, VAR_8);
  VAR_14 = FUNC_5(VAR_9, VAR_7);
  VAR_15 = FUNC_5(VAR_9, VAR_6);
  VAR_16 = FUNC_5(VAR_9, VAR_5);
  if ((VAR_13 & ~VAR_15) || (VAR_14 & ~VAR_16)) {
   VAR_10 = 1;
  }

 } else if (VAR_2 == FUNC_4(VAR_9)) {




  VAR_11 = FUNC_5(VAR_9, VAR_4);
  VAR_12 = FUNC_5(VAR_9, VAR_3);

  if ((VAR_12 & VAR_0) &&
      FUNC_2(VAR_11)) {
       if(FUNC_0(VAR_11)) {
    VAR_10 = 1;
   }else if( FUNC_1(VAR_11)) {
    VAR_10 = 2;
   }
  }
 } else {
  FUNC_3(VAR_9->os, "invalid iftype=%d\n", FUNC_4(VAR_9));
  return -1;
 }
 return VAR_10;
}
