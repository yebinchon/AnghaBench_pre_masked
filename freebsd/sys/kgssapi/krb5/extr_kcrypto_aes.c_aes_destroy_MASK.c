
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_key_state {struct aes_state* ks_priv; } ;
struct aes_state {scalar_t__ as_session_aes; scalar_t__ as_session_sha1; int as_lock; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct aes_state*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct krb5_key_state *VAR_1)
{
 struct aes_state *VAR_2 = VAR_1->ks_priv;

 if (VAR_2->as_session_aes != 0)
  FUNC_0(VAR_2->as_session_aes);
 if (VAR_2->as_session_sha1 != 0)
  FUNC_0(VAR_2->as_session_sha1);
 FUNC_2(&VAR_2->as_lock);
 FUNC_1(VAR_1->ks_priv, VAR_0);
}
