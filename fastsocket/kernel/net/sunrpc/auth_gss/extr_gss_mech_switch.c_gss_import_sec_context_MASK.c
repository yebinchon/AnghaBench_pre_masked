
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gss_ctx {int mech_type; } ;
struct gss_api_mech {TYPE_1__* gm_ops; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* gss_import_sec_context ) (void const*,size_t,struct gss_ctx*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gss_api_mech*) ;
 struct gss_ctx* FUNC_1 (int,int ) ;
 int FUNC_2 (void const*,size_t,struct gss_ctx*,int ) ;

int
FUNC_3(const void *VAR_1, size_t VAR_2,
         struct gss_api_mech *VAR_3,
         struct gss_ctx **VAR_4,
         gfp_t VAR_5)
{
 if (!(*VAR_4 = FUNC_1(sizeof(**VAR_4), VAR_5)))
  return -VAR_0;
 (*VAR_4)->mech_type = FUNC_0(VAR_3);

 return VAR_3->gm_ops
  ->gss_import_sec_context(VAR_1, VAR_2, *VAR_4, VAR_5);
}
