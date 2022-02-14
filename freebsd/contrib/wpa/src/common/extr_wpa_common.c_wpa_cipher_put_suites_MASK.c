
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_1(u8 *VAR_8, int VAR_9)
{
 u8 *VAR_10 = VAR_8;

 if (VAR_9 & VAR_1) {
  FUNC_0(VAR_10, VAR_3);
  VAR_10 += VAR_7;
 }
 if (VAR_9 & VAR_6) {
  FUNC_0(VAR_10, VAR_5);
  VAR_10 += VAR_7;
 }
 if (VAR_9 & VAR_2) {
  FUNC_0(VAR_10, VAR_4);
  VAR_10 += VAR_7;
 }

 return (VAR_10 - VAR_8) / VAR_0;
}
