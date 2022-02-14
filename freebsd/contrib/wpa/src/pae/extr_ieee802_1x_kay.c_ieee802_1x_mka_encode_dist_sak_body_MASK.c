
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_7__ {int len; int key; } ;
struct ieee802_1x_mka_participant {TYPE_3__ kek; TYPE_2__* kay; struct data_key* new_key; } ;
struct ieee802_1x_mka_dist_sak_body {scalar_t__ sak; int kn; scalar_t__ dan; scalar_t__ confid_offset; int type; } ;
struct TYPE_5__ {int kn; } ;
struct data_key {int key; TYPE_1__ key_identifier; scalar_t__ an; scalar_t__ confidentiality_offset; } ;
typedef int be64 ;
struct TYPE_8__ {int sak_len; int id; } ;
struct TYPE_6__ {unsigned int macsec_csindex; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ,scalar_t__) ;
 TYPE_4__* VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee802_1x_mka_dist_sak_body*) ;
 unsigned int FUNC_4 (struct ieee802_1x_mka_participant*) ;
 int FUNC_5 (scalar_t__,int *,int) ;
 int FUNC_6 (struct ieee802_1x_mka_dist_sak_body*,unsigned int) ;
 int FUNC_7 (int ,char*) ;
 struct ieee802_1x_mka_dist_sak_body* FUNC_8 (struct wpabuf*,unsigned int) ;

__attribute__((used)) static int
FUNC_9(
 struct ieee802_1x_mka_participant *VAR_8,
 struct wpabuf *VAR_9)
{
 struct ieee802_1x_mka_dist_sak_body *VAR_10;
 struct data_key *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_4(VAR_8);
 VAR_10 = FUNC_8(VAR_9, VAR_12);
 VAR_10->type = VAR_3;
 FUNC_6(VAR_10, VAR_12 - VAR_4);
 if (VAR_12 == VAR_4) {
  VAR_10->confid_offset = 0;
  VAR_10->dan = 0;
  return 0;
 }

 VAR_11 = VAR_8->new_key;
 if (!VAR_11) {
  FUNC_7(VAR_5,
      "KaY: No SAK available to build Distributed SAK parameter set");
  return -1;
 }
 VAR_10->confid_offset = VAR_11->confidentiality_offset;
 VAR_10->dan = VAR_11->an;
 VAR_10->kn = FUNC_1(VAR_11->key_identifier.kn);
 VAR_13 = VAR_8->kay->macsec_csindex;
 VAR_14 = 0;
 if (VAR_13 >= VAR_1)
  return -1;
 if (VAR_13 != VAR_2) {
  be64 VAR_15;

  VAR_15 = FUNC_2(VAR_7[VAR_13].id);
  FUNC_5(VAR_10->sak, &VAR_15, VAR_0);
  VAR_14 = VAR_0;
 }
 if (FUNC_0(VAR_8->kek.key, VAR_8->kek.len,
       VAR_7[VAR_13].sak_len / 8,
       VAR_11->key, VAR_10->sak + VAR_14)) {
  FUNC_7(VAR_6, "KaY: AES wrap failed");
  return -1;
 }

 FUNC_3(VAR_10);

 return 0;
}
