
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct _krb5_key_data {int dummy; } ;
struct _krb5_checksum_type {int flags; scalar_t__ checksumsize; scalar_t__ type; int name; scalar_t__ (* checksum ) (int ,struct _krb5_key_data*,void*,size_t,unsigned int,TYPE_3__*) ;scalar_t__ (* verify ) (int ,struct _krb5_key_data*,void*,size_t,unsigned int,TYPE_3__*) ;} ;
typedef scalar_t__ krb5_error_code ;
typedef TYPE_2__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_16__ {scalar_t__ length; } ;
struct TYPE_15__ {TYPE_8__ checksum; int cksumtype; } ;
struct TYPE_14__ {TYPE_1__* et; } ;
struct TYPE_13__ {char* name; struct _krb5_checksum_type* keyed_checksum; } ;
typedef TYPE_3__ Checksum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*) ;
 struct _krb5_checksum_type* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,unsigned int,struct _krb5_checksum_type*,struct _krb5_key_data**) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_8__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int ,scalar_t__,int ,int ,...) ;
 scalar_t__ FUNC_8 (int ,struct _krb5_key_data*,void*,size_t,unsigned int,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ,struct _krb5_key_data*,void*,size_t,unsigned int,TYPE_3__*) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_4,
  krb5_crypto VAR_5,
  unsigned VAR_6,
  void *VAR_7,
  size_t VAR_8,
  Checksum *VAR_9)
{
    krb5_error_code VAR_10;
    struct _krb5_key_data *VAR_11;
    int VAR_12;
    Checksum VAR_13;
    struct _krb5_checksum_type *VAR_14;

    VAR_14 = FUNC_1(VAR_9->cksumtype);
    if (VAR_14 == ((void*)0) || (VAR_14->flags & VAR_0)) {
 FUNC_7 (VAR_4, VAR_3,
    FUNC_0("checksum type %d not supported", ""),
    VAR_9->cksumtype);
 return VAR_3;
    }
    if(VAR_14->checksumsize != VAR_9->checksum.length) {
 FUNC_3 (VAR_4);
 FUNC_7(VAR_4, VAR_2,
          FUNC_0("Decrypt integrity check failed for checksum type %s, "
      "length was %u, expected %u", ""),
          VAR_14->name, (unsigned)VAR_9->checksum.length,
          (unsigned)VAR_14->checksumsize);

 return VAR_2;
    }
    VAR_12 = (VAR_14->flags & VAR_1) != 0;
    if(VAR_12) {
 struct _krb5_checksum_type *VAR_15;
 if (VAR_5 == ((void*)0)) {
     FUNC_7(VAR_4, VAR_3,
       FUNC_0("Checksum type %s is keyed but no "
          "crypto context (key) was passed in", ""),
       VAR_14->name);
     return VAR_3;
 }
 VAR_15 = VAR_5->et->keyed_checksum;
 if (VAR_15 == ((void*)0) || VAR_15->type != VAR_14->type) {
     FUNC_7(VAR_4, VAR_3,
       FUNC_0("Checksum type %s is keyed, but "
          "the key type %s passed didnt have that checksum "
          "type as the keyed type", ""),
        VAR_14->name, VAR_5->et->name);
     return VAR_3;
 }

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_14, &VAR_11);
 if (VAR_10)
     return VAR_10;
    } else
 VAR_11 = ((void*)0);






    if(VAR_14->verify) {
 VAR_10 = (*VAR_14->verify)(VAR_4, VAR_11, VAR_7, VAR_8, VAR_6, VAR_9);
 if (VAR_10)
     FUNC_7(VAR_4, VAR_10,
       FUNC_0("Decrypt integrity check failed for checksum "
          "type %s, key type %s", ""),
       VAR_14->name, (VAR_5 != ((void*)0))? VAR_5->et->name : "(none)");
 return VAR_10;
    }

    VAR_10 = FUNC_4 (&VAR_13.checksum, VAR_14->checksumsize);
    if (VAR_10)
 return VAR_10;

    VAR_10 = (*VAR_14->checksum)(VAR_4, VAR_11, VAR_7, VAR_8, VAR_6, &VAR_13);
    if (VAR_10) {
 FUNC_6(&VAR_13.checksum);
 return VAR_10;
    }

    if(FUNC_5(&VAR_13.checksum, &VAR_9->checksum) != 0) {
 VAR_10 = VAR_2;
 FUNC_7(VAR_4, VAR_10,
          FUNC_0("Decrypt integrity check failed for checksum "
      "type %s, key type %s", ""),
          VAR_14->name, VAR_5 ? VAR_5->et->name : "(unkeyed)");
    } else {
 VAR_10 = 0;
    }
    FUNC_6 (&VAR_13.checksum);
    return VAR_10;
}
