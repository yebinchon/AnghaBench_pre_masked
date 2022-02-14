
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(struct sc_info *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 u_int32_t VAR_13, VAR_14;
 u_int32_t VAR_15, VAR_16;






 if (VAR_9 < 0 || VAR_5 < VAR_9)
  return -1;
 if (VAR_10 == VAR_3 &&
     (VAR_9 != VAR_4 && VAR_9 != VAR_5))
  return -1;
 if (VAR_12) {
  VAR_15 = VAR_7;
  VAR_16 = VAR_6;
 }
 else {
  VAR_15 = VAR_6;
  VAR_16 = VAR_7;
 }

 if (VAR_9 == VAR_5) {
  VAR_13 = VAR_10 | VAR_10 << 2 |
   ((VAR_11 << 1 | VAR_15) | VAR_15 << 3) << 8 |
   ((VAR_11 << 1 | VAR_16) | VAR_16 << 3) << 12;



  FUNC_2(VAR_8, VAR_2, VAR_13, 2);
 }
 else {
  VAR_14 = ~(0x0303 << VAR_9 * 2);
  VAR_13 = FUNC_1(VAR_8, VAR_0, 2);
  VAR_13 = (VAR_13 & VAR_14) | ((VAR_10 | VAR_10 << 8) << VAR_9 * 2);



  FUNC_2(VAR_8, VAR_0, VAR_13, 2);
  VAR_14 = ~(0xff << VAR_9 * 8);
  VAR_13 = FUNC_1(VAR_8, VAR_1, 4);
  VAR_13 = (VAR_13 & VAR_14) |
   (((VAR_11 << 1 | VAR_15) | VAR_15 << 3) |
    ((VAR_11 << 1 | VAR_16) | VAR_16 << 3) << 4) << VAR_9 * 8;



  FUNC_2(VAR_8, VAR_1, VAR_13, 4);


  FUNC_2(VAR_8, VAR_1, 0x00, 4);
 }

 return 0;
}
