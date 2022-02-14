
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int sg; } ;
typedef TYPE_1__ xdma_channel_t ;
typedef int uint32_t ;
struct xdma_sglist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int) ;

int
FUNC_1(xdma_channel_t *VAR_5)
{
 uint32_t VAR_6;

 if (VAR_5->flags & VAR_3)
  return (-1);

 VAR_6 = (sizeof(struct xdma_sglist) * VAR_4);
 VAR_5->sg = FUNC_0(VAR_6, VAR_1, VAR_0 | VAR_2);
 VAR_5->flags |= VAR_3;

 return (0);
}
