
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int b ;


 int FUNC_0 (char*,int,char*,int const) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (int,size_t) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(const void *VAR_0, size_t VAR_1)
{
 const u_char *VAR_2 = (const u_char *)VAR_0;
 char VAR_3[3], *VAR_4;
 size_t VAR_5, VAR_6;

 if (VAR_1 > 65536)
  return FUNC_3("tohex: length > 65536");

 VAR_6 = VAR_1 * 2 + 1;
 VAR_4 = FUNC_2(1, VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(VAR_3, sizeof(VAR_3), "%02x", VAR_2[VAR_5]);
  FUNC_1(VAR_4, VAR_3, VAR_6);
 }
 return (VAR_4);
}
