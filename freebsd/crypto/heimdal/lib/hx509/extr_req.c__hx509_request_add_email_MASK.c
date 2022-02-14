
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int name ;
typedef TYPE_3__* hx509_request ;
typedef int hx509_context ;
struct TYPE_8__ {int length; int data; } ;
struct TYPE_9__ {TYPE_1__ dNSName; } ;
struct TYPE_11__ {TYPE_2__ u; int element; } ;
struct TYPE_10__ {int san; } ;
typedef TYPE_4__ GeneralName ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(hx509_context VAR_1,
    hx509_request VAR_2,
    const char *VAR_3)
{
    GeneralName VAR_4;

    FUNC_1(&VAR_4, 0, sizeof(VAR_4));
    VAR_4.element = VAR_0;
    VAR_4.u.dNSName.data = FUNC_2(VAR_3);
    VAR_4.u.dNSName.length = FUNC_3(VAR_3);

    return FUNC_0(&VAR_2->san, &VAR_4);
}
