
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef size_t u_int ;
struct agp_i810_softc {TYPE_2__* match; } ;
typedef int device_t ;
struct TYPE_8__ {scalar_t__ valid; scalar_t__ ref_count; } ;
struct TYPE_7__ {TYPE_1__* driver; } ;
struct TYPE_6__ {int (* read_gtt_pte ) (int ,size_t) ;int (* install_gtt_pte ) (int ,size_t,int ,size_t) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 struct agp_i810_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t,int ,size_t) ;
 int FUNC_4 (int ,size_t) ;

void
FUNC_5(device_t VAR_1, u_int VAR_2, u_int VAR_3,
    vm_page_t *VAR_4, u_int VAR_5)
{
 struct agp_i810_softc *VAR_6;
 u_int VAR_7;

 VAR_6 = FUNC_2(VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_0(VAR_4[VAR_7]->valid == VAR_0);
  FUNC_0(VAR_4[VAR_7]->ref_count > 0);
  VAR_6->match->driver->install_gtt_pte(VAR_1, VAR_2 + VAR_7,
      FUNC_1(VAR_4[VAR_7]), VAR_5);
 }
 VAR_6->match->driver->read_gtt_pte(VAR_1, VAR_2 + VAR_3 - 1);
}
