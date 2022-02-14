
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct krb5_key_state {struct des1_state* ks_priv; } ;
struct des1_state {int ds_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 struct des1_state* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_3 (struct timeval*,int *) ;

__attribute__((used)) static void
FUNC_4(struct krb5_key_state *VAR_5)
{
 static struct timeval VAR_6;
 struct des1_state *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct des1_state), VAR_1, VAR_2|VAR_3);
 FUNC_2(&VAR_7->ds_lock, "gss des lock", ((void*)0), VAR_0);
 VAR_5->ks_priv = VAR_7;
 if (FUNC_3(&VAR_6, &VAR_4))
  FUNC_0(13, "DES cipher for Kerberos GSS");
}
