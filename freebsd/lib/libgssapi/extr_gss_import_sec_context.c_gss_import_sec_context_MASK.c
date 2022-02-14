
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _gss_mech_switch {scalar_t__ (* gm_import_sec_context ) (scalar_t__*,TYPE_2__*,int *) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_8__ {size_t length; unsigned char* value; } ;
typedef TYPE_2__ gss_buffer_desc ;
struct TYPE_9__ {unsigned char length; unsigned char* elements; } ;
typedef TYPE_3__ gss_OID_desc ;
struct TYPE_7__ {unsigned char* value; size_t length; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct _gss_mech_switch* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct _gss_context*) ;
 struct _gss_context* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__*,TYPE_2__*,int *) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_5,
    const gss_buffer_t VAR_6,
    gss_ctx_id_t *VAR_7)
{
 OM_uint32 VAR_8;
 struct _gss_mech_switch *VAR_9;
 struct _gss_context *VAR_10;
 gss_OID_desc VAR_11;
 gss_buffer_desc VAR_12;
 unsigned char *VAR_13;
 size_t VAR_14;

 *VAR_5 = 0;
 *VAR_7 = VAR_1;





 VAR_13 = VAR_6->value;
 VAR_14 = VAR_6->length;
 if (VAR_14 < 2)
  return (VAR_3);
 VAR_11.length = (VAR_13[0] << 8) | VAR_13[1];
 if (VAR_14 < VAR_11.length + 2)
  return (VAR_3);
 VAR_11.elements = VAR_13 + 2;
 VAR_12.length = VAR_14 - 2 - VAR_11.length;
 VAR_12.value = VAR_13 + 2 + VAR_11.length;

 VAR_9 = FUNC_0(&VAR_11);
 if (!VAR_9)
  return (VAR_3);

 VAR_10 = FUNC_3(sizeof(struct _gss_context));
 if (!VAR_10) {
  *VAR_5 = VAR_0;
  return (VAR_4);
 }
 VAR_10->gc_mech = VAR_9;
 VAR_8 = VAR_9->gm_import_sec_context(VAR_5,
     &VAR_12, &VAR_10->gc_ctx);
 if (VAR_8 != VAR_2) {
  FUNC_1(VAR_9, VAR_8, *VAR_5);
  FUNC_2(VAR_10);
 } else {
  *VAR_7 = (gss_ctx_id_t) VAR_10;
 }

 return (VAR_8);
}
