
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_netobj {char* data; int len; } ;
struct xdr_buf {int dummy; } ;
struct spkm3_ctx {int derived_integ_key; int intg_alg; int mech_used; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xdr_netobj*,unsigned char*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct xdr_netobj*,int*,unsigned char**,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int *,unsigned char*,int,struct xdr_buf*,int ,struct xdr_netobj*) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (unsigned char**,int*,unsigned char**) ;

u32
FUNC_8(struct spkm3_ctx *VAR_6,
  struct xdr_netobj *VAR_7,
  struct xdr_buf *VAR_8,
  int VAR_9)
{
 s32 VAR_10;
 s32 VAR_11;
 struct xdr_netobj VAR_12 = {.len =0, .data = ((void*)0)};
 char VAR_13[16];
 struct xdr_netobj VAR_14 = {.len = 0, .data = VAR_13};
 unsigned char *VAR_15 = (unsigned char *)VAR_7->data;
 unsigned char *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;
 u32 VAR_20 = VAR_3;

 if (FUNC_3((struct xdr_netobj *) &VAR_6->mech_used,
     &VAR_17, &VAR_15, VAR_7->len))
  goto out;



 if (VAR_9 != VAR_4) {
  FUNC_1("RPC:       BAD SPKM3 token type: %d\n", VAR_9);
  goto out;
 }

 if ((VAR_20 = FUNC_7(&VAR_15, &VAR_19, &VAR_16)))
  goto out;

 if (*VAR_16++ != 0x03) {
  FUNC_1("RPC:       spkm3_read_token BAD checksum type\n");
  goto out;
 }
 VAR_18 = *VAR_16++;
 VAR_16++;

 if (!FUNC_0(&VAR_12, VAR_16, VAR_18 - 1, 16))
  goto out;







 VAR_20 = VAR_3;
 if (!FUNC_2(&VAR_6->intg_alg, &VAR_5)) {
  FUNC_1("RPC:       gss_spkm3_seal: unsupported I-ALG "
    "algorithm\n");
  goto out;
 }

 VAR_10 = VAR_0;

 VAR_11 = FUNC_5(VAR_10,
  &VAR_6->derived_integ_key, VAR_15 + 2, VAR_19 + 2,
  VAR_8, 0, &VAR_14);

 if (VAR_11)
  goto out;

 VAR_20 = VAR_1;
 VAR_11 = FUNC_6(VAR_14.data, VAR_12.data, VAR_12.len);
 if (VAR_11) {
  FUNC_1("RPC:       bad MIC checksum\n");
  goto out;
 }



 VAR_20 = VAR_2;
out:
 FUNC_4(VAR_12.data);
 return VAR_20;
}
