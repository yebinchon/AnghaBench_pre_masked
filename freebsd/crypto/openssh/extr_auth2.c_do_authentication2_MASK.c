
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {TYPE_1__* authctxt; } ;
struct TYPE_3__ {int success; } ;
typedef TYPE_1__ Authctxt ;


 int VAR_0 ;
 int VAR_1 ;
 struct ssh* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ssh*,int *) ;
 int FUNC_1 (struct ssh*,int ,int *) ;
 int FUNC_2 (struct ssh*,int ,int *) ;

void
FUNC_3(Authctxt *VAR_5)
{
 struct ssh *VAR_6 = VAR_2;
 VAR_6->authctxt = VAR_5;
 FUNC_0(VAR_6, &VAR_3);
 FUNC_2(VAR_6, VAR_1, &VAR_4);
 FUNC_1(VAR_6, VAR_0, &VAR_5->success);
 VAR_6->authctxt = ((void*)0);
}
