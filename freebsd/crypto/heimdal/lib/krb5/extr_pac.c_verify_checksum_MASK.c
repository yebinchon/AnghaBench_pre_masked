
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct PAC_INFO_BUFFER {int offset_lo; scalar_t__ buffersize; } ;
typedef int local_checksum ;
typedef int krb5_storage ;
typedef int krb5_keyblock ;
typedef int krb5_error_code ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_1__ krb5_data ;
typedef int * krb5_crypto ;
typedef int krb5_context ;
typedef int cksum ;
struct TYPE_12__ {int * data; scalar_t__ length; } ;
struct TYPE_11__ {scalar_t__ cksumtype; TYPE_6__ checksum; } ;
typedef TYPE_2__ Checksum ;


 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,void*,size_t,int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (char*,char*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int const*,int ,int **) ;
 scalar_t__ FUNC_7 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,scalar_t__*) ;
 int FUNC_11 (int ,int,char*,...) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char*,scalar_t__) ;
 int FUNC_14 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int ,int *,int ,void*,size_t,TYPE_2__*) ;
 int * FUNC_18 (scalar_t__) ;
 int FUNC_19 (TYPE_2__*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static krb5_error_code
FUNC_20(krb5_context VAR_7,
  const struct PAC_INFO_BUFFER *VAR_8,
  const krb5_data *VAR_9,
  void *VAR_10, size_t VAR_11,
  const krb5_keyblock *VAR_12)
{
    krb5_storage *VAR_13 = ((void*)0);
    uint32_t VAR_14;
    krb5_error_code VAR_15;
    Checksum VAR_16;

    FUNC_19(&VAR_16, 0, sizeof(VAR_16));

    VAR_13 = FUNC_13((char *)VAR_9->data + VAR_8->offset_lo,
          VAR_8->buffersize);
    if (VAR_13 == ((void*)0))
 return FUNC_9(VAR_7);

    FUNC_16(VAR_13, VAR_4);

    FUNC_0(VAR_15, FUNC_10(VAR_13, &VAR_14), VAR_6);
    VAR_16.cksumtype = VAR_14;
    VAR_16.checksum.length =
 VAR_8->buffersize - FUNC_15(VAR_13, 0, VAR_5);
    VAR_16.checksum.data = FUNC_18(VAR_16.checksum.length);
    if (VAR_16.checksum.data == ((void*)0)) {
 VAR_15 = FUNC_9(VAR_7);
 goto out;
    }
    VAR_15 = FUNC_14(VAR_13, VAR_16.checksum.data, VAR_16.checksum.length);
    if (VAR_15 != (int)VAR_16.checksum.length) {
 VAR_15 = VAR_1;
 FUNC_11(VAR_7, VAR_15, "PAC checksum missing checksum");
 goto out;
    }

    if (!FUNC_4(VAR_7, VAR_16.cksumtype)) {
 VAR_15 = VAR_1;
 FUNC_11(VAR_7, VAR_15, "Checksum type %d not keyed",
          VAR_16.cksumtype);
 goto out;
    }
    if (VAR_16.cksumtype == VAR_0) {
 Checksum VAR_17;

 FUNC_19(&VAR_17, 0, sizeof(VAR_17));

 VAR_15 = FUNC_1(VAR_7, VAR_12, VAR_10, VAR_11,
        VAR_3, &VAR_17);

 if (VAR_15 != 0 || FUNC_7(&VAR_17.checksum, &VAR_16.checksum) != 0) {
     VAR_15 = VAR_2;
     FUNC_11(VAR_7, VAR_15,
       FUNC_2("PAC integrity check failed for "
          "hmac-md5 checksum", ""));
 }
 FUNC_8(&VAR_17.checksum);

   } else {
 krb5_crypto VAR_18 = ((void*)0);

 VAR_15 = FUNC_6(VAR_7, VAR_12, 0, &VAR_18);
 if (VAR_15)
  goto out;

 VAR_15 = FUNC_17(VAR_7, VAR_18, VAR_3,
       VAR_10, VAR_11, &VAR_16);
 FUNC_5(VAR_7, VAR_18);
    }
    FUNC_3(VAR_16.checksum.data);
    FUNC_12(VAR_13);

    return VAR_15;

out:
    if (VAR_16.checksum.data)
 FUNC_3(VAR_16.checksum.data);
    if (VAR_13)
 FUNC_12(VAR_13);
    return VAR_15;
}
