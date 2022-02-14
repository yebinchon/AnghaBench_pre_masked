
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viadev {scalar_t__ substream; scalar_t__ running; } ;
struct via82xx_modem {unsigned int intr_mask; unsigned int num_devs; int reg_lock; struct viadev* devs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct viadev*,int ) ;
 int FUNC_1 (struct via82xx_modem*,int ) ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct via82xx_modem *VAR_9 = VAR_8;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_10 = FUNC_3(FUNC_1(VAR_9, VAR_3));
 if (! (VAR_10 & VAR_9->intr_mask)) {
  return VAR_1;
 }



 FUNC_6(&VAR_9->reg_lock);
 for (VAR_11 = 0; VAR_11 < VAR_9->num_devs; VAR_11++) {
  struct viadev *VAR_12 = &VAR_9->devs[VAR_11];
  unsigned char VAR_13 = FUNC_2(FUNC_0(VAR_12, VAR_2));
  VAR_13 &= (VAR_4|VAR_5|VAR_6);
  if (! VAR_13)
   continue;
  if (VAR_12->substream && VAR_12->running) {
   FUNC_7(&VAR_9->reg_lock);
   FUNC_5(VAR_12->substream);
   FUNC_6(&VAR_9->reg_lock);
  }
  FUNC_4(VAR_13, FUNC_0(VAR_12, VAR_2));
 }
 FUNC_7(&VAR_9->reg_lock);
 return VAR_0;
}
