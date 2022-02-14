
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int v ;
struct TYPE_4__ {int (* store ) (TYPE_1__*,unsigned char*,size_t) ;int eof_code; } ;
typedef TYPE_1__ krb5_storage ;
typedef int krb5_error_code ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,size_t) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,unsigned char*,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_storage *VAR_2,
        int32_t VAR_3,
        size_t VAR_4)
{
    int VAR_5;
    unsigned char VAR_6[16];

    if(VAR_4 > sizeof(VAR_6))
 return VAR_0;
    FUNC_0(VAR_6, VAR_3, VAR_4);
    VAR_5 = VAR_2->store(VAR_2, VAR_6, VAR_4);
    if (VAR_5 < 0)
 return VAR_1;
    if ((size_t)VAR_5 != VAR_4)
 return VAR_2->eof_code;
    return 0;
}
