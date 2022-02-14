
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_m3 {int num_substreams; scalar_t__ iobase; TYPE_1__* rmidi; int reg_lock; struct m3_dma* substreams; int hwvol_tq; } ;
struct m3_dma {scalar_t__ running; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_10 ;
 int FUNC_2 (struct snd_m3*,struct m3_dma*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct snd_m3 *VAR_13 = VAR_12;
 u8 VAR_14;
 int VAR_15;

 VAR_14 = FUNC_0(VAR_13->iobase + VAR_4);

 if (VAR_14 == 0xff)
  return VAR_7;

 if (VAR_14 & VAR_5)
  FUNC_6(&VAR_13->hwvol_tq);





 if (VAR_14 & VAR_2) {
  u8 VAR_16 = FUNC_0(VAR_13->iobase + VAR_0);
  if (!(VAR_16 & VAR_9)) {
   VAR_16 = FUNC_0(VAR_13->iobase + VAR_1);
   if (VAR_16 & VAR_3) {
    FUNC_1(VAR_3, VAR_13->iobase + VAR_1);

    FUNC_4(&VAR_13->reg_lock);
    for (VAR_15 = 0; VAR_15 < VAR_13->num_substreams; VAR_15++) {
     struct m3_dma *VAR_17 = &VAR_13->substreams[VAR_15];
     if (VAR_17->running)
      FUNC_2(VAR_13, VAR_17);
    }
    FUNC_5(&VAR_13->reg_lock);
   }
  }
 }







 FUNC_1(VAR_14, VAR_13->iobase + VAR_4);

 return VAR_6;
}
