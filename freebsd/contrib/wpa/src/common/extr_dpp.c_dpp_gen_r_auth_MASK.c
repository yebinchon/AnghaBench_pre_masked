
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const u8 ;
struct wpabuf {int dummy; } ;
struct dpp_authentication {TYPE_3__* curve; int const* r_nonce; int const* i_nonce; TYPE_2__* own_bi; TYPE_1__* peer_bi; int own_protocol_key; int peer_protocol_key; scalar_t__ initiator; } ;
struct TYPE_6__ {size_t nonce_len; size_t hash_len; } ;
struct TYPE_5__ {int pubkey; } ;
struct TYPE_4__ {int pubkey; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,size_t,int const**,size_t*,int const*) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*) ;
 int const* FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_7(struct dpp_authentication *VAR_1, u8 *VAR_2)
{
 struct wpabuf *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 const u8 *VAR_7[7];
 size_t VAR_8[7];
 size_t VAR_9, VAR_10 = 0;
 size_t VAR_11;
 u8 VAR_12 = 0;
 int VAR_13 = -1;


 VAR_11 = VAR_1->curve->nonce_len;

 if (VAR_1->initiator) {
  VAR_3 = FUNC_0(VAR_1->own_protocol_key, 0);
  VAR_4 = FUNC_0(VAR_1->peer_protocol_key, 0);
  if (VAR_1->own_bi)
   VAR_5 = FUNC_0(VAR_1->own_bi->pubkey, 0);
  else
   VAR_5 = ((void*)0);
  VAR_6 = FUNC_0(VAR_1->peer_bi->pubkey, 0);
 } else {
  VAR_3 = FUNC_0(VAR_1->peer_protocol_key, 0);
  VAR_4 = FUNC_0(VAR_1->own_protocol_key, 0);
  if (VAR_1->peer_bi)
   VAR_5 = FUNC_0(VAR_1->peer_bi->pubkey, 0);
  else
   VAR_5 = ((void*)0);
  VAR_6 = FUNC_0(VAR_1->own_bi->pubkey, 0);
 }
 if (!VAR_3 || !VAR_4 || !VAR_6)
  goto fail;

 VAR_7[VAR_10] = VAR_1->i_nonce;
 VAR_8[VAR_10] = VAR_11;
 VAR_10++;

 VAR_7[VAR_10] = VAR_1->r_nonce;
 VAR_8[VAR_10] = VAR_11;
 VAR_10++;

 VAR_7[VAR_10] = FUNC_5(VAR_3);
 VAR_8[VAR_10] = FUNC_6(VAR_3) / 2;
 VAR_10++;

 VAR_7[VAR_10] = FUNC_5(VAR_4);
 VAR_8[VAR_10] = FUNC_6(VAR_4) / 2;
 VAR_10++;

 if (VAR_5) {
  VAR_7[VAR_10] = FUNC_5(VAR_5);
  VAR_8[VAR_10] = FUNC_6(VAR_5) / 2;
  VAR_10++;
 }

 VAR_7[VAR_10] = FUNC_5(VAR_6);
 VAR_8[VAR_10] = FUNC_6(VAR_6) / 2;
 VAR_10++;

 VAR_7[VAR_10] = &VAR_12;
 VAR_8[VAR_10] = 1;
 VAR_10++;

 FUNC_3(VAR_0, "DPP: R-auth hash components");
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_2(VAR_0, "DPP: hash component", VAR_7[VAR_9], VAR_8[VAR_9]);
 VAR_13 = FUNC_1(VAR_1->curve, VAR_10, VAR_7, VAR_8, VAR_2);
 if (VAR_13 == 0)
  FUNC_2(VAR_0, "DPP: R-auth", VAR_2,
       VAR_1->curve->hash_len);
fail:
 FUNC_4(VAR_3);
 FUNC_4(VAR_4);
 FUNC_4(VAR_5);
 FUNC_4(VAR_6);
 return VAR_13;
}
