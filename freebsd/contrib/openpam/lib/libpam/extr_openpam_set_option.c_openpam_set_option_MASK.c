
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* current; } ;
typedef TYPE_1__ pam_handle_t ;
struct TYPE_5__ {int optc; char** optv; } ;
typedef TYPE_2__ pam_chain_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char**,char*,int,char const*,char const*) ;
 int FUNC_4 (char*) ;
 char** FUNC_5 (char**,int) ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;

int
FUNC_7(pam_handle_t *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 pam_chain_t *VAR_6;
 char *VAR_7, **VAR_8;
 size_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_4);
 if (VAR_3 == ((void*)0) || VAR_3->current == ((void*)0) || VAR_4 == ((void*)0))
  FUNC_2(VAR_2);
 VAR_6 = VAR_3->current;
 for (VAR_9 = 0; VAR_4[VAR_9] != '\0'; ++VAR_9)
  if (VAR_4[VAR_9] == '=')
   break;
 for (VAR_10 = 0; VAR_10 < VAR_6->optc; ++VAR_10) {
  if (FUNC_6(VAR_6->optv[VAR_10], VAR_4, VAR_9) == 0 &&
      (VAR_6->optv[VAR_10][VAR_9] == '\0' || VAR_6->optv[VAR_10][VAR_9] == '='))
   break;
 }
 if (VAR_5 == ((void*)0)) {

  if (VAR_10 == VAR_6->optc)
   FUNC_2(VAR_1);
  for (FUNC_4(VAR_6->optv[VAR_10]); VAR_10 < VAR_6->optc; ++VAR_10)
   VAR_6->optv[VAR_10] = VAR_6->optv[VAR_10 + 1];
  VAR_6->optv[VAR_10] = ((void*)0);
  FUNC_2(VAR_1);
 }
 if (FUNC_3(&VAR_7, "%.*s=%s", (int)VAR_9, VAR_4, VAR_5) < 0)
  FUNC_2(VAR_0);
 if (VAR_10 == VAR_6->optc) {

  VAR_8 = FUNC_5(VAR_6->optv, sizeof(char *) * (VAR_6->optc + 2));
  if (VAR_8 == ((void*)0)) {
   FUNC_1(VAR_7);
   FUNC_2(VAR_0);
  }
  VAR_8[VAR_10] = VAR_7;
  VAR_8[VAR_10 + 1] = ((void*)0);
  VAR_6->optv = VAR_8;
  ++VAR_6->optc;
 } else {

  FUNC_1(VAR_6->optv[VAR_10]);
  VAR_6->optv[VAR_10] = VAR_7;
 }
 FUNC_2(VAR_1);
}
