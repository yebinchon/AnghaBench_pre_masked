
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int this0e; int this0a; int this58; int this5c; scalar_t__ this54; } ;
struct TYPE_5__ {TYPE_2__ eq; } ;
typedef TYPE_1__ vortex_t ;
typedef int u32 ;
typedef TYPE_2__ eqlzr_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_0)
{
 eqlzr_t *VAR_1 = &(VAR_0->eq);
 u32 VAR_2, VAR_3;

 if (VAR_1->this54)
  VAR_2 = VAR_1->this0e;
 else
  VAR_2 = VAR_1->this0a;
 VAR_3 = (VAR_2 * VAR_1->this58) >> 0x10;
 VAR_2 = (VAR_2 * VAR_1->this5c) >> 0x10;
 FUNC_0(VAR_0, VAR_3, VAR_2);
}
