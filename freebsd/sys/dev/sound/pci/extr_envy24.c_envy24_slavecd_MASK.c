
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
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 int FUNC_3 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct sc_info *VAR_5)
{
 u_int32_t VAR_6;
 int VAR_7;




 FUNC_3(VAR_5, VAR_0,
     VAR_1 | VAR_3, 1);
 FUNC_0(10);
 FUNC_3(VAR_5, VAR_0, 0, 1);
 FUNC_0(1000);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_2(VAR_5, VAR_0, 1);
  if (VAR_6 & VAR_2) {
   return 0;
  }
 }

 return -1;
}
