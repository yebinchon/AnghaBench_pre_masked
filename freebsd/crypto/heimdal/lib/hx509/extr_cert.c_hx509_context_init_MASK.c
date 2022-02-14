
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* hx509_context ;
struct TYPE_12__ {int default_trust_anchors; int et_list; int ocsp_time_diff; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int
FUNC_13(hx509_context *VAR_3)
{
    *VAR_3 = FUNC_9(1, sizeof(**VAR_3));
    if (*VAR_3 == ((void*)0))
 return VAR_0;

    FUNC_6(*VAR_3);
    FUNC_5(*VAR_3);
    FUNC_3(*VAR_3);
    FUNC_8(*VAR_3);
    FUNC_7(*VAR_3);
    FUNC_2(*VAR_3);
    FUNC_4(*VAR_3);

    FUNC_0();
    FUNC_1();

    (*VAR_3)->ocsp_time_diff = VAR_2;

    FUNC_12(&(*VAR_3)->et_list);
    FUNC_11(&(*VAR_3)->et_list);






    return 0;
}
