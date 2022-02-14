
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_4__ {size_t length; void* data; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (void*,void*,size_t) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_0, krb5_storage *VAR_1, void *VAR_2, size_t VAR_3)
{
    int VAR_4 = 0;
    krb5_data VAR_5;
    if (FUNC_3(VAR_1, &VAR_5))
 FUNC_0(1, "krb5_storage_to_data failed");
    FUNC_2(VAR_1);
    if(VAR_5.length != VAR_3 || FUNC_4(VAR_5.data, VAR_2, VAR_3) != 0) {
 FUNC_6("%s mismatch\n", VAR_0);
 FUNC_6("  Expected: ");
 FUNC_5(VAR_2, VAR_3);
 FUNC_6("  Actual:   ");
 FUNC_5(VAR_5.data, VAR_5.length);
 VAR_4++;
    }
    FUNC_1(&VAR_5);
    return VAR_4;
}
