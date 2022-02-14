
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_amd7930 {unsigned int flags; int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_amd7930 *VAR_7, unsigned int VAR_8, int VAR_9)
{
 unsigned long VAR_10;
 int VAR_11 = 0;

 FUNC_1(&VAR_7->lock, VAR_10);
 if (VAR_9 == VAR_5) {
  if (!(VAR_7->flags & VAR_8)) {
   VAR_7->flags |= VAR_8;


   FUNC_0(VAR_2, VAR_7->regs + VAR_0);
   FUNC_0(VAR_3, VAR_7->regs + VAR_1);
  }
 } else if (VAR_9 == VAR_6) {
  if (VAR_7->flags & VAR_8) {
   VAR_7->flags &= ~VAR_8;


   FUNC_0(VAR_2, VAR_7->regs + VAR_0);
   FUNC_0(0, VAR_7->regs + VAR_1);
  }
 } else {
  VAR_11 = -VAR_4;
 }
 FUNC_2(&VAR_7->lock, VAR_10);

 return VAR_11;
}
