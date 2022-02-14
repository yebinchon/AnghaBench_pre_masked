
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
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,size_t) ;

const char *
FUNC_4(pam_handle_t *VAR_0,
 const char *VAR_1)
{
 pam_chain_t *VAR_2;
 size_t VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);
 if (VAR_0 == ((void*)0) || VAR_0->current == ((void*)0) || VAR_1 == ((void*)0))
  FUNC_1(((void*)0));
 VAR_2 = VAR_0->current;
 VAR_3 = FUNC_2(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_2->optc; ++VAR_4) {
  if (FUNC_3(VAR_2->optv[VAR_4], VAR_1, VAR_3) == 0) {
   if (VAR_2->optv[VAR_4][VAR_3] == '\0')
    FUNC_1(&VAR_2->optv[VAR_4][VAR_3]);
   else if (VAR_2->optv[VAR_4][VAR_3] == '=')
    FUNC_1(&VAR_2->optv[VAR_4][VAR_3 + 1]);
  }
 }
 FUNC_1(((void*)0));
}
