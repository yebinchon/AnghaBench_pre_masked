
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int *,size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*,char**,int) ;

int FUNC_4(const char* VAR_5, uint8_t* VAR_6, size_t* VAR_7)
{
 char* VAR_8;
 int VAR_9;
 VAR_9 = FUNC_3(VAR_5, &VAR_8, 10);
 if(*VAR_7 < ((size_t)VAR_9)+2)
  return VAR_0;
 if(VAR_9 > 65535)
  return VAR_1;

 if(VAR_9 == 0) {
  FUNC_2(VAR_6, 0);
  *VAR_7 = 2;
  return VAR_2;
 }
 if(*VAR_8 != ' ')
  return FUNC_0(VAR_4, VAR_8-(char*)VAR_5);
 VAR_8++;
 while(*VAR_8 == ' ')
  VAR_8++;

 VAR_9 = FUNC_1(VAR_8, VAR_6+2, (*VAR_7)-2);
 if(VAR_9 < 0)
  return VAR_3;
 FUNC_2(VAR_6, (uint16_t)VAR_9);
 *VAR_7 = ((size_t)VAR_9)+2;
 return VAR_2;
}
