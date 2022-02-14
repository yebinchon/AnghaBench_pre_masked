
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_user_ent {int au_never; int au_always; int au_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ,char**) ;
 int VAR_1 ;

__attribute__((used)) static struct au_user_ent *
FUNC_4(char *VAR_2, struct au_user_ent *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 char *VAR_7;

 VAR_4 = FUNC_3(VAR_2, VAR_1, &VAR_7);
 VAR_5 = FUNC_3(((void*)0), VAR_1, &VAR_7);
 VAR_6 = FUNC_3(((void*)0), VAR_1, &VAR_7);

 if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
  return (((void*)0));

 if (FUNC_2(VAR_4) >= VAR_0)
  return (((void*)0));

 FUNC_1(VAR_3->au_name, VAR_4, VAR_0);
 if (FUNC_0(VAR_5, &(VAR_3->au_always)) == -1)
  return (((void*)0));

 if (FUNC_0(VAR_6, &(VAR_3->au_never)) == -1)
  return (((void*)0));

 return (VAR_3);
}
