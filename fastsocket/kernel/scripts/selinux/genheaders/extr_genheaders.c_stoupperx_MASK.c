
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (char const*) ;
 char FUNC_3 (char) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_2)
{
 char *VAR_3 = FUNC_2(VAR_2);
 char *VAR_4;

 if (!VAR_3) {
  FUNC_1(VAR_1, "%s:  out of memory\n", VAR_0);
  FUNC_0(3);
 }

 for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
  *VAR_4 = FUNC_3(*VAR_4);
 return VAR_3;
}
