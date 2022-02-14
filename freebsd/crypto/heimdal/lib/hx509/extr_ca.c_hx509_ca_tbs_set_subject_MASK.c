
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_name ;
typedef int hx509_context ;
typedef TYPE_1__* hx509_ca_tbs ;
struct TYPE_3__ {scalar_t__ subject; } ;


 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;

int
FUNC_2(hx509_context VAR_0,
    hx509_ca_tbs VAR_1,
    hx509_name VAR_2)
{
    if (VAR_1->subject)
 FUNC_1(&VAR_1->subject);
    return FUNC_0(VAR_0, VAR_2, &VAR_1->subject);
}
