
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {scalar_t__ dma; int flags; int dma_mode; } ;
struct audio_operations {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct dma_buffparms*) ;

__attribute__((used)) static void FUNC_5(struct audio_operations *VAR_4, struct dma_buffparms *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_5->dma >= 0) {
  FUNC_3(VAR_5->dma);
  VAR_6=FUNC_0();
  FUNC_1(VAR_5->dma);
  FUNC_2(VAR_6);
 }
 if (VAR_5->flags & VAR_1)
  VAR_5->dma_mode = VAR_2;
 VAR_5->flags &= ~VAR_1;

 if (VAR_3 == VAR_0)
  FUNC_4(VAR_5);
}
