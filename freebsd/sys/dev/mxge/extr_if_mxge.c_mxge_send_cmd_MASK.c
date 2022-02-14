
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int map; int dmat; int bus_addr; } ;
struct TYPE_12__ {char* sram; int cmd_mtx; int dev; TYPE_2__ cmd_dma; TYPE_6__* cmd; } ;
typedef TYPE_3__ mxge_softc_t ;
struct TYPE_13__ {int data0; int data1; int data2; } ;
typedef TYPE_4__ mxge_cmd_t ;
struct TYPE_10__ {void* high; void* low; } ;
struct TYPE_14__ {TYPE_1__ response_addr; void* cmd; void* data2; void* data1; void* data0; } ;
typedef TYPE_5__ mcp_cmd_t ;
struct TYPE_15__ {int result; int data; } ;
typedef TYPE_6__ mcp_cmd_response_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int,int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void volatile*,TYPE_5__*,int) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(mxge_softc_t *VAR_7, uint32_t VAR_8, mxge_cmd_t *VAR_9)
{
 mcp_cmd_t *VAR_10;
 char VAR_11[sizeof(*VAR_10) + 8];
 volatile mcp_cmd_response_t *VAR_12 = VAR_7->cmd;
 volatile char *VAR_13 = VAR_7->sram + VAR_6;
 uint32_t VAR_14, VAR_15;
 int VAR_16, VAR_17 = 0;


 VAR_10 = (mcp_cmd_t *)((unsigned long)(VAR_11 + 7) & ~7UL);

 VAR_10->data0 = FUNC_6(VAR_9->data0);
 VAR_10->data1 = FUNC_6(VAR_9->data1);
 VAR_10->data2 = FUNC_6(VAR_9->data2);
 VAR_10->cmd = FUNC_6(VAR_8);
 VAR_14 = FUNC_2(VAR_7->cmd_dma.bus_addr);
 VAR_15 = FUNC_1(VAR_7->cmd_dma.bus_addr);

 VAR_10->response_addr.low = FUNC_6(VAR_14);
 VAR_10->response_addr.high = FUNC_6(VAR_15);
 FUNC_7(&VAR_7->cmd_mtx);
 VAR_12->result = 0xffffffff;
 FUNC_10();
 FUNC_9((volatile void *)VAR_13, VAR_10, sizeof (*VAR_10));


 VAR_16 = VAR_2;
 for (VAR_17 = 0; VAR_17 < 20; VAR_17++) {
  FUNC_4(VAR_7->cmd_dma.dmat,
    VAR_7->cmd_dma.map, VAR_0);
  FUNC_10();
  switch (FUNC_3(VAR_12->result)) {
  case 0:
   VAR_9->data0 = FUNC_3(VAR_12->data);
   VAR_16 = 0;
   break;
  case 0xffffffff:
   FUNC_0(1000);
   break;
  case 128:
   VAR_16 = VAR_4;
   break;
  case 129:
   VAR_16 = VAR_1;
   break;
  case 131:
   VAR_16 = VAR_3;
   break;
  case 130:
   VAR_16 = VAR_5;
   break;
  default:
   FUNC_5(VAR_7->dev,
          "mxge: command %d "
          "failed, result = %d\n",
          VAR_8, FUNC_3(VAR_12->result));
   VAR_16 = VAR_5;
   break;
  }
  if (VAR_16 != VAR_2)
   break;
 }
 if (VAR_16 == VAR_2)
  FUNC_5(VAR_7->dev, "mxge: command %d timed out"
         "result = %d\n",
         VAR_8, FUNC_3(VAR_12->result));
 FUNC_8(&VAR_7->cmd_mtx);
 return VAR_16;
}
