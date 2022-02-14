
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* authctxt; } ;
struct TYPE_2__ {int * kbdintctxt; } ;
typedef TYPE_1__ Authctxt ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ssh*,int ,int *) ;

void
FUNC_2(struct ssh *VAR_1)
{
 Authctxt *VAR_2 = VAR_1->authctxt;

 FUNC_1(VAR_1, VAR_0, ((void*)0));
 if (VAR_2->kbdintctxt != ((void*)0)) {
  FUNC_0(VAR_2->kbdintctxt);
  VAR_2->kbdintctxt = ((void*)0);
 }
}
