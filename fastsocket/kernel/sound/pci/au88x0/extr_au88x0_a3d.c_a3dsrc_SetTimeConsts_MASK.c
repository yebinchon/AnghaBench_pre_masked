
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_5__ {int source; int slice; scalar_t__ vortex; } ;
typedef TYPE_2__ a3dsrc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,short) ;

__attribute__((used)) static void
FUNC_2(a3dsrc_t * VAR_4, short VAR_5, short VAR_6,
       short VAR_7, short VAR_8)
{
 vortex_t *VAR_9 = (vortex_t *) (VAR_4->vortex);
 FUNC_1(VAR_9->mmio,
  FUNC_0(VAR_4->slice, VAR_4->source, VAR_2), VAR_5);
 FUNC_1(VAR_9->mmio,
  FUNC_0(VAR_4->slice, VAR_4->source, VAR_3), VAR_6);
 FUNC_1(VAR_9->mmio,
  FUNC_0(VAR_4->slice, VAR_4->source, VAR_1), VAR_7);
 FUNC_1(VAR_9->mmio,
  FUNC_0(VAR_4->slice, VAR_4->source, VAR_0), VAR_8);
}
