
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmabuf {scalar_t__ stopped; int dmanr; int num_channels; } ;
struct au1550_state {struct dmabuf dma_dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct au1550_state *VAR_3)
{
 struct dmabuf *VAR_4 = &VAR_3->dma_dac;

 if (!VAR_4->stopped)
  return;

 FUNC_3(VAR_4->num_channels);
 FUNC_2(VAR_1, VAR_0);
 FUNC_1();
 FUNC_2(VAR_2, VAR_0);
 FUNC_1();

 FUNC_0(VAR_4->dmanr);

 VAR_4->stopped = 0;
}
