
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct sc_info *VAR_3, u_int32_t VAR_4)
{
 u_int32_t VAR_5;




 VAR_5 = FUNC_1(VAR_3, VAR_1, 1);
 if ((VAR_5 & VAR_2) == 0) {



  return -1;
 }

 return FUNC_2(VAR_3, VAR_0, VAR_4);
}
