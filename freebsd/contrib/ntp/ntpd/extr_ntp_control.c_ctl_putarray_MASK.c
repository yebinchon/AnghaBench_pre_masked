
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,size_t) ;
 int FUNC_2 (char*,size_t,char*,double) ;

__attribute__((used)) static void
FUNC_3(
 const char *VAR_1,
 double *VAR_2,
 int VAR_3
 )
{
 char *VAR_4, *VAR_5;
 char VAR_6[200];
 int VAR_7, VAR_8;

 VAR_4 = VAR_6;
 VAR_5 = VAR_6 + sizeof(VAR_6);
 VAR_7 = VAR_3;
 do {
  if (VAR_7 == 0)
   VAR_7 = VAR_0;
  VAR_7--;
  VAR_8 = FUNC_2(VAR_4, (size_t)(VAR_5 - VAR_4), " %.2f", VAR_2[VAR_7] * 1e3);
  FUNC_0(VAR_8 >= 0 && (size_t)VAR_8 < (size_t)(VAR_5 - VAR_4));
  VAR_4 += VAR_8;
 } while (VAR_7 != VAR_3);
 FUNC_1(VAR_1, VAR_6, (size_t)(VAR_4 - VAR_6));
}
