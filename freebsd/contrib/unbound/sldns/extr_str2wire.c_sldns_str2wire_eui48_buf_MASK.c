
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int*) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if(*VAR_5 < 6)
  return VAR_0;
 if (FUNC_0(VAR_3, "%2x-%2x-%2x-%2x-%2x-%2x%n",
   &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12) != 6 ||
   VAR_12 != (int)FUNC_1(VAR_3))
  return VAR_2;
 VAR_4[0] = VAR_6;
 VAR_4[1] = VAR_7;
 VAR_4[2] = VAR_8;
 VAR_4[3] = VAR_9;
 VAR_4[4] = VAR_10;
 VAR_4[5] = VAR_11;
 *VAR_5 = 6;
 return VAR_1;
}
