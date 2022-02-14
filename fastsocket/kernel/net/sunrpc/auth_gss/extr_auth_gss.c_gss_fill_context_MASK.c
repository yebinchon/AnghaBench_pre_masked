
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int window_size ;
typedef unsigned int u32 ;
typedef int timeout ;
struct gss_cl_ctx {unsigned int gc_win; int gc_gss_ctx; int gc_wire_ctx; scalar_t__ gc_expiry; } ;
struct gss_api_mech {int dummy; } ;
typedef int seclen ;
typedef int ret ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (void const*,unsigned int,struct gss_api_mech*,int *,int ) ;
 scalar_t__ VAR_6 ;
 void* FUNC_5 (void const*,void const*,...) ;
 void* FUNC_6 (void const*,void const*,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static const void *
FUNC_8(const void *VAR_7, const void *VAR_8, struct gss_cl_ctx *VAR_9, struct gss_api_mech *VAR_10)
{
 const void *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 u32 VAR_14;
 int VAR_15;


 VAR_7 = FUNC_5(VAR_7, VAR_8, &VAR_13, sizeof(VAR_13));
 if (FUNC_1(VAR_7))
  goto err;
 if (VAR_13 == 0)
  VAR_13 = VAR_4;
 VAR_9->gc_expiry = VAR_6 + (unsigned long)VAR_13 * VAR_5 * 3 / 4;

 VAR_7 = FUNC_5(VAR_7, VAR_8, &VAR_14, sizeof(VAR_14));
 if (FUNC_1(VAR_7))
  goto err;
 VAR_9->gc_win = VAR_14;

 if (VAR_9->gc_win == 0) {




  VAR_7 = FUNC_5(VAR_7, VAR_8, &VAR_15, sizeof(VAR_15));
  if (!FUNC_1(VAR_7))
   VAR_7 = (VAR_15 == -VAR_2) ? FUNC_0(-VAR_2) :
          FUNC_0(-VAR_0);
  goto err;
 }

 VAR_7 = FUNC_6(VAR_7, VAR_8, &VAR_9->gc_wire_ctx);
 if (FUNC_1(VAR_7))
  goto err;

 VAR_7 = FUNC_5(VAR_7, VAR_8, &VAR_12, sizeof(VAR_12));
 if (FUNC_1(VAR_7))
  goto err;
 VAR_11 = (const void *)((const char *)VAR_7 + VAR_12);
 if (FUNC_7(VAR_11 > VAR_8 || VAR_11 < VAR_7)) {
  VAR_7 = FUNC_0(-VAR_1);
  goto err;
 }
 VAR_15 = FUNC_4(VAR_7, VAR_12, VAR_10, &VAR_9->gc_gss_ctx, VAR_3);
 if (VAR_15 < 0) {
  VAR_7 = FUNC_0(VAR_15);
  goto err;
 }
 return VAR_11;
err:
 FUNC_3("RPC:       gss_fill_context returning %ld\n", -FUNC_2(VAR_7));
 return VAR_7;
}
