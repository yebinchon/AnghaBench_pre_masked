
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sc_info*,int,int) ;
 int FUNC_2 (struct sc_info*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct sc_info *VAR_7, int VAR_8)
{
 u_int32_t VAR_9, VAR_10, VAR_11, VAR_12;




 VAR_11 = FUNC_1(VAR_7, VAR_5, 1);
 if (VAR_8 == VAR_6) {
  if ((VAR_12 = VAR_11 & VAR_2) != 0) {
   VAR_9 = ~VAR_4;
   FUNC_2(VAR_7, 0x1a, 0x01, 1);
   FUNC_2(VAR_7, VAR_5, (VAR_11 & VAR_9) | VAR_2 | 0x08, 1);
   VAR_10 = FUNC_1(VAR_7, VAR_0, 1);
   FUNC_2(VAR_7, VAR_0, VAR_10 | VAR_1, 1);
  }
 }
 else {
  if ((VAR_12 = VAR_11 & VAR_4) != 0) {
   VAR_9 = ~VAR_2;



   FUNC_2(VAR_7, VAR_5, (VAR_11 & VAR_9) | VAR_4, 1);
   VAR_10 = FUNC_1(VAR_7, VAR_0, 1);
   FUNC_2(VAR_7, VAR_0, VAR_10 | VAR_3, 1);
  }
 }

 return VAR_12;
}
