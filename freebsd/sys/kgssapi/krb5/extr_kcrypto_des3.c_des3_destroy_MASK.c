
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_key_state {struct des3_state* ks_priv; } ;
struct des3_state {int ds_lock; scalar_t__ ds_session; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct des3_state*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct krb5_key_state *VAR_1)
{
 struct des3_state *VAR_2 = VAR_1->ks_priv;

 if (VAR_2->ds_session)
  FUNC_0(VAR_2->ds_session);
 FUNC_2(&VAR_2->ds_lock);
 FUNC_1(VAR_1->ks_priv, VAR_0);
}
