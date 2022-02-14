
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (long double*,int ,int) ;
 int FUNC_4 (char*,size_t,char*,long double) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_2, size_t VAR_3)
{
 long double VAR_4;
 size_t VAR_5, VAR_6, VAR_7;
 int VAR_8;
 char *VAR_9;

 if (VAR_2 == ((void*)0) || VAR_3 == 0 || VAR_3 % 2 != 0 ||
     VAR_3 / 2 > sizeof(long double))
  return (((void*)0));

 FUNC_3(&VAR_4, 0, sizeof(long double));

 for (VAR_7 = 0; VAR_7 < VAR_3 / 2; ++VAR_7) {
  VAR_8 = FUNC_1(VAR_2[VAR_3 - VAR_7 * 2 - 1]) +
      FUNC_1(VAR_2[VAR_3 - VAR_7 * 2 - 2]) * 16;

  if (VAR_8 < 0 || VAR_8 > 255)
   return (((void*)0));


  ((unsigned char *)&VAR_4)[VAR_7] = (unsigned char)(VAR_8);




 }

 VAR_5 = 256;
 VAR_6 = 0;
again:
 if ((VAR_9 = FUNC_2(sizeof(char) * VAR_5)) == ((void*)0))
  return (((void*)0));

 if (FUNC_4(VAR_9, VAR_5, "%Lfd", VAR_4) >= (int)VAR_5) {
  FUNC_0(VAR_9);
  if (VAR_6++ > VAR_1)
   return (((void*)0));
  VAR_5 *= VAR_0;
  goto again;
 }

 return (VAR_9);
}
