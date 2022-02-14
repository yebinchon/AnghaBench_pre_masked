
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ this28; size_t* this130; size_t this10; scalar_t__ this54; } ;
struct TYPE_5__ {TYPE_2__ eq; } ;
typedef TYPE_1__ vortex_t ;
typedef size_t u16 ;
typedef TYPE_2__ eqlzr_t ;


 int FUNC_0 (TYPE_1__*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_0, u16 VAR_1, u16 VAR_2)
{
 eqlzr_t *VAR_3 = &(VAR_0->eq);

 if (VAR_3->this28 == 0)
  return;

 VAR_3->this130[VAR_1 + VAR_3->this10] = VAR_2;
 if (VAR_3->this54)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
