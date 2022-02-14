
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (char const*) ;

size_t
FUNC_3(
 const char * VAR_0,
 char * VAR_1,
 char VAR_2,
 int VAR_3,
 size_t VAR_4
 )
{
 size_t VAR_5;
 size_t VAR_6;
 int VAR_7;
 size_t VAR_8;

 if (VAR_4 < 1)
  return 0;

 VAR_8 = FUNC_2(VAR_0);
 VAR_6 = 0;
 FUNC_0(VAR_1, 0, VAR_4);


 for (VAR_5 = 0, VAR_7 = 0; VAR_5 < VAR_8 && VAR_7 <= VAR_3; VAR_5++) {
  if (VAR_0[VAR_5] == VAR_2)
   VAR_7++;
  else if (VAR_7 == VAR_3 && VAR_6 < VAR_4)
   VAR_1[VAR_6++] = VAR_0[VAR_5];
 }
 VAR_6 = FUNC_1(VAR_6, VAR_4 - 1);
 VAR_1[VAR_6] = '\0';

 return VAR_6;
}
