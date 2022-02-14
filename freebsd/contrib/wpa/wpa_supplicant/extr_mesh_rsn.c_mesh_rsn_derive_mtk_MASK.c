
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* mesh_rsn; int * own_addr; } ;
struct sta_info {int mtk_len; int mtk; TYPE_2__* sae; int my_lid; int peer_lid; int * my_nonce; int * peer_nonce; int * addr; } ;
typedef int context ;
struct TYPE_4__ {int pmk; } ;
struct TYPE_3__ {int pairwise_cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ,char*,int *,int,int ,int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct wpa_supplicant *VAR_5, struct sta_info *VAR_6)
{
 u8 *VAR_7;
 u8 *VAR_8, *VAR_9;
 u8 *VAR_10 = VAR_5->own_addr;
 u8 *VAR_11 = VAR_6->addr;
 u8 VAR_12[2 * VAR_4 + 2 * 2 + VAR_2 + 2 * VAR_0];







 VAR_7 = VAR_12;
 if (FUNC_2(VAR_6->my_nonce, VAR_6->peer_nonce, VAR_4) < 0) {
  VAR_8 = VAR_6->my_nonce;
  VAR_9 = VAR_6->peer_nonce;
 } else {
  VAR_8 = VAR_6->peer_nonce;
  VAR_9 = VAR_6->my_nonce;
 }
 FUNC_3(VAR_7, VAR_8, VAR_4);
 VAR_7 += VAR_4;
 FUNC_3(VAR_7, VAR_9, VAR_4);
 VAR_7 += VAR_4;

 if (VAR_6->my_lid < VAR_6->peer_lid) {
  FUNC_1(VAR_7, VAR_6->my_lid);
  VAR_7 += 2;
  FUNC_1(VAR_7, VAR_6->peer_lid);
  VAR_7 += 2;
 } else {
  FUNC_1(VAR_7, VAR_6->peer_lid);
  VAR_7 += 2;
  FUNC_1(VAR_7, VAR_6->my_lid);
  VAR_7 += 2;
 }


 FUNC_0(VAR_7, VAR_1);
 VAR_7 += VAR_2;

 if (FUNC_2(VAR_10, VAR_11, VAR_0) < 0) {
  VAR_8 = VAR_10;
  VAR_9 = VAR_11;
 } else {
  VAR_8 = VAR_11;
  VAR_9 = VAR_10;
 }
 FUNC_3(VAR_7, VAR_8, VAR_0);
 VAR_7 += VAR_0;
 FUNC_3(VAR_7, VAR_9, VAR_0);

 VAR_6->mtk_len = FUNC_5(VAR_5->mesh_rsn->pairwise_cipher);
 FUNC_4(VAR_6->sae->pmk, VAR_3,
     "Temporal Key Derivation", VAR_12, sizeof(VAR_12),
     VAR_6->mtk, VAR_6->mtk_len);
 return 0;
}
