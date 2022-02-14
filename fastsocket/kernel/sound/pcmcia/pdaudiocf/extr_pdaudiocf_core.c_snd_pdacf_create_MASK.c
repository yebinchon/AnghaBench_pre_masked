
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {int tq; int ak4117_lock; int reg_lock; struct snd_card* card; } ;
struct snd_card {struct snd_pdacf* private_data; } ;


 int VAR_0 ;
 struct snd_pdacf* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_pdacf*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;

struct snd_pdacf *FUNC_4(struct snd_card *VAR_2)
{
 struct snd_pdacf *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3->card = VAR_2;
 FUNC_2(&VAR_3->reg_lock);
 FUNC_2(&VAR_3->ak4117_lock);
 FUNC_3(&VAR_3->tq, VAR_1, (unsigned long)VAR_3);
 VAR_2->private_data = VAR_3;

 FUNC_1(VAR_3);
 return VAR_3;
}
