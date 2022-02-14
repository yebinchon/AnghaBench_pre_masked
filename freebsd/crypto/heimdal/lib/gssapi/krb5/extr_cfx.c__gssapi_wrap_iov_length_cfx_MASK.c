
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int krb5_context ;
typedef TYPE_2__* gsskrb5_ctx ;
typedef int gss_qop_t ;
struct TYPE_11__ {size_t length; } ;
struct TYPE_13__ {TYPE_1__ buffer; int type; } ;
typedef TYPE_3__ gss_iov_buffer_desc ;
typedef int gss_cfx_wrap_token_desc ;
struct TYPE_12__ {int crypto; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;






 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__*,TYPE_2__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int ,size_t*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,size_t*) ;

OM_uint32
FUNC_6(OM_uint32 *VAR_7,
       gsskrb5_ctx VAR_8,
       krb5_context VAR_9,
       int VAR_10,
       gss_qop_t VAR_11,
       int *VAR_12,
       gss_iov_buffer_desc *VAR_13,
       int VAR_14)
{
    OM_uint32 VAR_15;
    size_t VAR_16;
    int VAR_17;
    gss_iov_buffer_desc *VAR_18 = ((void*)0);
    gss_iov_buffer_desc *VAR_19 = ((void*)0);
    gss_iov_buffer_desc *VAR_20 = ((void*)0);
    size_t VAR_21 = 0;
    size_t VAR_22 = 0;
    size_t VAR_23 = 0;
    size_t VAR_24 = 0;

    FUNC_0 (&VAR_9);
    *VAR_7 = 0;

    for (VAR_16 = 0, VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
 switch(FUNC_1(VAR_13[VAR_17].type)) {
 case 132:
     break;
 case 133:
     VAR_16 += VAR_13[VAR_17].buffer.length;
     break;
 case 131:
     if (VAR_18 != ((void*)0)) {
  *VAR_7 = 0;
  return VAR_2;
     }
     VAR_18 = &VAR_13[VAR_17];
     break;
 case 128:
     if (VAR_20 != ((void*)0)) {
  *VAR_7 = 0;
  return VAR_2;
     }
     VAR_20 = &VAR_13[VAR_17];
     break;
 case 130:
     if (VAR_19 != ((void*)0)) {
  *VAR_7 = 0;
  return VAR_2;
     }
     VAR_19 = &VAR_13[VAR_17];
     break;
 case 129:
     break;
 default:
     *VAR_7 = VAR_0;
     return VAR_2;
 }
    }

    VAR_15 = FUNC_3(VAR_7, VAR_8, VAR_18, VAR_19, VAR_20);
    if (VAR_15 != VAR_1) {
     return VAR_15;
    }

    if (VAR_10) {
 size_t VAR_25 = 0;
 size_t VAR_26 = 0;
 size_t VAR_27 = 0;
 size_t VAR_28 = 0;

 VAR_16 += sizeof(gss_cfx_wrap_token_desc);

 *VAR_7 = FUNC_5(VAR_9, VAR_8->crypto,
        VAR_4,
        &VAR_23);
 if (*VAR_7)
     return VAR_2;

 *VAR_7 = FUNC_5(VAR_9, VAR_8->crypto,
        VAR_6,
        &VAR_24);
 if (*VAR_7)
     return VAR_2;

 *VAR_7 = FUNC_5(VAR_9, VAR_8->crypto,
        VAR_5,
        &VAR_26);
 if (*VAR_7)
     return VAR_2;

 if (VAR_26 > 1) {
     VAR_25 = VAR_26 - (VAR_16 % VAR_26);
 } else {
     VAR_25 = 0;
 }

 if (VAR_25 == 0 && FUNC_2(VAR_8)) {
     *VAR_7 = FUNC_4(VAR_9, VAR_8->crypto,
           &VAR_27);
     if (*VAR_7)
  return VAR_2;

     VAR_28 = VAR_27;
 } else {
     VAR_28 = VAR_25;
 }

 VAR_21 = sizeof(gss_cfx_wrap_token_desc) + VAR_23;
 VAR_22 = sizeof(gss_cfx_wrap_token_desc) + VAR_28 + VAR_24;
    } else {
 *VAR_7 = FUNC_5(VAR_9, VAR_8->crypto,
        VAR_3,
        &VAR_24);
 if (*VAR_7)
     return VAR_2;

 VAR_21 = sizeof(gss_cfx_wrap_token_desc);
 VAR_22 = VAR_24;
    }

    if (VAR_20 != ((void*)0)) {
 VAR_20->buffer.length = VAR_22;
    } else {
 VAR_21 += VAR_22;
    }

    VAR_18->buffer.length = VAR_21;

    if (VAR_19) {

 VAR_19->buffer.length = 0;
    }

    if (VAR_12) {
 *VAR_12 = VAR_10;
    }

    return VAR_1;
}
