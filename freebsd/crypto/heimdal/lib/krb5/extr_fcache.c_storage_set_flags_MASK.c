
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int krb5_context ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(krb5_context VAR_4, krb5_storage *VAR_5, int VAR_6)
{
    int VAR_7 = 0;
    switch(VAR_6) {
    case 131:
 VAR_7 |= VAR_3;
 VAR_7 |= VAR_2;
 VAR_7 |= VAR_0;
 break;
    case 130:
 VAR_7 |= VAR_0;
 break;
    case 129:
 VAR_7 |= VAR_1;
 break;
    case 128:
 break;
    default:
 FUNC_0(VAR_4,
      "storage_set_flags called with bad vno (%x)", VAR_6);
    }
    FUNC_1(VAR_5, VAR_7);
}
