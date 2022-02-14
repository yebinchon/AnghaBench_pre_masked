
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_crypto ;
struct TYPE_3__ {int flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

void
FUNC_1(hx509_crypto VAR_3, int VAR_4)
{
    switch (VAR_4) {
    case 128:
 VAR_3->flags &= ~VAR_0;
 VAR_3->flags |= VAR_2;
 break;
    case 129:
 VAR_3->flags &= ~VAR_0;
 VAR_3->flags |= VAR_1;
 break;
    default:
 FUNC_0("Invalid padding");
    }
}
