
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;

uint32_t
FUNC_3(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{

 uint32_t VAR_4;
 uint32_t VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = 0;
 VAR_5 = FUNC_0(VAR_0, VAR_2);
 VAR_0 = FUNC_2(VAR_5, 0, VAR_0);
 for (VAR_7 = 31; VAR_7 > 0; VAR_7 --) {
  int VAR_8;
  uint32_t VAR_9, VAR_10, VAR_11, VAR_12;

  VAR_8 = 32 - VAR_7;
  VAR_9 = (VAR_0 << VAR_8) | (VAR_1 >> VAR_7);
  VAR_10 = FUNC_1(VAR_9, VAR_2) | (VAR_0 >> VAR_7);
  VAR_11 = (VAR_9 - VAR_2) >> VAR_8;
  VAR_12 = VAR_1 - (VAR_2 << VAR_7);
  VAR_0 = FUNC_2(VAR_10, VAR_11, VAR_0);
  VAR_1 = FUNC_2(VAR_10, VAR_12, VAR_1);
  VAR_4 |= VAR_10 << VAR_7;
 }
 VAR_6 = FUNC_1(VAR_1, VAR_2) | VAR_0;
 VAR_4 |= VAR_6;
 *VAR_3 = FUNC_2(VAR_6, VAR_1 - VAR_2, VAR_1);
 return VAR_4;
}
