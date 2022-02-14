
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tst_info; int status_info; } ;
typedef TYPE_1__ TS_RESP ;
typedef int BIO ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(BIO *VAR_0, TS_RESP *VAR_1)
{
    FUNC_0(VAR_0, "Status info:\n");
    FUNC_1(VAR_0, VAR_1->status_info);

    FUNC_0(VAR_0, "\nTST info:\n");
    if (VAR_1->tst_info != ((void*)0))
        FUNC_2(VAR_0, VAR_1->tst_info);
    else
        FUNC_0(VAR_0, "Not included.\n");

    return 1;
}
