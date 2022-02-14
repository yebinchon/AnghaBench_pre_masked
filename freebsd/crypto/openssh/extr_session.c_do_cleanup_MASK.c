
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_6__ {scalar_t__ gss_cleanup_creds; scalar_t__ kerberos_ticket_cleanup; scalar_t__ use_pam; } ;
struct TYPE_5__ {int pw; scalar_t__ krb5_ctx; int authenticated; } ;
typedef TYPE_1__ Authctxt ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (struct ssh*,int ) ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;

void
FUNC_12(struct ssh *VAR_5, Authctxt *VAR_6)
{
 static int VAR_7 = 0;

 FUNC_1("do_cleanup");


 if (VAR_1)
  return;


 if (VAR_7)
  return;
 VAR_7 = 1;

 if (VAR_6 == ((void*)0))
  return;
 if (!VAR_6->authenticated)
  return;
 FUNC_0(VAR_6->pw);


 if (VAR_0 != ((void*)0)) {
  FUNC_10(VAR_6->pw);
  FUNC_11(VAR_0);
  FUNC_5();
  FUNC_2(VAR_0);
  VAR_0 = ((void*)0);
 }





 if (!VAR_4 || FUNC_4())
  FUNC_6(VAR_5, VAR_3);
}
