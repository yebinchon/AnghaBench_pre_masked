
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int krb5_storage ;
typedef int kadm5_ret_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int,int ,int ) ;

kadm5_ret_t
FUNC_5 (int VAR_3,
     uint32_t *VAR_4)
{
    int VAR_5;
    krb5_storage *VAR_6;
    int32_t VAR_7;

    VAR_5 = FUNC_4 (VAR_3, 0, VAR_1);
    if(VAR_5 < 0)
 return VAR_2;
    if(VAR_5 == 0) {
 *VAR_4 = 0;
 return 0;
    }
    VAR_6 = FUNC_2 (VAR_3);
    FUNC_3(VAR_6, -4, VAR_0);
    FUNC_0 (VAR_6, &VAR_7);
    *VAR_4 = VAR_7;
    FUNC_1(VAR_6);
    FUNC_4 (VAR_3, 0, VAR_1);
    return 0;
}
