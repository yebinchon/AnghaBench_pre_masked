
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct hdac_softc {TYPE_2__* streams; int mem; } ;
struct hdac_bdle {void* ioc; void* len; void* addrh; void* addrl; } ;
typedef int device_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_3__ {int dma_paddr; int dma_map; int dma_tag; scalar_t__ dma_vaddr; } ;
struct TYPE_4__ {int stripe; int format; int blksz; int running; TYPE_1__ bdl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,int ,int ) ;
 struct hdac_softc* FUNC_7 (int ) ;
 int FUNC_8 (struct hdac_softc*,int,int) ;
 int FUNC_9 (struct hdac_softc*) ;
 void* FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_22, device_t VAR_23,
    int VAR_24, int VAR_25, bus_addr_t VAR_26, int VAR_27, int VAR_28)
{
 struct hdac_softc *VAR_29 = FUNC_7(VAR_22);
 struct hdac_bdle *VAR_30;
 uint64_t VAR_31;
 int VAR_32, VAR_33, VAR_34;
 uint32_t VAR_35;

 VAR_33 = FUNC_8(VAR_29, VAR_24, VAR_25);
 FUNC_5(VAR_33 >= 0,
     ("Start for not allocated stream (%d/%d)\n", VAR_24, VAR_25));

 VAR_31 = (uint64_t)VAR_26;
 VAR_30 = (struct hdac_bdle *)VAR_29->streams[VAR_33].bdl.dma_vaddr;
 for (VAR_32 = 0; VAR_32 < VAR_28; VAR_32++, VAR_30++) {
  VAR_30->addrl = FUNC_10((uint32_t)VAR_31);
  VAR_30->addrh = FUNC_10((uint32_t)(VAR_31 >> 32));
  VAR_30->len = FUNC_10(VAR_27);
  VAR_30->ioc = FUNC_10(1);
  VAR_31 += VAR_27;
 }

 FUNC_6(VAR_29->streams[VAR_33].bdl.dma_tag,
     VAR_29->streams[VAR_33].bdl.dma_map, VAR_0);

 VAR_34 = VAR_33 << 5;
 FUNC_4(&VAR_29->mem, VAR_34 + VAR_4, VAR_27 * VAR_28);
 FUNC_3(&VAR_29->mem, VAR_34 + VAR_17, VAR_28 - 1);
 VAR_31 = VAR_29->streams[VAR_33].bdl.dma_paddr;
 FUNC_4(&VAR_29->mem, VAR_34 + VAR_2, (uint32_t)VAR_31);
 FUNC_4(&VAR_29->mem, VAR_34 + VAR_3, (uint32_t)(VAR_31 >> 32));

 VAR_35 = FUNC_0(&VAR_29->mem, VAR_34 + VAR_6);
 if (VAR_24)
  VAR_35 |= VAR_7;
 else
  VAR_35 &= ~VAR_7;
 VAR_35 &= ~VAR_10;
 VAR_35 |= VAR_25 << VAR_11;
 VAR_35 &= ~VAR_8;
 VAR_35 |= VAR_29->streams[VAR_33].stripe << VAR_9;
 FUNC_2(&VAR_29->mem, VAR_34 + VAR_6, VAR_35);

 FUNC_3(&VAR_29->mem, VAR_34 + VAR_16, VAR_29->streams[VAR_33].format);

 VAR_35 = FUNC_1(&VAR_29->mem, VAR_1);
 VAR_35 |= 1 << VAR_33;
 FUNC_4(&VAR_29->mem, VAR_1, VAR_35);

 FUNC_2(&VAR_29->mem, VAR_34 + VAR_18,
     VAR_20 | VAR_21 | VAR_19);
 VAR_35 = FUNC_0(&VAR_29->mem, VAR_34 + VAR_5);
 VAR_35 |= VAR_14 | VAR_13 | VAR_12 |
     VAR_15;
 FUNC_2(&VAR_29->mem, VAR_34 + VAR_5, VAR_35);

 VAR_29->streams[VAR_33].blksz = VAR_27;
 VAR_29->streams[VAR_33].running = 1;
 FUNC_9(VAR_29);
 return (0);
}
