
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_key_state {struct aes_state* ks_priv; } ;
struct aes_state {int as_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aes_state* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct krb5_key_state *VAR_4)
{
 struct aes_state *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct aes_state), VAR_1, VAR_2|VAR_3);
 FUNC_1(&VAR_5->as_lock, "gss aes lock", ((void*)0), VAR_0);
 VAR_4->ks_priv = VAR_5;
}
