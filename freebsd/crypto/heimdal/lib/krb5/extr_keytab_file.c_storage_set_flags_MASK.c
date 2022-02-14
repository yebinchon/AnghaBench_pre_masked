
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int krb5_context ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(krb5_context VAR_3, krb5_storage *VAR_4, int VAR_5)
{
    int VAR_6 = 0;
    switch(VAR_5) {
    case 129:
 VAR_6 |= VAR_2;
 VAR_6 |= VAR_1;
 VAR_6 |= VAR_0;
 break;
    case 128:
 break;
    default:
 FUNC_1(VAR_3,
     "storage_set_flags called with bad vno (%d)", VAR_5);
    }
    FUNC_0(VAR_4, VAR_6);
}
