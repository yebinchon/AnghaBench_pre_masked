
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (char const*,int *,size_t*,int*) ;

int FUNC_3(const char* VAR_4, uint8_t* VAR_5, size_t* VAR_6,
 uint8_t* VAR_7, size_t VAR_8)
{
 size_t VAR_9 = *VAR_6;
 int VAR_10 = 0;
 int VAR_11 = FUNC_2(VAR_4, VAR_5, &VAR_9, &VAR_10);
 if(VAR_11) return VAR_11;

 if(VAR_10 && VAR_7 && VAR_9 > 0) {
  if(VAR_9 + VAR_8 - 1 > VAR_0)
   return FUNC_0(VAR_2,
    VAR_0);
  if(VAR_9 + VAR_8 - 1 > *VAR_6)
   return FUNC_0(VAR_1,
    *VAR_6);
  FUNC_1(VAR_5+VAR_9-1, VAR_7, VAR_8);
  *VAR_6 = VAR_9 + VAR_8 - 1;
 } else
  *VAR_6 = VAR_9;
 return VAR_3;
}
