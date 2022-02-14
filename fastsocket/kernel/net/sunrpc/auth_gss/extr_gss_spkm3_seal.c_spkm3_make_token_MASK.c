
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_netobj {int len; char* data; } ;
struct xdr_buf {int dummy; } ;
struct spkm3_ctx {int mech_used; int derived_integ_key; struct xdr_netobj ctx_id; int conf_alg; int intg_alg; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xdr_netobj*,int*,int*) ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int,unsigned char**) ;
 int FUNC_4 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,int *,char*,int,struct xdr_buf*,int ,struct xdr_netobj*) ;
 int FUNC_6 (unsigned char**,int,struct xdr_netobj*,struct xdr_netobj*,int,int) ;
 int FUNC_7 (char**,int*,unsigned char*,int,int) ;

u32
FUNC_8(struct spkm3_ctx *VAR_8,
     struct xdr_buf * VAR_9, struct xdr_netobj * VAR_10,
     int VAR_11)
{
 s32 VAR_12;
 char VAR_13[25];
 char VAR_14[16];
 struct xdr_netobj VAR_15 = {.len = 0, .data = VAR_14};
 struct xdr_netobj VAR_16 = {.len = 0, .data = VAR_13};
 int VAR_17 = 0;
 unsigned char *VAR_18;
 s32 VAR_19;
 int VAR_20 = 0, VAR_21 = 0;
 int VAR_22 = 0, VAR_23 = 0;

 VAR_19 = VAR_7;

 if (VAR_8->ctx_id.len != 16) {
  FUNC_1("RPC:       spkm3_make_token BAD ctx_id.len %d\n",
    VAR_8->ctx_id.len);
  goto out_err;
 }

 if (!FUNC_2(&VAR_8->intg_alg, &VAR_6)) {
  FUNC_1("RPC:       gss_spkm3_seal: unsupported I-ALG "
    "algorithm.  only support hmac-md5 I-ALG.\n");
  goto out_err;
 } else
  VAR_12 = VAR_0;

 if (!FUNC_2(&VAR_8->conf_alg, &VAR_5)) {
  FUNC_1("RPC:       gss_spkm3_seal: unsupported C-ALG "
    "algorithm\n");
  goto out_err;
 }

 if (VAR_11 == VAR_3) {

  FUNC_0(&VAR_8->ctx_id, &VAR_20, &VAR_21);
  FUNC_7(&VAR_16.data, &VAR_16.len, VAR_8->ctx_id.data,
    VAR_20, VAR_21);
  if (FUNC_5(VAR_12, &VAR_8->derived_integ_key,
     (char *)VAR_16.data, VAR_16.len,
     VAR_9, 0, &VAR_15))
   goto out_err;

  FUNC_0(&VAR_15, &VAR_22, &VAR_23);
  VAR_17 = 10 + VAR_20 + 1 + VAR_22 + 1;


  VAR_10->len = FUNC_4(&VAR_8->mech_used, VAR_17 + 2);

  VAR_18 = VAR_10->data;
  FUNC_3(&VAR_8->mech_used, VAR_17 + 2, &VAR_18);

  FUNC_6(&VAR_18, VAR_17, &VAR_16, &VAR_15, VAR_22, VAR_23);
 } else if (VAR_11 == VAR_4) {
  FUNC_1("RPC:       gss_spkm3_seal: SPKM_WRAP_TOK "
    "not supported\n");
  goto out_err;
 }



 return VAR_1;
out_err:
 VAR_10->data = ((void*)0);
 VAR_10->len = 0;
 return VAR_2;
}
