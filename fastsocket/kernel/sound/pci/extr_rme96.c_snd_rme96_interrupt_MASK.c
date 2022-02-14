
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int rcreg; scalar_t__ iobase; int capture_substream; int playback_substream; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_7,
      void *VAR_8)
{
 struct rme96 *VAR_9 = (struct rme96 *)VAR_8;

 VAR_9->rcreg = FUNC_0(VAR_9->iobase + VAR_4);

 if (!((VAR_9->rcreg & VAR_5) ||
       (VAR_9->rcreg & VAR_6)))
 {
  return VAR_1;
 }

 if (VAR_9->rcreg & VAR_5) {

                FUNC_1(VAR_9->playback_substream);
  FUNC_2(0, VAR_9->iobase + VAR_2);
 }
 if (VAR_9->rcreg & VAR_6) {

  FUNC_1(VAR_9->capture_substream);
  FUNC_2(0, VAR_9->iobase + VAR_3);
 }
 return VAR_0;
}
