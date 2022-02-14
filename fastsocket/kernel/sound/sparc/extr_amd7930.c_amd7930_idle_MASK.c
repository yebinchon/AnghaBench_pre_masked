
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_amd7930 {int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static __inline__ void FUNC_3(struct snd_amd7930 *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_2, VAR_3->regs + VAR_0);
 FUNC_0(0, VAR_3->regs + VAR_1);
 FUNC_2(&VAR_3->lock, VAR_4);
}
