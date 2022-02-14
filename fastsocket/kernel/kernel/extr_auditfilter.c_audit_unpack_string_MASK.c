
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,void*,size_t) ;
 scalar_t__ FUNC_3 (int) ;

char *FUNC_4(void **VAR_5, size_t *VAR_6, size_t VAR_7)
{
 char *VAR_8;

 if (!*VAR_5 || (VAR_7 == 0) || (VAR_7 > *VAR_6))
  return FUNC_0(-VAR_0);




 if (VAR_7 > VAR_4)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_1(VAR_7 + 1, VAR_3);
 if (FUNC_3(!VAR_8))
  return FUNC_0(-VAR_2);

 FUNC_2(VAR_8, *VAR_5, VAR_7);
 VAR_8[VAR_7] = 0;
 *VAR_5 += VAR_7;
 *VAR_6 -= VAR_7;

 return VAR_8;
}
