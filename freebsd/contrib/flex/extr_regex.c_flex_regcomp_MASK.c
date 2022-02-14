
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int,int *,char*,int const) ;
 int FUNC_7 (char*,int const,char*,char const*,char*) ;

void FUNC_8(regex_t *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3;

 FUNC_4 (VAR_0, 0, sizeof (regex_t));

 if ((VAR_3 = FUNC_5 (VAR_0, VAR_1, VAR_2)) != 0) {
        const int VAR_4 = 200;
        char *VAR_5, *VAR_6;

  VAR_5 = (char*)FUNC_1(VAR_4 *sizeof(char));
  if (!VAR_5)
   FUNC_2(FUNC_0("Unable to allocate buffer to report regcomp"));
  VAR_6 = (char*)FUNC_1(VAR_4 *sizeof(char));
  if (!VAR_6)
   FUNC_2(FUNC_0("Unable to allocate buffer for regerror"));
  FUNC_6 (VAR_3, VAR_0, VAR_6, VAR_4);
  FUNC_7 (VAR_5, VAR_4, "regcomp for \"%s\" failed: %s", VAR_1, VAR_6);

  FUNC_2 (VAR_5);
        FUNC_3(VAR_5);
        FUNC_3(VAR_6);
 }
}
