
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* id; } ;
typedef TYPE_1__ OpenPGP_key ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 () ;

void
FUNC_5(OpenPGP_key *VAR_2)
{
 static int VAR_3 = 0;

 if (!VAR_3) {
  VAR_3 = 1;

  FUNC_0(&VAR_1);
 }
 if (VAR_2 && FUNC_2(VAR_2->id) == ((void*)0)) {
  if (FUNC_4())
   FUNC_3("openpgp_trust_add(%s)\n", VAR_2->id);
  FUNC_1(&VAR_1, VAR_2, VAR_0);
 }
}
