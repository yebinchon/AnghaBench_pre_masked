
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_9 ;

int
FUNC_2(void)
{
 uint32_t VAR_10;
 int VAR_11;


 FUNC_1(VAR_9, VAR_7, FUNC_0(VAR_9, VAR_7) | VAR_0);


 VAR_10 = FUNC_0(VAR_9, VAR_1);
 VAR_10 &= ~VAR_6;
 FUNC_1(VAR_9, VAR_1, VAR_10);

 for (VAR_11 = 100000; VAR_11 > 0; VAR_11--) {
  if (FUNC_0(VAR_9, VAR_1) &
     VAR_5) {
   break;
  }
 }
 if (VAR_11 <= 0) {
  return VAR_8;
 }


 VAR_10 |= VAR_3;
 VAR_10 &= ~VAR_2;
 FUNC_1(VAR_9, VAR_1, VAR_10);

 VAR_10 |= VAR_4;
 FUNC_1(VAR_9, VAR_1, VAR_10);

 return 0;
}
