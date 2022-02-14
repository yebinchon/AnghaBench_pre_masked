
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct a31dmac_softc {int dummy; } ;
struct a31dmac_channel {int index; scalar_t__ physaddr; TYPE_1__* desc; struct a31dmac_softc* sc; } ;
typedef int device_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_2__ {void* next; void* bcnt; void* dstaddr; void* srcaddr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct a31dmac_softc*,int ,size_t) ;
 void* FUNC_3 (size_t) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, void *VAR_3, bus_addr_t VAR_4, bus_addr_t VAR_5,
    size_t VAR_6)
{
 struct a31dmac_channel *VAR_7;
 struct a31dmac_softc *VAR_8;

 VAR_7 = VAR_3;
 VAR_8 = VAR_7->sc;

 VAR_7->desc->srcaddr = FUNC_3((uint32_t)VAR_4);
 VAR_7->desc->dstaddr = FUNC_3((uint32_t)VAR_5);
 VAR_7->desc->bcnt = FUNC_3(VAR_6);
 VAR_7->desc->next = FUNC_3(VAR_1);

 FUNC_2(VAR_8, FUNC_1(VAR_7->index), (uint32_t)VAR_7->physaddr);
 FUNC_2(VAR_8, FUNC_0(VAR_7->index), VAR_0);

 return (0);
}
