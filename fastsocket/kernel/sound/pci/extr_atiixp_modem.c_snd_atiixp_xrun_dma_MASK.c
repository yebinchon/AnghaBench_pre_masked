
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atiixp_modem {int dummy; } ;
struct atiixp_dma {int substream; TYPE_1__* ops; int running; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct atiixp_modem *VAR_1,
    struct atiixp_dma *VAR_2)
{
 if (! VAR_2->substream || ! VAR_2->running)
  return;
 FUNC_1("atiixp-modem: XRUN detected (DMA %d)\n", VAR_2->ops->type);
 FUNC_0(VAR_2->substream, VAR_0);
}
