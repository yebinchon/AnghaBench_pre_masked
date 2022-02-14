
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int * krb5_crypto ;
typedef int krb5_context ;
struct TYPE_6__ {size_t length; int data; } ;
struct TYPE_7__ {TYPE_1__ checksum; } ;
typedef TYPE_2__ Checksum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,void*,size_t,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,void*,size_t,TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int const*,int ,int **) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 int FUNC_6 (void*,int ,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_3,
  const krb5_keyblock *VAR_4,
  uint32_t VAR_5,
  void *VAR_6, size_t VAR_7,
  void *VAR_8, size_t VAR_9)
{
    krb5_crypto VAR_10 = ((void*)0);
    krb5_error_code VAR_11;
    Checksum VAR_12;
    if (VAR_5 == (uint32_t)VAR_0) {
 VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_7,
        VAR_2, &VAR_12);
    } else {
 VAR_11 = FUNC_4(VAR_3, VAR_4, 0, &VAR_10);
 if (VAR_11)
     return VAR_11;

 VAR_11 = FUNC_2(VAR_3, VAR_10, VAR_2, 0,
       VAR_6, VAR_7, &VAR_12);
 FUNC_3(VAR_3, VAR_10);
 if (VAR_11)
     return VAR_11;
    }
    if (VAR_12.checksum.length != VAR_9) {
 FUNC_5(VAR_3, VAR_1, "pac checksum wrong length");
 FUNC_1(&VAR_12);
 return VAR_1;
    }

    FUNC_6(VAR_8, VAR_12.checksum.data, VAR_9);
    FUNC_1(&VAR_12);

    return 0;
}
