
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* fetch ) (TYPE_1__*,unsigned char*,size_t) ;int eof_code; } ;
typedef TYPE_1__ krb5_storage ;
typedef int krb5_error_code ;
typedef unsigned long int32_t ;


 int FUNC_0 (unsigned char*,unsigned long*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,unsigned char*,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_storage *VAR_1,
      int32_t *VAR_2,
      size_t VAR_3)
{
    int VAR_4;
    unsigned char VAR_5[4];
    unsigned long VAR_6;
    VAR_4 = VAR_1->fetch(VAR_1, VAR_5, VAR_3);
    if (VAR_4 < 0)
 return VAR_0;
    if ((size_t)VAR_4 != VAR_3)
 return VAR_1->eof_code;
    FUNC_0(VAR_5, &VAR_6, VAR_3);
    *VAR_2 = VAR_6;
    return 0;
}
