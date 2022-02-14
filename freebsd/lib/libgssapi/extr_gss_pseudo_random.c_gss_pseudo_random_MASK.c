
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {scalar_t__ (* gm_pseudo_random ) (scalar_t__*,int ,int,int const,int ,int ) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef int ssize_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_buffer_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int,int const,int ,int ) ;

OM_uint32
FUNC_3(OM_uint32 *VAR_3,
    gss_ctx_id_t VAR_4,
    int VAR_5,
    const gss_buffer_t VAR_6,
    ssize_t VAR_7,
    gss_buffer_t VAR_8)
{
    struct _gss_context *VAR_9 = (struct _gss_context *) VAR_4;
    struct _gss_mech_switch *VAR_10;
    OM_uint32 VAR_11;

    FUNC_0(VAR_8);
    *VAR_3 = 0;

    if (VAR_9 == ((void*)0)) {
 *VAR_3 = 0;
 return VAR_1;
    }
    VAR_10 = VAR_9->gc_mech;

    if (VAR_10->gm_pseudo_random == ((void*)0))
 return VAR_2;

    VAR_11 = (*VAR_10->gm_pseudo_random)(VAR_3, VAR_9->gc_ctx,
       VAR_5, VAR_6, VAR_7,
       VAR_8);
    if (VAR_11 != VAR_0)
     FUNC_1(VAR_10, VAR_11, *VAR_3);

    return VAR_11;
}
