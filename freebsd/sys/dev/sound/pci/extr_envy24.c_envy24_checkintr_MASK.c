
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(struct sc_info *VAR_6, int VAR_7)
{
 u_int32_t VAR_8, VAR_9, VAR_10, VAR_11;




 VAR_10 = FUNC_1(VAR_6, VAR_0, 1);
 if (VAR_7 == VAR_5) {
  if ((VAR_11 = VAR_10 & VAR_2) != 0) {
   VAR_8 = ~VAR_4;
   VAR_9 = VAR_2 | VAR_1;
   FUNC_2(VAR_6, VAR_0, (VAR_10 & VAR_8) | VAR_9, 1);
  }
 }
 else {
  if ((VAR_11 = VAR_10 & VAR_4) != 0) {
   VAR_8 = ~VAR_2;
   VAR_9 = VAR_4 | VAR_3;
   FUNC_2(VAR_6, VAR_0, (VAR_10 & VAR_8) | VAR_9, 1);
  }
 }

 return VAR_11;
}
