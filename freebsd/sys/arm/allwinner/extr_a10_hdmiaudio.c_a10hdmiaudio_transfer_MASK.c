
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct a10hdmiaudio_chinfo {TYPE_1__* parent; scalar_t__ run; int blocksize; scalar_t__ pos; scalar_t__ physaddr; int dmachan; int dmac; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct a10hdmiaudio_chinfo *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->dmac, VAR_1->dmachan,
     VAR_1->physaddr + VAR_1->pos, VAR_0, VAR_1->blocksize);
 if (VAR_2) {
  VAR_1->run = 0;
  FUNC_1(VAR_1->parent->dev, "DMA transfer failed: %d\n",
      VAR_2);
 }
}
