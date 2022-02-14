
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int rx_buf_tag; int max_rx_sgl_size; int dma_width; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ena_adapter *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(FUNC_2(VAR_2->pdev),
     1, 0,
     FUNC_0(VAR_2->dma_width),
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_1,
     VAR_2->max_rx_sgl_size,
     VAR_1,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_2->rx_buf_tag);

 return (VAR_3);
}
