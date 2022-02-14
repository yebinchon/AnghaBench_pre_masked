
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct sc_info *VAR_4, int VAR_5)
{
 u_int32_t VAR_6, VAR_7;




 if (VAR_5 == VAR_3)
  VAR_7 = ~VAR_1;
 else
  VAR_7 = ~VAR_2;

 VAR_6 = FUNC_1(VAR_4, VAR_0, 1);
 FUNC_2(VAR_4, VAR_0, VAR_6 & VAR_7, 1);

 return;
}
