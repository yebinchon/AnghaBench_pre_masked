
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int bus_addr; } ;
struct TYPE_8__ {int tx_boundary; int read_dma; int write_dma; int read_write_dma; int dev; TYPE_1__ dmabench_dma; } ;
typedef TYPE_2__ mxge_softc_t ;
struct TYPE_9__ {int data0; int data2; void* data1; } ;
typedef TYPE_3__ mxge_cmd_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (TYPE_2__*,int,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4(mxge_softc_t *VAR_1, int VAR_2)
{
 mxge_cmd_t VAR_3;
 bus_addr_t VAR_4 = VAR_1->dmabench_dma.bus_addr;
 int VAR_5;
 uint32_t VAR_6;
 char *VAR_7 = " ";
 VAR_6 = VAR_1->tx_boundary;

 VAR_3.data0 = FUNC_1(VAR_4);
 VAR_3.data1 = FUNC_0(VAR_4);
 VAR_3.data2 = VAR_6 * 0x10000;
 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_3);
 if (VAR_5 != 0) {
  VAR_7 = "read";
  goto abort;
 }
 VAR_1->read_dma = ((VAR_3.data0>>16) * VAR_6 * 2) /
  (VAR_3.data0 & 0xffff);
 VAR_3.data0 = FUNC_1(VAR_4);
 VAR_3.data1 = FUNC_0(VAR_4);
 VAR_3.data2 = VAR_6 * 0x1;
 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_3);
 if (VAR_5 != 0) {
  VAR_7 = "write";
  goto abort;
 }
 VAR_1->write_dma = ((VAR_3.data0>>16) * VAR_6 * 2) /
  (VAR_3.data0 & 0xffff);

 VAR_3.data0 = FUNC_1(VAR_4);
 VAR_3.data1 = FUNC_0(VAR_4);
 VAR_3.data2 = VAR_6 * 0x10001;
 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_3);
 if (VAR_5 != 0) {
  VAR_7 = "read/write";
  goto abort;
 }
 VAR_1->read_write_dma = ((VAR_3.data0>>16) * VAR_6 * 2 * 2) /
  (VAR_3.data0 & 0xffff);

abort:
 if (VAR_5 != 0 && VAR_2 != VAR_0)
  FUNC_2(VAR_1->dev, "DMA %s benchmark failed: %d\n",
         VAR_7, VAR_5);

 return VAR_5;
}
