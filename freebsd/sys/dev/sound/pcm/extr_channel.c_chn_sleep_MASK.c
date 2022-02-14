
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int flags; int lock; int intr_cv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcm_channel*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct pcm_channel *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3);

 if (VAR_3->flags & VAR_0)
  return (VAR_2);

 VAR_3->flags |= VAR_1;
 VAR_5 = FUNC_1(&VAR_3->intr_cv, VAR_3->lock, VAR_4);
 VAR_3->flags &= ~VAR_1;

 return ((VAR_3->flags & VAR_0) ? VAR_2 : VAR_5);
}
