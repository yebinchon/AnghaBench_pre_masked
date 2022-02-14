
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int hex ;


 char* FUNC_0 (int,size_t) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
 char *VAR_3, VAR_4[5];
 size_t VAR_5, VAR_6 = VAR_2 * 3 + FUNC_4(VAR_0) + 2;

 if (VAR_2 > 65536 || (VAR_3 = FUNC_0(1, VAR_6)) == ((void*)0))
  return ((void*)0);
 FUNC_3(VAR_3, VAR_0, VAR_6);
 FUNC_2(VAR_3, ":", VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_1(VAR_4, sizeof(VAR_4), "%s%02x",
      VAR_5 > 0 ? ":" : "", VAR_1[VAR_5]);
  FUNC_2(VAR_3, VAR_4, VAR_6);
 }
 return VAR_3;
}
