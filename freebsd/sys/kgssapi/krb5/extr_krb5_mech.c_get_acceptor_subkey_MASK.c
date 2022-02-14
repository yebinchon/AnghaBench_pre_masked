
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_keyblock {int dummy; } ;
struct krb5_context {int kc_local_subkey; int kc_remote_subkey; } ;


 int FUNC_0 (int *,struct krb5_keyblock**) ;
 scalar_t__ FUNC_1 (struct krb5_context*) ;

__attribute__((used)) static void
FUNC_2(struct krb5_context *VAR_0, struct krb5_keyblock **VAR_1)
{

 if (FUNC_1(VAR_0))
  FUNC_0(&VAR_0->kc_remote_subkey, VAR_1);
 else
  FUNC_0(&VAR_0->kc_local_subkey, VAR_1);
}
