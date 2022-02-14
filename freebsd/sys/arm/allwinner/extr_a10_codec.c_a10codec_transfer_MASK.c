
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct a10codec_chinfo {scalar_t__ dir; TYPE_1__* parent; scalar_t__ run; int blocksize; int dmachan; int dmac; scalar_t__ pos; scalar_t__ physaddr; scalar_t__ fifo; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct a10codec_chinfo *VAR_1)
{
 bus_addr_t VAR_2, VAR_3;
 int VAR_4;

 if (VAR_1->dir == VAR_0) {
  VAR_2 = VAR_1->physaddr + VAR_1->pos;
  VAR_3 = VAR_1->fifo;
 } else {
  VAR_2 = VAR_1->fifo;
  VAR_3 = VAR_1->physaddr + VAR_1->pos;
 }

 VAR_4 = FUNC_0(VAR_1->dmac, VAR_1->dmachan, VAR_2, VAR_3,
     VAR_1->blocksize);
 if (VAR_4) {
  VAR_1->run = 0;
  FUNC_1(VAR_1->parent->dev, "DMA transfer failed: %d\n",
      VAR_4);
 }
}
