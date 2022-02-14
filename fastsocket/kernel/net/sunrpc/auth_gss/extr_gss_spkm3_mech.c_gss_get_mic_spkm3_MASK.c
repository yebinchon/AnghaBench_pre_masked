
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_netobj {int dummy; } ;
struct xdr_buf {int dummy; } ;
struct spkm3_ctx {int dummy; } ;
struct gss_ctx {struct spkm3_ctx* internal_ctx_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct spkm3_ctx*,struct xdr_buf*,struct xdr_netobj*,int ) ;

__attribute__((used)) static u32
FUNC_2(struct gss_ctx *VAR_1,
       struct xdr_buf *VAR_2,
       struct xdr_netobj *VAR_3)
{
 u32 VAR_4 = 0;
 struct spkm3_ctx *VAR_5 = VAR_1->internal_ctx_id;

 VAR_4 = FUNC_1(VAR_5, VAR_2,
    VAR_3, VAR_0);
 FUNC_0("RPC:       gss_get_mic_spkm3 returning %d\n", VAR_4);
 return VAR_4;
}
