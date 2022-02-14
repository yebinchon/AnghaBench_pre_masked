
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_9__ {int length; unsigned char* data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int const,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_0,
      const krb5_crypto VAR_1,
      const krb5_data *VAR_2,
      size_t VAR_3,
      krb5_data *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_data VAR_6;
    unsigned char VAR_7 = 1;
    unsigned char *VAR_8;

    FUNC_4(&VAR_6);
    FUNC_4(VAR_4);

    FUNC_0(VAR_0);

    VAR_5 = FUNC_2(VAR_4, VAR_3);
    if (VAR_5) goto out;
    VAR_5 = FUNC_2(&VAR_6, VAR_2->length + 1);
    if (VAR_5) goto out;

    FUNC_0(VAR_0);

    FUNC_5(((unsigned char *)VAR_6) + 1, VAR_2->data, VAR_2->length);

    VAR_8 = VAR_4->data;

    while (VAR_3) {
 krb5_data VAR_9;

 ((unsigned char *)VAR_6)[0] = VAR_7++;

 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_6, &VAR_9);
 if (VAR_5)
     goto out;

 if (VAR_9.length < VAR_3) {
     FUNC_5(VAR_8, VAR_9.data, VAR_9.length);
     VAR_3 -= VAR_9.length;
 } else {
     FUNC_5(VAR_8, VAR_9.data, VAR_3);
     VAR_3 = 0;
 }
 VAR_8 += VAR_9.length;
 FUNC_3(&VAR_9);
    }

 out:
    FUNC_3(&VAR_6);
    if (VAR_5)
 FUNC_3(VAR_4);
    return 0;
}
