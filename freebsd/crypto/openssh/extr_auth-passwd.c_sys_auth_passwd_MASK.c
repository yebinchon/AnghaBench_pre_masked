
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* authctxt; } ;
struct passwd {char* pw_passwd; } ;
struct TYPE_2__ {scalar_t__ valid; struct passwd* pw; } ;
typedef TYPE_1__ Authctxt ;


 char* FUNC_0 (struct passwd*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,char*) ;

int
FUNC_3(struct ssh *VAR_0, const char *VAR_1)
{
 Authctxt *VAR_2 = VAR_0->authctxt;
 struct passwd *VAR_3 = VAR_2->pw;
 char *VAR_4, *VAR_5 = ((void*)0);


 char *VAR_6 = VAR_2->valid ? FUNC_0(VAR_3) : VAR_3->pw_passwd;


 if (FUNC_1(VAR_6, "") == 0 && FUNC_1(VAR_1, "") == 0)
  return (1);





 if (VAR_2->valid && VAR_6[0] && VAR_6[1])
  VAR_5 = VAR_6;
 VAR_4 = FUNC_2(VAR_1, VAR_5);





 return VAR_4 != ((void*)0) &&
     FUNC_1(VAR_4, VAR_6) == 0;
}
