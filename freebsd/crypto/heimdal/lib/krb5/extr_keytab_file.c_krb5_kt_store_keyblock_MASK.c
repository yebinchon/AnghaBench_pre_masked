
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fkt_data {int filename; } ;
typedef int krb5_storage ;
struct TYPE_3__ {int keyvalue; int keytype; } ;
typedef TYPE_1__ krb5_keyblock ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_0,
         struct fkt_data *VAR_1,
         krb5_storage *VAR_2,
         krb5_keyblock *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_3(VAR_2, VAR_3->keytype);
    if(VAR_4) {
 FUNC_2(VAR_0, VAR_4,
          FUNC_0("Cant store keyblock to file %s", ""),
          VAR_1->filename);
 return VAR_4;
    }
    VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3->keyvalue);
    if (VAR_4)
 FUNC_2(VAR_0, VAR_4,
          FUNC_0("Cant store keyblock to file %s", ""),
          VAR_1->filename);
    return VAR_4;
}
