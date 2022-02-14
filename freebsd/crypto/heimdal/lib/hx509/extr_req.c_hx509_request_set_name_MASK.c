
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_request ;
typedef scalar_t__ hx509_name ;
typedef int hx509_context ;
struct TYPE_3__ {scalar_t__ name; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;

int
FUNC_2(hx509_context VAR_0,
   hx509_request VAR_1,
   hx509_name VAR_2)
{
    if (VAR_1->name)
 FUNC_1(&VAR_1->name);
    if (VAR_2) {
 int VAR_3 = FUNC_0(VAR_0, VAR_2, &VAR_1->name);
 if (VAR_3)
     return VAR_3;
    }
    return 0;
}
