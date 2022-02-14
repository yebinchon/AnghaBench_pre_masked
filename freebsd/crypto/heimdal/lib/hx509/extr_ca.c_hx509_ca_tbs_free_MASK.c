
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_ca_tbs ;
struct TYPE_5__ {int subject; int issuerUniqueID; int subjectUniqueID; int crldp; int serial; int eku; int san; int spki; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

void
FUNC_9(hx509_ca_tbs *VAR_0)
{
    if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
 return;

    FUNC_6(&(*VAR_0)->spki);
    FUNC_5(&(*VAR_0)->san);
    FUNC_4(&(*VAR_0)->eku);
    FUNC_1(&(*VAR_0)->serial);
    FUNC_3(&(*VAR_0)->crldp);
    FUNC_0(&(*VAR_0)->subjectUniqueID);
    FUNC_0(&(*VAR_0)->issuerUniqueID);
    FUNC_7(&(*VAR_0)->subject);

    FUNC_8(*VAR_0, 0, sizeof(**VAR_0));
    FUNC_2(*VAR_0);
    *VAR_0 = ((void*)0);
}
