
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int device_t ;
struct TYPE_2__ {int model; int subvendor; char* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 uint32_t VAR_7;
 uint16_t VAR_8;
 uint8_t VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = (uint32_t)FUNC_2(VAR_6) << 16;
 VAR_7 |= (uint32_t)FUNC_5(VAR_6) & 0x0000ffff;
 VAR_8 = FUNC_4(VAR_6);
 VAR_9 = FUNC_1(VAR_6);
 VAR_10 = FUNC_3(VAR_6);

 VAR_12 = VAR_2;
 for (VAR_11 = 0; VAR_5[VAR_11].model != 0; VAR_11++) {
  if (VAR_5[VAR_11].model == VAR_7 &&
      (VAR_5[VAR_11].subvendor == 0xffff ||
      VAR_5[VAR_11].subvendor == VAR_8)) {
   FUNC_0(VAR_6, VAR_5[VAR_11].desc);
   VAR_12 = VAR_0;
   break;
  }
 }
 if (VAR_12 == VAR_2 && VAR_9 == VAR_3 &&
     VAR_10 == VAR_4) {
  FUNC_0(VAR_6, "Generic SD HCI");
  VAR_12 = VAR_1;
 }

 return (VAR_12);
}
