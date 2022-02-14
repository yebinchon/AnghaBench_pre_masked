
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* data; int length; } ;
struct TYPE_8__ {scalar_t__ keytype; TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int k5_data ;
struct TYPE_9__ {TYPE_1__ checksum; } ;
typedef int T ;
typedef TYPE_3__ Checksum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,void*,size_t,int ,TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_3, krb5_keyblock *VAR_4,
  void *VAR_5, size_t VAR_6,
  void *VAR_7, size_t VAR_8)
{
    krb5_error_code VAR_9;

    Checksum VAR_10;
    krb5_keyblock VAR_11;
    char VAR_12[16];

    Checksum VAR_13;

    char VAR_14[4];

    FUNC_2(VAR_14, 0, 4);
    VAR_10 = VAR_12;
    VAR_10 = sizeof(VAR_12);

    if (VAR_4->keytype == VAR_2) {
 char VAR_15[14] = "fortybits";

 FUNC_1(VAR_15 + 10, VAR_14, sizeof(VAR_14));
 VAR_9 = FUNC_0(VAR_3, VAR_0,
   VAR_15, 14, 0, VAR_4, &VAR_10);
 FUNC_2(&VAR_12[7], 0xAB, 9);
    } else {
 VAR_9 = FUNC_0(VAR_3, VAR_0,
   VAR_14, 4, 0, VAR_4, &VAR_10);
    }
    if (VAR_9)
 return VAR_9;

    VAR_11 = VAR_1;
    VAR_11 = VAR_10;

    VAR_13 = VAR_7;
    VAR_13 = VAR_8;

    return FUNC_0(VAR_3, VAR_0,
       VAR_5, VAR_6, 0, &VAR_11, &VAR_13);
}
