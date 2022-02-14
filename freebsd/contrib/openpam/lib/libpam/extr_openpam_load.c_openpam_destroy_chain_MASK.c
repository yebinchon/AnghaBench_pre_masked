
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * module; int optv; int optc; struct TYPE_4__* next; } ;
typedef TYPE_1__ pam_chain_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(pam_chain_t *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;
 FUNC_3(VAR_0->next);
 VAR_0->next = ((void*)0);
 FUNC_1(VAR_0->optc, VAR_0->optv);
 FUNC_2(VAR_0->module);
 VAR_0->module = ((void*)0);
 FUNC_0(VAR_0);
}
