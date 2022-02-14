
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_11__ {TYPE_6__ hw; } ;
typedef TYPE_1__ ocs_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static int32_t
FUNC_8(ocs_t *VAR_3, char *VAR_4, void *VAR_5, uint32_t VAR_6, void *VAR_7, uint32_t VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0;
 uint8_t VAR_11, VAR_12, VAR_13;
 ocs_t *VAR_14;

 FUNC_2(VAR_3, &VAR_11, &VAR_12, &VAR_13);

 FUNC_5(VAR_3, "Resetting port\n");
 if (FUNC_4(&VAR_3->hw, VAR_0)) {
  FUNC_7(VAR_3, "failed to reset port\n");
  VAR_9 = -1;
 } else {
  FUNC_5(VAR_3, "successfully reset port\n");



  while ((VAR_14 = FUNC_3(VAR_10++)) != ((void*)0)) {
   uint8_t VAR_15, VAR_16, VAR_17;

   FUNC_2(VAR_14, &VAR_15, &VAR_16, &VAR_17);

   if ((VAR_11 == VAR_15) && (VAR_12 == VAR_16)) {
    if (VAR_14->hw.state !=
                                      VAR_2) {
                                        VAR_14->hw.state =
                                                VAR_1;
                                }

    FUNC_1(VAR_14);
    if (FUNC_0(VAR_14)) {
     FUNC_6(VAR_14,
      "device %d attach failed \n", VAR_10);
     VAR_9 = -1;
    }
   }
  }
 }
 return VAR_9;
}
