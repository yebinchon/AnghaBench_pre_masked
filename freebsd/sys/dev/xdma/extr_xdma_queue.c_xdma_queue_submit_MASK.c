
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdma_controller_t ;
struct TYPE_6__ {int flags; int * xdma; } ;
typedef TYPE_1__ xdma_channel_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(xdma_channel_t *VAR_1)
{
 xdma_controller_t *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->xdma;
 FUNC_0(VAR_2 != ((void*)0), ("xdma is NULL"));

 VAR_3 = 0;

 FUNC_1(VAR_1);

 if (VAR_1->flags & VAR_0)
  VAR_3 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 return (VAR_3);
}
