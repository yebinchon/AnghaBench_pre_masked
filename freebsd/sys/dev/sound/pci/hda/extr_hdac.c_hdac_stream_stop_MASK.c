
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct hdac_softc {TYPE_2__* streams; int mem; } ;
typedef int device_t ;
struct TYPE_3__ {int dma_map; int dma_tag; } ;
struct TYPE_4__ {scalar_t__ running; TYPE_1__ bdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct hdac_softc* FUNC_6 (int ) ;
 int FUNC_7 (struct hdac_softc*,int,int) ;
 int FUNC_8 (struct hdac_softc*) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_7, device_t VAR_8, int VAR_9, int VAR_10)
{
 struct hdac_softc *VAR_11 = FUNC_6(VAR_7);
 int VAR_12, VAR_13;
 uint32_t VAR_14;

 VAR_12 = FUNC_7(VAR_11, VAR_9, VAR_10);
 FUNC_4(VAR_12 >= 0,
     ("Stop for not allocated stream (%d/%d)\n", VAR_9, VAR_10));

 FUNC_5(VAR_11->streams[VAR_12].bdl.dma_tag,
     VAR_11->streams[VAR_12].bdl.dma_map, VAR_0);

 VAR_13 = VAR_12 << 5;
 VAR_14 = FUNC_0(&VAR_11->mem, VAR_13 + VAR_2);
 VAR_14 &= ~(VAR_5 | VAR_4 | VAR_3 |
     VAR_6);
 FUNC_2(&VAR_11->mem, VAR_13 + VAR_2, VAR_14);

 VAR_14 = FUNC_1(&VAR_11->mem, VAR_1);
 VAR_14 &= ~(1 << VAR_12);
 FUNC_3(&VAR_11->mem, VAR_1, VAR_14);

 VAR_11->streams[VAR_12].running = 0;
 FUNC_8(VAR_11);
}
