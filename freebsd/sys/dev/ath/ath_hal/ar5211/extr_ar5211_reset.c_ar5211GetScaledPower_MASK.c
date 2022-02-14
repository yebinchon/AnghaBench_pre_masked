
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int numChannels; int pChannelList; } ;
typedef TYPE_1__ PCDACS_EEPROM ;


 scalar_t__ FUNC_0 (int ,int ,TYPE_1__ const*,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__ const*,int *,int *) ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;

uint16_t
FUNC_4(uint16_t VAR_0, uint16_t VAR_1,
 const PCDACS_EEPROM *VAR_2)
{
 uint16_t VAR_3;
 uint16_t VAR_4, VAR_5;
 uint16_t VAR_6, VAR_7;
 uint16_t VAR_8, VAR_9;
 uint16_t VAR_10, VAR_11;
 uint16_t VAR_12, VAR_13;

 if (FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3))

  return VAR_3;

 FUNC_3(VAR_0, VAR_2->pChannelList,
  VAR_2->numChannels, &VAR_4, &VAR_5);
 FUNC_2(VAR_1, VAR_4, VAR_2,
  &VAR_6, &VAR_7);
 FUNC_2(VAR_1, VAR_5, VAR_2,
  &VAR_8, &VAR_9);


 FUNC_0(VAR_4, VAR_6, VAR_2, &VAR_10);
 FUNC_0(VAR_4, VAR_7, VAR_2, &VAR_11);
 VAR_12 = FUNC_1(VAR_1,
    VAR_6, VAR_7, VAR_10, VAR_11, 0);

 FUNC_0(VAR_5, VAR_8, VAR_2, &VAR_10);
 FUNC_0(VAR_5, VAR_9, VAR_2, &VAR_11);
 VAR_13 = FUNC_1(VAR_1,
    VAR_8, VAR_9, VAR_10, VAR_11, 0);

 return FUNC_1(VAR_0, VAR_4, VAR_5,
  VAR_12, VAR_13, 0);
}
