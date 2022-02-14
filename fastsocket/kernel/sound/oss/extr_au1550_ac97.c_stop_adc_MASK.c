
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dmabuf {int stopped; int dmanr; } ;
struct au1550_state {int lock; struct dmabuf dma_adc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct au1550_state *VAR_4)
{
 struct dmabuf *VAR_5 = &VAR_4->dma_adc;
 unsigned long VAR_6;
 u32 VAR_7;

 if (VAR_5->stopped)
  return;

 FUNC_4(&VAR_4->lock, VAR_6);

 FUNC_3(VAR_1, VAR_0);
 FUNC_2();



 do {
  VAR_7 = FUNC_1(VAR_2);
  FUNC_2();
 } while ((VAR_7 & VAR_3) != 0);

 FUNC_0(VAR_5->dmanr);

 VAR_5->stopped = 1;

 FUNC_5(&VAR_4->lock, VAR_6);
}
