
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* pniels_t ;
typedef int gf ;
typedef TYPE_2__* curve448_point_t ;
struct TYPE_7__ {int z; } ;
struct TYPE_6__ {int n; int z; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(curve448_point_t VAR_0, const pniels_t VAR_1,
                             int VAR_2)
{
    gf VAR_3;

    FUNC_2(VAR_3, VAR_0->z, VAR_1->z);
    FUNC_1(VAR_0->z, VAR_3);
    FUNC_0(VAR_0, VAR_1->n, VAR_2);
}
