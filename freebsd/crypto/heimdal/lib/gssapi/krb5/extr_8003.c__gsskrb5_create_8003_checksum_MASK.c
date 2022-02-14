
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int length; scalar_t__ data; } ;
typedef TYPE_2__ krb5_data ;
typedef scalar_t__ gss_channel_bindings_t ;
struct TYPE_6__ {int length; int * data; } ;
struct TYPE_8__ {TYPE_1__ checksum; int cksumtype; } ;
typedef int OM_uint32 ;
typedef TYPE_3__ Checksum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (scalar_t__ const,int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,int ,int) ;

OM_uint32
FUNC_5 (
        OM_uint32 *VAR_6,
        const gss_channel_bindings_t VAR_7,
        OM_uint32 VAR_8,
        const krb5_data *VAR_9,
        Checksum *VAR_10)
{
    u_char *VAR_11;




    VAR_10->cksumtype = VAR_0;
    if (VAR_9->length > 0 && (VAR_8 & VAR_2))
 VAR_10->checksum.length = 24 + 4 + VAR_9->length;
    else
 VAR_10->checksum.length = 24;
    VAR_10->checksum.data = FUNC_2 (VAR_10->checksum.length);
    if (VAR_10->checksum.data == ((void*)0)) {
 *VAR_6 = VAR_1;
 return VAR_5;
    }

    VAR_11 = VAR_10->checksum.data;
    FUNC_0 (16, VAR_11);
    VAR_11 += 4;
    if (VAR_7 == VAR_3) {
 FUNC_4 (VAR_11, 0, 16);
    } else {
 FUNC_1 (VAR_7, VAR_11);
    }
    VAR_11 += 16;
    FUNC_0 (VAR_8, VAR_11);
    VAR_11 += 4;

    if (VAR_9->length > 0 && (VAR_8 & VAR_2)) {

 *VAR_11++ = (1 >> 0) & 0xFF;
 *VAR_11++ = (1 >> 8) & 0xFF;
 *VAR_11++ = (VAR_9->length >> 0) & 0xFF;
 *VAR_11++ = (VAR_9->length >> 8) & 0xFF;
 FUNC_3(VAR_11, (unsigned char *) VAR_9->data, VAR_9->length);

 VAR_11 += VAR_9->length;
    }

    return VAR_4;
}
