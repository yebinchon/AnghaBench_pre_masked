
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct dpp_authentication {int* i_nonce; struct wpabuf* resp_msg; int k1; TYPE_3__* curve; TYPE_2__* peer_bi; TYPE_1__* own_bi; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;
struct TYPE_6__ {int nonce_len; } ;
struct TYPE_5__ {int* pubkey_hash; } ;
struct TYPE_4__ {int* pubkey_hash; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct wpabuf* FUNC_0 (struct dpp_authentication*,int,int *,int ,int const*,int const*,int *,int const*,int *,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_5(struct dpp_authentication *VAR_10,
          enum dpp_status_error VAR_11)
{
 struct wpabuf *VAR_12;
 const u8 *VAR_13, *VAR_14, *VAR_15;




 if (!VAR_10->own_bi)
  return -1;
 FUNC_3(VAR_6, "DPP: Build Authentication Response");

 VAR_13 = VAR_10->own_bi->pubkey_hash;
 if (VAR_10->peer_bi)
  VAR_14 = VAR_10->peer_bi->pubkey_hash;
 else
  VAR_14 = ((void*)0);

 VAR_15 = VAR_10->i_nonce;
 VAR_12 = FUNC_0(VAR_10, VAR_11, ((void*)0), VAR_10->curve->nonce_len,
      VAR_13, VAR_14,
      ((void*)0), VAR_15, ((void*)0), 0, VAR_10->k1);
 if (!VAR_12)
  return -1;
 FUNC_4(VAR_10->resp_msg);
 VAR_10->resp_msg = VAR_12;
 return 0;
}
