
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int **,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_5)
{
    device_t *VAR_6;
    int VAR_7, VAR_8;

    if (FUNC_0(FUNC_1(VAR_5), &VAR_6, &VAR_7))
 return;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
 if (FUNC_4(VAR_6[VAR_8]) == VAR_1 ||
     FUNC_4(VAR_6[VAR_8]) == VAR_2 ||
     FUNC_4(VAR_6[VAR_8]) == VAR_3 ||
     FUNC_4(VAR_6[VAR_8]) == VAR_0) {
     u_int8_t VAR_9 = FUNC_5(VAR_6[VAR_8], 0x76, 1);

     if ((VAR_9 & 0xf0) != 0xd0) {
  FUNC_2(VAR_5,
  "Correcting VIA config for southbridge data corruption bug\n");
  FUNC_6(VAR_6[VAR_8], 0x75, 0x80, 1);
  FUNC_6(VAR_6[VAR_8], 0x76, (VAR_9 & 0x0f) | 0xd0, 1);
     }
     break;
 }
    }
    FUNC_3(VAR_6, VAR_4);
}
