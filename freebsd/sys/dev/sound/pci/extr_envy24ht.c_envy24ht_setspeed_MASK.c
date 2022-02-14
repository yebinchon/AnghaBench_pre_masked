
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sc_info {int dev; TYPE_1__* cfg; } ;
struct TYPE_4__ {scalar_t__ speed; scalar_t__ code; } ;
struct TYPE_3__ {int scfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (struct sc_info*,int ,scalar_t__,int) ;

__attribute__((used)) static u_int32_t
FUNC_4(struct sc_info *VAR_9, u_int32_t VAR_10) {
 u_int32_t VAR_11, VAR_12;
 int VAR_13 = 0;
  for (VAR_13 = 0; VAR_8[VAR_13].speed != 0; VAR_13++) {
   if (VAR_8[VAR_13].speed == VAR_10)
    break;
  }
  VAR_11 = VAR_8[VAR_13].code;




 if (VAR_11 < 0x10) {
  FUNC_3(VAR_9, VAR_3, VAR_11, 1);
  if ((((VAR_9->cfg->scfg & VAR_0) == 0x00) && (VAR_11 == VAR_5)) || (VAR_11 == VAR_4)) {

   VAR_12 = FUNC_1(VAR_9, VAR_1, 1);
   VAR_12 |= VAR_2;
   FUNC_3(VAR_9, VAR_1, VAR_12, 1);
  }
  else {
   VAR_12 = FUNC_1(VAR_9, VAR_1, 1);
   VAR_12 &= ~VAR_2;
   FUNC_3(VAR_9, VAR_1, VAR_12, 1);
  }
  VAR_11 = FUNC_1(VAR_9, VAR_3, 1);
  VAR_11 &= VAR_6;
  for (VAR_13 = 0; VAR_8[VAR_13].code < 0x10; VAR_13++) {
   if (VAR_8[VAR_13].code == VAR_11)
    break;
  }
  VAR_10 = VAR_8[VAR_13].speed;
 }
 else
  VAR_10 = 0;




 return VAR_10;
}
