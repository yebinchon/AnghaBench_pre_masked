
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_dist_sak_body {size_t dan; size_t confid_offset; int sak; int kn; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (struct ieee802_1x_mka_dist_sak_body*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct ieee802_1x_mka_dist_sak_body *VAR_1)
{
 size_t VAR_2;

 if (VAR_1 == ((void*)0))
  return;


 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(VAR_0, "Distributed SAK parameter set");
 FUNC_3(VAR_0, "\tDistributed AN........: %d", VAR_1->dan);
 FUNC_3(VAR_0, "\tConfidentiality Offset: %d",
     VAR_1->confid_offset);
 FUNC_3(VAR_0, "\tBody Length...........: %zu", VAR_2);
 if (!VAR_2)
  return;

 FUNC_3(VAR_0, "\tKey Number............: %d",
     FUNC_0(VAR_1->kn));

 FUNC_2(VAR_0, "\tAES Key Wrap of SAK...:", VAR_1->sak, 24);
}
