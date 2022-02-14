
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {struct kex* kex; } ;
struct kex {int c25519_client_pubkey; int c25519_client_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ssh*,int ,int *) ;
 int FUNC_4 (struct ssh*,int ,int) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (struct ssh*,int ) ;

int
FUNC_7(struct ssh *VAR_3)
{
 struct kex *VAR_4 = VAR_3->kex;
 int VAR_5;

 FUNC_2(VAR_4->c25519_client_key, VAR_4->c25519_client_pubkey);




 if ((VAR_5 = FUNC_6(VAR_3, VAR_0)) != 0 ||
     (VAR_5 = FUNC_4(VAR_3, VAR_4->c25519_client_pubkey,
     sizeof(VAR_4->c25519_client_pubkey))) != 0 ||
     (VAR_5 = FUNC_5(VAR_3)) != 0)
  return VAR_5;

 FUNC_0("expecting SSH2_MSG_KEX_ECDH_REPLY");
 FUNC_3(VAR_3, VAR_1, &VAR_2);
 return 0;
}
