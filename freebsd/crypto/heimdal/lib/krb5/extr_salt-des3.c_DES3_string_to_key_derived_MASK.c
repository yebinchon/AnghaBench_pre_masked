
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t length; int data; } ;
struct TYPE_8__ {TYPE_1__ saltvalue; } ;
typedef TYPE_2__ krb5_salt ;
typedef int krb5_keyblock ;
typedef int krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_9__ {size_t length; int data; } ;
typedef TYPE_3__ krb5_data ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,size_t,int ,int *) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,int ,size_t) ;
 int FUNC_6 (char*,int ,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_1,
      krb5_enctype VAR_2,
      krb5_data VAR_3,
      krb5_salt VAR_4,
      krb5_data VAR_5,
      krb5_keyblock *VAR_6)
{
    krb5_error_code VAR_7;
    size_t VAR_8 = VAR_3.length + VAR_4.saltvalue.length;
    char *VAR_9;

    VAR_9 = FUNC_4(VAR_8);
    if(VAR_8 != 0 && VAR_9 == ((void*)0)) {
 FUNC_2(VAR_1, VAR_0, FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    FUNC_5(VAR_9, VAR_3.data, VAR_3.length);
    FUNC_5(VAR_9 + VAR_3.length, VAR_4.saltvalue.data, VAR_4.saltvalue.length);
    VAR_7 = FUNC_3(VAR_1,
         VAR_9,
         VAR_8,
         VAR_2,
         VAR_6);
    FUNC_6(VAR_9, 0, VAR_8);
    FUNC_1(VAR_9);
    return VAR_7;
}
