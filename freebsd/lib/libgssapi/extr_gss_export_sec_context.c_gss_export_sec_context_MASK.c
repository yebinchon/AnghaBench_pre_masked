
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int length; int elements; } ;
struct _gss_mech_switch {scalar_t__ (* gm_export_sec_context ) (scalar_t__*,int *,TYPE_3__*) ;TYPE_1__ gm_mech_oid; } ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_2__* gss_buffer_t ;
struct TYPE_10__ {int length; int value; } ;
typedef TYPE_3__ gss_buffer_desc ;
struct TYPE_9__ {int length; unsigned char* value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct _gss_context*) ;
 int FUNC_3 (scalar_t__*,TYPE_3__*) ;
 unsigned char* FUNC_4 (int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__*,int *,TYPE_3__*) ;

OM_uint32
FUNC_7(OM_uint32 *VAR_4,
    gss_ctx_id_t *VAR_5,
    gss_buffer_t VAR_6)
{
 OM_uint32 VAR_7;
 struct _gss_context *VAR_8 = (struct _gss_context *) *VAR_5;
 struct _gss_mech_switch *VAR_9 = VAR_8->gc_mech;
 gss_buffer_desc VAR_10;

 FUNC_0(VAR_6);

 VAR_7 = VAR_9->gm_export_sec_context(VAR_4,
     &VAR_8->gc_ctx, &VAR_10);

 if (VAR_7 == VAR_2) {
  unsigned char *VAR_11;

  FUNC_2(VAR_8);
  *VAR_5 = VAR_1;
  VAR_6->length = VAR_10.length
   + 2 + VAR_9->gm_mech_oid.length;
  VAR_6->value = FUNC_4(VAR_6->length);
  if (!VAR_6->value) {







   FUNC_0(VAR_6);
   *VAR_4 = VAR_0;
   return (VAR_3);
  }
  VAR_11 = VAR_6->value;
  VAR_11[0] = VAR_9->gm_mech_oid.length >> 8;
  VAR_11[1] = VAR_9->gm_mech_oid.length;
  FUNC_5(VAR_11 + 2, VAR_9->gm_mech_oid.elements, VAR_9->gm_mech_oid.length);
  FUNC_5(VAR_11 + 2 + VAR_9->gm_mech_oid.length, VAR_10.value, VAR_10.length);
  FUNC_3(VAR_4, &VAR_10);
 } else {
  FUNC_1(VAR_9, VAR_7, *VAR_4);
 }

 return (VAR_7);
}
