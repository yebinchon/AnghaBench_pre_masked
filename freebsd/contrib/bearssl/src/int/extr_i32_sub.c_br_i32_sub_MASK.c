
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;

uint32_t
FUNC_3(uint32_t *VAR_0, const uint32_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = 0;
 VAR_5 = (VAR_0[0] + 63) >> 5;
 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4 ++) {
  uint32_t VAR_6, VAR_7, VAR_8;

  VAR_6 = VAR_0[VAR_4];
  VAR_7 = VAR_1[VAR_4];
  VAR_8 = VAR_6 - VAR_7 - VAR_3;





  VAR_3 = (VAR_3 & FUNC_0(VAR_8, VAR_6)) | FUNC_1(VAR_8, VAR_6);
  VAR_0[VAR_4] = FUNC_2(VAR_2, VAR_8, VAR_6);
 }
 return VAR_3;
}
