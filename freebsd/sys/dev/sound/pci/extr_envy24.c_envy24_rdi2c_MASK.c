
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 int FUNC_3 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct sc_info *VAR_8, u_int32_t VAR_9, u_int32_t VAR_10)
{
 u_int32_t VAR_11;
 int VAR_12;




 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_11 = FUNC_2(VAR_8, VAR_5, 1);
  if ((VAR_11 & VAR_6) == 0)
   break;
  FUNC_0(32);
 }
 if (VAR_12 == VAR_7) {
  return -1;
 }
 FUNC_3(VAR_8, VAR_0, VAR_10, 1);
 FUNC_3(VAR_8, VAR_2,
     (VAR_9 & VAR_3) | VAR_4, 1);
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_11 = FUNC_2(VAR_8, VAR_5, 1);
  if ((VAR_11 & VAR_6) == 0)
   break;
  FUNC_0(32);
 }
 if (VAR_12 == VAR_7) {
  return -1;
 }
 VAR_11 = FUNC_2(VAR_8, VAR_1, 1);




 return (int)VAR_11;
}
