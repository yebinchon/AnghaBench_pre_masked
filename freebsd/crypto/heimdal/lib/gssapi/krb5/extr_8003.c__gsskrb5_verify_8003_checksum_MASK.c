
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zeros ;
struct TYPE_7__ {unsigned char length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef int hash ;
typedef scalar_t__ gss_channel_bindings_t ;
struct TYPE_6__ {int length; unsigned char* data; } ;
struct TYPE_8__ {scalar_t__ cksumtype; TYPE_1__ checksum; } ;
typedef int OM_uint32 ;
typedef TYPE_3__ Checksum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned char*,int*) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__ const,unsigned char*) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned char*,int) ;

OM_uint32
FUNC_6(
        OM_uint32 *VAR_7,
        const gss_channel_bindings_t VAR_8,
        const Checksum *VAR_9,
        OM_uint32 *VAR_10,
        krb5_data *VAR_11)
{
    unsigned char VAR_12[16];
    unsigned char *VAR_13;
    OM_uint32 VAR_14;
    int VAR_15;
    static unsigned char VAR_16[16];


    if(VAR_9->cksumtype != VAR_0 || VAR_9->checksum.length < 24) {
 *VAR_7 = 0;
 return VAR_4;
    }

    VAR_13 = VAR_9->checksum.data;
    FUNC_0(VAR_13, &VAR_14);
    if(VAR_14 != sizeof(VAR_12)) {
 *VAR_7 = 0;
 return VAR_4;
    }

    VAR_13 += 4;

    if (VAR_8 != VAR_3
 && FUNC_4(VAR_13, VAR_16, sizeof(VAR_16)) != 0) {
 if(FUNC_2(VAR_8, VAR_12) != 0) {
     *VAR_7 = 0;
     return VAR_4;
 }
 if(FUNC_1(VAR_12, VAR_13, sizeof(VAR_12)) != 0) {
     *VAR_7 = 0;
     return VAR_4;
 }
    }

    VAR_13 += sizeof(VAR_12);

    FUNC_0(VAR_13, VAR_10);
    VAR_13 += 4;

    if (VAR_9->checksum.length > 24 && (*VAR_10 & VAR_2)) {
 if(VAR_9->checksum.length < 28) {
     *VAR_7 = 0;
     return VAR_4;
 }

 VAR_15 = (VAR_13[0] << 0) | (VAR_13[1] << 8);
 VAR_13 += 2;
 if (VAR_15 != 1) {
     *VAR_7 = 0;
     return VAR_4;
 }

 VAR_11->length = (VAR_13[0] << 0) | (VAR_13[1] << 8);
 VAR_13 += 2;
 if(VAR_9->checksum.length < 28 + VAR_11->length) {
     *VAR_7 = 0;
     return VAR_4;
 }
 VAR_11->data = FUNC_3(VAR_11->length);
 if (VAR_11->data == ((void*)0)) {
     *VAR_7 = VAR_1;
     return VAR_6;
 }
 FUNC_5(VAR_11->data, VAR_13, VAR_11->length);
    }

    return VAR_5;
}
