
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (int *,char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(pam_handle_t *VAR_1, FILE *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;

 while ((VAR_3 = FUNC_0(VAR_2, &VAR_7)) != ((void*)0)) {
  if (VAR_7 < 4 || FUNC_3(VAR_3, "SSH_", 4) != 0)
   continue;


  for (VAR_4 = VAR_5 = VAR_3; VAR_4 < VAR_3 + VAR_7; ++VAR_4)
   if (*VAR_4 == '=')
    break;
  if (VAR_4 == VAR_3 + VAR_7 || *VAR_4 != '=')
   continue;
  *VAR_4 = '\0';


  for (VAR_6 = ++VAR_4; VAR_4 < VAR_3 + VAR_7; ++VAR_4)
   if (*VAR_4 == ';')
    break;
  if (VAR_4 == VAR_3 + VAR_7 || *VAR_4 != ';')
   continue;
  *VAR_4 = '\0';


  FUNC_1(VAR_0, "got %s: %s", VAR_5, VAR_6);
  FUNC_2(VAR_1, VAR_5, VAR_6, 1);
 }
}
