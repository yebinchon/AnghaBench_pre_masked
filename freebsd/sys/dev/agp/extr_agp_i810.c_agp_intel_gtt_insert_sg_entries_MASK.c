
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ u_int ;
struct sglist {scalar_t__ sg_nseg; TYPE_1__* sg_segs; } ;
struct agp_i810_softc {TYPE_3__* match; } ;
typedef int device_t ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {int (* read_gtt_pte ) (int ,scalar_t__) ;int (* install_gtt_pte ) (int ,scalar_t__,int ,scalar_t__) ;} ;
struct TYPE_4__ {size_t ss_len; int ss_paddr; } ;


 scalar_t__ VAR_0 ;
 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

void
FUNC_3(device_t VAR_1, struct sglist *VAR_2,
    u_int VAR_3, u_int VAR_4)
{
 struct agp_i810_softc *VAR_5;
 vm_paddr_t VAR_6;
 size_t VAR_7;
 u_int VAR_8, VAR_9;

 VAR_5 = FUNC_0(VAR_1);
 for (VAR_8 = VAR_9 = 0; VAR_9 < VAR_2->sg_nseg; VAR_9++) {
  VAR_6 = VAR_2->sg_segs[VAR_8].ss_paddr;
  VAR_7 = VAR_2->sg_segs[VAR_8].ss_len;
  for (; VAR_7 > 0; VAR_8++) {
   VAR_5->match->driver->install_gtt_pte(VAR_1, VAR_3 + VAR_8,
       VAR_6, VAR_4);
   VAR_6 += VAR_0;
   VAR_7 -= VAR_0;
  }
 }
 VAR_5->match->driver->read_gtt_pte(VAR_1, VAR_3 + VAR_8 - 1);
}
