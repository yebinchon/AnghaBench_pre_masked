
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; int tx_dmat; int parent_dmat; int rx_jumbo_dmat; int rx_dmat; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(adapter_t *VAR_9)
{


 if (FUNC_0( FUNC_1(VAR_9->dev),
    1, 0,
    VAR_1,
    VAR_1,
    ((void*)0), ((void*)0),
    VAR_2,
    VAR_3,
    VAR_2,
    0,
    ((void*)0), ((void*)0),
    &VAR_9->parent_dmat)) {
  FUNC_2(VAR_9->dev, "Cannot allocate parent DMA tag\n");
  return (VAR_4);
 }




 if (FUNC_0(VAR_9->parent_dmat, VAR_5, 0, VAR_1,
  VAR_1, ((void*)0), ((void*)0), VAR_5, 1,
  VAR_5, VAR_0, ((void*)0), ((void*)0), &VAR_9->rx_dmat)) {
  FUNC_2(VAR_9->dev, "Cannot allocate RX DMA tag\n");
  return (VAR_4);
 }




 if (FUNC_0(VAR_9->parent_dmat, VAR_6, 0, VAR_1,
  VAR_1, ((void*)0), ((void*)0), VAR_6, 1, VAR_6,
  VAR_0, ((void*)0), ((void*)0), &VAR_9->rx_jumbo_dmat)) {
  FUNC_2(VAR_9->dev, "Cannot allocate RX jumbo DMA tag\n");
  return (VAR_4);
 }




 if (FUNC_0(VAR_9->parent_dmat, 1, 0, VAR_1,
  VAR_1, ((void*)0), ((void*)0), VAR_8, VAR_7,
  VAR_8, VAR_0,
  ((void*)0), ((void*)0), &VAR_9->tx_dmat)) {
  FUNC_2(VAR_9->dev, "Cannot allocate TX DMA tag\n");
  return (VAR_4);
 }

 return (0);
}
