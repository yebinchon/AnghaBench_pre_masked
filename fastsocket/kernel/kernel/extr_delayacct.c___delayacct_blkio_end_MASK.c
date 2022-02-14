
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* delays; } ;
struct TYPE_3__ {int flags; int blkio_count; int blkio_delay; int blkio_end; int blkio_start; int swapin_count; int swapin_delay; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *) ;

void FUNC_1(void)
{
 if (VAR_1->delays->flags & VAR_0)

  FUNC_0(&VAR_1->delays->blkio_start,
   &VAR_1->delays->blkio_end,
   &VAR_1->delays->swapin_delay,
   &VAR_1->delays->swapin_count);
 else
  FUNC_0(&VAR_1->delays->blkio_start,
   &VAR_1->delays->blkio_end,
   &VAR_1->delays->blkio_delay,
   &VAR_1->delays->blkio_count);
}
