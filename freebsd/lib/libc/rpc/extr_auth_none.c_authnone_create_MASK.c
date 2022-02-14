
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int ah_verf; int ah_cred; int ah_ops; } ;
struct authnone_private {TYPE_1__ no_client; int mcnt; int marshalled_client; } ;
typedef int XDR ;
typedef TYPE_1__ AUTH ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 struct authnone_private* VAR_4 ;
 struct authnone_private* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;

AUTH *
FUNC_8(void)
{
 struct authnone_private *VAR_5 = VAR_4;
 XDR VAR_6;
 XDR *VAR_7;

 FUNC_4(&VAR_3);
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_3(1, sizeof (*VAR_5));
  if (VAR_5 == ((void*)0)) {
   FUNC_5(&VAR_3);
   return (0);
  }
  VAR_4 = VAR_5;
 }
 if (!VAR_5->mcnt) {
  VAR_5->no_client.ah_cred = VAR_5->no_client.ah_verf = VAR_2;
  VAR_5->no_client.ah_ops = FUNC_2();
  VAR_7 = &VAR_6;
  FUNC_7(VAR_7, VAR_5->marshalled_client,
      (u_int)VAR_0, VAR_1);
  (void)FUNC_6(VAR_7, &VAR_5->no_client.ah_cred);
  (void)FUNC_6(VAR_7, &VAR_5->no_client.ah_verf);
  VAR_5->mcnt = FUNC_1(VAR_7);
  FUNC_0(VAR_7);
 }
 FUNC_5(&VAR_3);
 return (&VAR_5->no_client);
}
