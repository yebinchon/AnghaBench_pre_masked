
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp_modem {int dummy; } ;
struct atiixp_dma {int substream; int running; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct atiixp_modem *VAR_0,
      struct atiixp_dma *VAR_1)
{
 if (! VAR_1->substream || ! VAR_1->running)
  return;
 FUNC_0(VAR_1->substream);
}
