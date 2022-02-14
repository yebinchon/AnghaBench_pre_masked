
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct ioat_softc {int dmaengine; int head; } ;
struct TYPE_6__ {int null; } ;
struct TYPE_5__ {int completion_update; int op; } ;
struct TYPE_7__ {TYPE_2__ control; TYPE_1__ control_generic; scalar_t__ control_raw; } ;
struct ioat_dma_hw_descriptor {int size; TYPE_3__ u; scalar_t__ dest_addr; scalar_t__ src_addr; } ;
struct bus_dmadesc {int * callback_arg; int * callback_fn; } ;
struct ioat_descriptor {struct bus_dmadesc bus_dmadesc; } ;
struct TYPE_8__ {struct ioat_dma_hw_descriptor dma; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ioat_softc*) ;
 TYPE_4__* FUNC_3 (struct ioat_softc*,int ) ;
 struct ioat_descriptor* FUNC_4 (struct ioat_softc*,int ) ;
 int FUNC_5 (int ,char*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct ioat_softc*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ioat_softc*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct ioat_softc *VAR_4)
{
 struct ioat_dma_hw_descriptor *VAR_5;
 struct ioat_descriptor *VAR_6;
 struct bus_dmadesc *VAR_7;
 uint64_t VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 FUNC_1(&VAR_4->dmaengine);


 VAR_6 = FUNC_4(VAR_4, VAR_4->head);
 VAR_5 = &FUNC_3(VAR_4, VAR_4->head)->dma;
 VAR_7 = &VAR_6->bus_dmadesc;

 VAR_7->callback_fn = ((void*)0);
 VAR_7->callback_arg = ((void*)0);

 VAR_5->u.control_raw = 0;
 VAR_5->u.control_generic.op = VAR_3;
 VAR_5->u.control_generic.completion_update = 1;
 VAR_5->size = 8;
 VAR_5->src_addr = 0;
 VAR_5->dest_addr = 0;
 VAR_5->u.control.null = 1;

 FUNC_8(VAR_4);
 FUNC_7(&VAR_4->dmaengine);

 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {
  FUNC_0(1);
  VAR_8 = FUNC_2(VAR_4);
  if (FUNC_9(VAR_8))
   return (0);
 }

 VAR_9 = FUNC_6(VAR_4, VAR_1);
 FUNC_5(0, "could not start channel: "
     "status = %#jx error = %b\n", (uintmax_t)VAR_8, (int)VAR_9,
     VAR_2);
 return (VAR_0);
}
