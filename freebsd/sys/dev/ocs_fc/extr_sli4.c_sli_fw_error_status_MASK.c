
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ if_type; int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

int32_t FUNC_4(sli4_t *VAR_10)
{
 uint32_t VAR_11;
 int32_t VAR_12 = 0;

 VAR_11 = FUNC_3(VAR_10, VAR_3);
 if (VAR_9 == VAR_11) {
  FUNC_2(VAR_10->os, "error reading SLIPORT_SEMAPHORE register\n");
  return 1;
 }
 VAR_12 = (FUNC_0(VAR_11) ? 1 : 0);

 if (VAR_12 == 0) {
  if (VAR_0 == VAR_10->if_type ||
      (VAR_1 == VAR_10->if_type)) {
   uint32_t VAR_13, VAR_14;
   uint32_t VAR_15, VAR_16;

   VAR_13 = FUNC_3(VAR_10, VAR_6);
   VAR_14 = FUNC_3(VAR_10, VAR_5);
   VAR_15 = FUNC_3(VAR_10, VAR_8);
   VAR_16 = FUNC_3(VAR_10, VAR_7);
   if ((VAR_13 & VAR_15) != 0 ||
       (VAR_14 & VAR_16) != 0) {
    VAR_12 = 1;
   }
  } else if (VAR_2 == VAR_10->if_type) {
   uint32_t VAR_17;

   VAR_17 = FUNC_3(VAR_10, VAR_4);
   VAR_12 = (FUNC_1(VAR_17) ? 1 : 0);
  }
 }
 return VAR_12;
}
