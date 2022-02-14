
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_8__ {int serial; int issuer; } ;
struct TYPE_6__ {int dirn; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ d; } ;
typedef TYPE_2__ GENERAL_NAME ;
typedef TYPE_3__ ESS_ISSUER_SERIAL ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(ESS_ISSUER_SERIAL *VAR_1, X509 *VAR_2)
{
    GENERAL_NAME *VAR_3;

    if (!VAR_1 || !VAR_2 || FUNC_4(VAR_1->issuer) != 1)
        return -1;

    VAR_3 = FUNC_5(VAR_1->issuer, 0);
    if (VAR_3->type != VAR_0
        || FUNC_1(VAR_3->d.dirn, FUNC_2(VAR_2)))
        return -1;

    if (FUNC_0(VAR_1->serial, FUNC_3(VAR_2)))
        return -1;

    return 0;
}
