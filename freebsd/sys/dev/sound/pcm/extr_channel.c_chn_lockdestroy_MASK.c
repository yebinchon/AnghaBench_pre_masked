
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int lock; int intr_cv; int cv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct pcm_channel *VAR_0)
{
 FUNC_1(VAR_0);

 FUNC_0(&VAR_0->cv);
 FUNC_0(&VAR_0->intr_cv);

 FUNC_2(&VAR_0->cv);
 FUNC_2(&VAR_0->intr_cv);

 FUNC_3(VAR_0->lock);
}
