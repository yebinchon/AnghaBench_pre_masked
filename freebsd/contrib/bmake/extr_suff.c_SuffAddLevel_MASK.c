
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int l; TYPE_2__* s; } ;
struct TYPE_7__ {TYPE_1__* suff; } ;
struct TYPE_6__ {int children; } ;
typedef TYPE_2__ Src ;
typedef TYPE_3__ LstSrc ;
typedef int Lst ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(Lst VAR_1, Src *VAR_2)
{
    LstSrc VAR_3;

    VAR_3.s = VAR_2;
    VAR_3.l = VAR_1;

    FUNC_0(VAR_2->suff->children, VAR_0, &VAR_3);
}
