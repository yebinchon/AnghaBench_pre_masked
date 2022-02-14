
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {TYPE_2__* desc_ring; } ;
struct awg_softc {TYPE_1__ rx; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_4__ {void* status; void* size; void* addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct awg_softc *VAR_2, int VAR_3, bus_addr_t VAR_4)
{
 uint32_t VAR_5, VAR_6;

 VAR_5 = VAR_1;
 VAR_6 = VAR_0 - 1;

 VAR_2->rx.desc_ring[VAR_3].addr = FUNC_0((uint32_t)VAR_4);
 VAR_2->rx.desc_ring[VAR_3].size = FUNC_0(VAR_6);
 VAR_2->rx.desc_ring[VAR_3].status = FUNC_0(VAR_5);
}
