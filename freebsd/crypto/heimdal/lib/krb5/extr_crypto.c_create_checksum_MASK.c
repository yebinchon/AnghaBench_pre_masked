
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _krb5_key_data {int dummy; } ;
struct _krb5_checksum_type {int flags; scalar_t__ (* checksum ) (int ,struct _krb5_key_data*,void*,size_t,unsigned int,TYPE_1__*) ;int checksumsize; int type; int name; } ;
typedef scalar_t__ krb5_error_code ;
typedef int * krb5_crypto ;
typedef int krb5_context ;
struct TYPE_4__ {int checksum; int cksumtype; } ;
typedef TYPE_1__ Checksum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int *,unsigned int,struct _krb5_checksum_type*,struct _krb5_key_data**) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (int ,struct _krb5_key_data*,void*,size_t,unsigned int,TYPE_1__*) ;

__attribute__((used)) static krb5_error_code
FUNC_6 (krb5_context VAR_3,
   struct _krb5_checksum_type *VAR_4,
   krb5_crypto VAR_5,
   unsigned VAR_6,
   void *VAR_7,
   size_t VAR_8,
   Checksum *VAR_9)
{
    krb5_error_code VAR_10;
    struct _krb5_key_data *VAR_11;
    int VAR_12;

    if (VAR_4->flags & VAR_0) {
 FUNC_2 (VAR_3);
 return VAR_2;
    }
    VAR_12 = (VAR_4->flags & VAR_1) != 0;
    if(VAR_12 && VAR_5 == ((void*)0)) {
 FUNC_4 (VAR_3, VAR_2,
    FUNC_0("Checksum type %s is keyed but no "
       "crypto context (key) was passed in", ""),
    VAR_4->name);
 return VAR_2;
    }
    if(VAR_12) {
 VAR_10 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_4, &VAR_11);
 if (VAR_10)
     return VAR_10;
    } else
 VAR_11 = ((void*)0);
    VAR_9->cksumtype = VAR_4->type;
    VAR_10 = FUNC_3(&VAR_9->checksum, VAR_4->checksumsize);
    if (VAR_10)
 return (VAR_10);
    return (*VAR_4->checksum)(VAR_3, VAR_11, VAR_7, VAR_8, VAR_6, VAR_9);
}
