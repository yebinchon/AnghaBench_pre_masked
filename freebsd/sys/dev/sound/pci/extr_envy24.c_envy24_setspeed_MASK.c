
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sc_info {int dev; } ;
struct TYPE_2__ {scalar_t__ speed; scalar_t__ code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct sc_info*,int ,scalar_t__,int) ;

__attribute__((used)) static u_int32_t
FUNC_4(struct sc_info *VAR_4, u_int32_t VAR_5) {
 u_int32_t VAR_6;
 int VAR_7 = 0;




 if (VAR_5 == 0) {
  VAR_6 = VAR_2;
  FUNC_2(VAR_4);
 }
 else {
  for (VAR_7 = 0; VAR_3[VAR_7].speed != 0; VAR_7++) {
   if (VAR_3[VAR_7].speed == VAR_5)
    break;
  }
  VAR_6 = VAR_3[VAR_7].code;
 }



 if (VAR_6 < 0x10) {
  FUNC_3(VAR_4, VAR_0, VAR_6, 1);
  VAR_6 = FUNC_1(VAR_4, VAR_0, 1);
  VAR_6 &= VAR_1;
  for (VAR_7 = 0; VAR_3[VAR_7].code < 0x10; VAR_7++) {
   if (VAR_3[VAR_7].code == VAR_6)
    break;
  }
  VAR_5 = VAR_3[VAR_7].speed;
 }
 else
  VAR_5 = 0;




 return VAR_5;
}
