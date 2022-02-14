
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {scalar_t__ isp_port; } ;
typedef TYPE_1__ ispsoftc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(ispsoftc_t *VAR_9, int VAR_10, uint16_t *VAR_11)
{
 int VAR_12, VAR_13;
 uint16_t VAR_14, VAR_15, VAR_16;

 FUNC_3(VAR_9, VAR_0, VAR_4);
 FUNC_0(10);
 FUNC_3(VAR_9, VAR_0, VAR_4|VAR_1);
 FUNC_0(10);

 if (FUNC_5(VAR_9)) {
  VAR_10 &= ((VAR_6 >> 1) - 1);
  if (FUNC_4(VAR_9) && VAR_9->isp_port) {
   VAR_10 += 128;
  }
  VAR_15 = (VAR_7 << 8) | VAR_10;
  VAR_13 = 10;
 } else if (FUNC_6(VAR_9)) {
  VAR_10 &= ((VAR_5 >> 1) - 1);
  VAR_15 = (VAR_7 << 8) | VAR_10;
  VAR_13 = 10;
 } else {
  VAR_10 &= ((VAR_8 >> 1) - 1);
  VAR_15 = (VAR_7 << 6) | VAR_10;
  VAR_13 = 8;
 }




 for (VAR_12 = VAR_13; VAR_12 >= 0; VAR_12--) {
  if ((VAR_15 >> VAR_12) & 1) {
   VAR_14 = VAR_4 | VAR_3;
  } else {
   VAR_14 = VAR_4;
  }
  FUNC_3(VAR_9, VAR_0, VAR_14);
  FUNC_0(10);
  VAR_16 = FUNC_1(VAR_9, VAR_0);
  FUNC_3(VAR_9, VAR_0, VAR_14 | VAR_1);
  FUNC_0(10);
  VAR_16 = FUNC_1(VAR_9, VAR_0);
  FUNC_3(VAR_9, VAR_0, VAR_14);
  FUNC_0(10);
  VAR_16 = FUNC_1(VAR_9, VAR_0);
 }



 *VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
  uint16_t VAR_17;
  *VAR_11 <<= 1;
  FUNC_3(VAR_9, VAR_0, VAR_4|VAR_1);
  FUNC_0(10);
  VAR_17 = FUNC_1(VAR_9, VAR_0);
  if (VAR_17 & VAR_2) {
   *VAR_11 |= 1;
  }
  FUNC_0(10);
  FUNC_3(VAR_9, VAR_0, VAR_4);
  FUNC_0(10);
  VAR_16 = FUNC_1(VAR_9, VAR_0);
 }
 FUNC_3(VAR_9, VAR_0, 0);
 FUNC_0(10);
 VAR_16 = FUNC_1(VAR_9, VAR_0);
 FUNC_2(VAR_9, VAR_11);
}
