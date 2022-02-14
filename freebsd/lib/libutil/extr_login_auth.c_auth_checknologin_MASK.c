
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int login_cap_t ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 char* FUNC_3 (int *,char*,char*,int *) ;

void
FUNC_4(login_cap_t *VAR_1)
{
  const char *VAR_2;


  if (FUNC_2(VAR_1, "ignorenologin", 0))
    return;


  if ((VAR_2 = FUNC_3(VAR_1, "nologin", "", ((void*)0))) == ((void*)0))
    FUNC_1(1);






  if ((*VAR_2 && FUNC_0(VAR_2)) || FUNC_0(VAR_0))
    FUNC_1(1);
}
