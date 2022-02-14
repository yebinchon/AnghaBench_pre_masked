
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int *,size_t,char*,size_t) ;
 char* FUNC_1 (int,size_t) ;
 int FUNC_2 (char*,size_t) ;
 size_t FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
 char *VAR_3;
 size_t VAR_4 = FUNC_6(VAR_0) + 1;
 size_t VAR_5 = ((VAR_2 + 2) / 3) * 4 + VAR_4 + 1;
 int VAR_6;

 if (VAR_2 > 65536 || (VAR_3 = FUNC_1(1, VAR_5)) == ((void*)0))
  return ((void*)0);
 FUNC_5(VAR_3, VAR_0, VAR_5);
 FUNC_4(VAR_3, ":", VAR_5);
 if (VAR_2 == 0)
  return VAR_3;
 if ((VAR_6 = FUNC_0(VAR_1, VAR_2,
     VAR_3 + VAR_4, VAR_5 - VAR_4)) == -1) {
  FUNC_2(VAR_3, VAR_5);
  return ((void*)0);
 }

 VAR_3[FUNC_3(VAR_3, "=")] = '\0';
 return VAR_3;
}
