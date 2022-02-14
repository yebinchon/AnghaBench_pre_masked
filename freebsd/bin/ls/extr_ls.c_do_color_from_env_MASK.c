
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(void)
{
 const char *VAR_1;
 bool VAR_2;

 VAR_2 = 0;
 VAR_1 = FUNC_0("CLICOLOR");
 if (VAR_1 == ((void*)0)) {




  VAR_1 = FUNC_0("COLORTERM");
  if (VAR_1 != ((void*)0) && *VAR_1 != '\0')
   VAR_2 = 1;
 } else
  VAR_2 = 1;

 return (VAR_2 &&
     (FUNC_1(VAR_0) || FUNC_0("CLICOLOR_FORCE")));
}
