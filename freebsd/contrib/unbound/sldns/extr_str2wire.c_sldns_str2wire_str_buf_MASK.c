
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,char const**) ;

int FUNC_2(const char* VAR_4, uint8_t* VAR_5, size_t* VAR_6)
{
 uint8_t VAR_7 = 0;
 size_t VAR_8 = 0;
 const char* VAR_9 = VAR_4;

 if(*VAR_6 < 1)
  return VAR_0;


 while(FUNC_1(&VAR_7, &VAR_9)) {
  if(VAR_8 >= 255)
   return FUNC_0(VAR_1, VAR_9-VAR_4);
  if(*VAR_6 < VAR_8+1)
   return FUNC_0(VAR_0,
    VAR_9-VAR_4);
  VAR_5[++VAR_8] = VAR_7;
 }
 if(!VAR_9)
  return VAR_3;
 VAR_5[0] = (uint8_t)VAR_8;
 *VAR_6 = VAR_8+1;
 return VAR_2;
}
