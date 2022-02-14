
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct krb5_key_state {int * ks_priv; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static void
FUNC_2(struct krb5_key_state *VAR_1)
{
 static struct timeval VAR_2;

 VAR_1->ks_priv = ((void*)0);
 if (FUNC_1(&VAR_2, &VAR_0))
  FUNC_0(13, "RC4 cipher for Kerberos GSS");
}
