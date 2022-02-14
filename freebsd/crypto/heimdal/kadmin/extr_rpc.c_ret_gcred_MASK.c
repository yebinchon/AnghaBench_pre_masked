
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcred {int handle; int service; int seq_num; int proc; int version; } ;
typedef int krb5_storage ;
typedef int krb5_data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (struct gcred*,int ,int) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int
FUNC_7(krb5_data *VAR_0, struct gcred *VAR_1)
{
    krb5_storage *VAR_2;

    FUNC_5(VAR_1, 0, sizeof(*VAR_1));

    VAR_2 = FUNC_4(VAR_0);
    FUNC_1(VAR_2 != ((void*)0));

    FUNC_0(FUNC_2(VAR_2, &VAR_1->version));
    FUNC_0(FUNC_2(VAR_2, &VAR_1->proc));
    FUNC_0(FUNC_2(VAR_2, &VAR_1->seq_num));
    FUNC_0(FUNC_2(VAR_2, &VAR_1->service));
    FUNC_0(FUNC_6(VAR_2, &VAR_1->handle));

    FUNC_3(VAR_2);

    return 0;
}
