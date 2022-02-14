
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_basic_body {size_t version; size_t priority; size_t key_server; size_t macsec_desired; size_t macsec_capability; int ckn; int algo_agility; int actor_mn; int actor_mi; int actor_sci; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (struct ieee802_1x_mka_basic_body*) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_7(struct ieee802_1x_mka_basic_body *VAR_2)
{
 size_t VAR_3;

 if (!VAR_2)
  return;


 VAR_3 = FUNC_2(VAR_2);
 FUNC_6(VAR_1, "MKA Basic Parameter Set");
 FUNC_6(VAR_1, "\tMKA Version Identifier: %d", VAR_2->version);
 FUNC_6(VAR_1, "\tKey Server Priority: %d", VAR_2->priority);
 FUNC_6(VAR_1, "\tKey Server: %d", VAR_2->key_server);
 FUNC_6(VAR_1, "\tMACsec Desired: %d", VAR_2->macsec_desired);
 FUNC_6(VAR_1, "\tMACsec Capability: %d",
     VAR_2->macsec_capability);
 FUNC_6(VAR_1, "\tParameter set body length: %zu", VAR_3);
 FUNC_6(VAR_1, "\tSCI: %s", FUNC_4(&VAR_2->actor_sci));
 FUNC_6(VAR_1, "\tActor's Member Identifier: %s",
     FUNC_3(VAR_2->actor_mi));
 FUNC_6(VAR_1, "\tActor's Message Number: %d",
     FUNC_1(VAR_2->actor_mn));
 FUNC_6(VAR_1, "\tAlgorithm Agility: %s",
     FUNC_0(VAR_2->algo_agility));
 FUNC_5(VAR_1, "\tCAK Name", VAR_2->ckn,
      VAR_3 + VAR_0 - sizeof(*VAR_2));
}
