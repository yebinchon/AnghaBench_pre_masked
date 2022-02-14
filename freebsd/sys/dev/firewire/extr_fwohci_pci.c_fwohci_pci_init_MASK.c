
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 uint16_t VAR_15;

 VAR_15 = FUNC_3(VAR_10, VAR_7, 2);
 VAR_15 |= VAR_4 | VAR_5;

 VAR_15 &= ~VAR_5;

 FUNC_5(VAR_10, VAR_7, VAR_15, 2);





 if (FUNC_1(VAR_10) == (VAR_3 | VAR_2) &&
     FUNC_2(VAR_10) == 0)
  FUNC_4(VAR_10, 3);

 VAR_12 = VAR_11 = FUNC_3(VAR_10, VAR_8, 1);

 if (VAR_11 < 0x20) {
  VAR_12 = 0x20;
  FUNC_5(VAR_10, VAR_8, VAR_12, 1);
 }

 VAR_14 = VAR_13 = FUNC_3(VAR_10, VAR_6, 1);

 if (VAR_13 < 8) {
  VAR_14 = 8;
  FUNC_5(VAR_10, VAR_6, VAR_14, 1);
 }

 if (VAR_9) {
  FUNC_0(VAR_10, "latency timer %d -> %d.\n",
   VAR_11, VAR_12);
  FUNC_0(VAR_10, "cache size %d -> %d.\n",
   VAR_13, VAR_14);
 }

 return 0;
}
