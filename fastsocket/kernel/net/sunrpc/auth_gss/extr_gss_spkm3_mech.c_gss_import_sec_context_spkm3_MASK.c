
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int version ;
struct TYPE_2__ {struct spkm3_ctx* data; } ;
struct spkm3_ctx {int endtime; int ret_flags; TYPE_1__ ctx_id; TYPE_1__ mech_used; TYPE_1__ conf_alg; TYPE_1__ derived_conf_key; TYPE_1__ intg_alg; TYPE_1__ derived_integ_key; } ;
struct gss_ctx {struct spkm3_ctx* internal_ctx_id; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct spkm3_ctx*) ;
 struct spkm3_ctx* FUNC_5 (int,int ) ;
 void* FUNC_6 (void const*,void const*,int*,int) ;
 void* FUNC_7 (void const*,void const*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(const void *VAR_2, size_t VAR_3,
    struct gss_ctx *VAR_4,
    gfp_t VAR_5)
{
 const void *VAR_6 = (const void *)((const char *)VAR_2 + VAR_3);
 struct spkm3_ctx *VAR_7;
 int VAR_8;

 if (!(VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_5)))
  goto out_err;

 VAR_2 = FUNC_6(VAR_2, VAR_6, &VAR_8, sizeof(VAR_8));
 if (FUNC_1(VAR_2))
  goto out_err_free_ctx;
 if (VAR_8 != 1) {
  FUNC_3("RPC:       unknown spkm3 token format: "
    "obsolete nfs-utils?\n");
  VAR_2 = FUNC_0(-VAR_1);
  goto out_err_free_ctx;
 }

 VAR_2 = FUNC_7(VAR_2, VAR_6, &VAR_7->ctx_id);
 if (FUNC_1(VAR_2))
  goto out_err_free_ctx;

 VAR_2 = FUNC_6(VAR_2, VAR_6, &VAR_7->endtime, sizeof(VAR_7->endtime));
 if (FUNC_1(VAR_2))
  goto out_err_free_ctx_id;

 VAR_2 = FUNC_7(VAR_2, VAR_6, &VAR_7->mech_used);
 if (FUNC_1(VAR_2))
  goto out_err_free_ctx_id;

 VAR_2 = FUNC_6(VAR_2, VAR_6, &VAR_7->ret_flags, sizeof(VAR_7->ret_flags));
 if (FUNC_1(VAR_2))
  goto out_err_free_mech;

 VAR_2 = FUNC_7(VAR_2, VAR_6, &VAR_7->conf_alg);
 if (FUNC_1(VAR_2))
  goto out_err_free_mech;

 VAR_2 = FUNC_7(VAR_2, VAR_6, &VAR_7->derived_conf_key);
 if (FUNC_1(VAR_2))
  goto out_err_free_conf_alg;

 VAR_2 = FUNC_7(VAR_2, VAR_6, &VAR_7->intg_alg);
 if (FUNC_1(VAR_2))
  goto out_err_free_conf_key;

 VAR_2 = FUNC_7(VAR_2, VAR_6, &VAR_7->derived_integ_key);
 if (FUNC_1(VAR_2))
  goto out_err_free_intg_alg;

 if (VAR_2 != VAR_6) {
  VAR_2 = FUNC_0(-VAR_0);
  goto out_err_free_intg_key;
 }

 VAR_4->internal_ctx_id = VAR_7;

 FUNC_3("RPC:       Successfully imported new spkm context.\n");
 return 0;

out_err_free_intg_key:
 FUNC_4(VAR_7->derived_integ_key.data);
out_err_free_intg_alg:
 FUNC_4(VAR_7->intg_alg.data);
out_err_free_conf_key:
 FUNC_4(VAR_7->derived_conf_key.data);
out_err_free_conf_alg:
 FUNC_4(VAR_7->conf_alg.data);
out_err_free_mech:
 FUNC_4(VAR_7->mech_used.data);
out_err_free_ctx_id:
 FUNC_4(VAR_7->ctx_id.data);
out_err_free_ctx:
 FUNC_4(VAR_7);
out_err:
 return FUNC_2(VAR_2);
}
