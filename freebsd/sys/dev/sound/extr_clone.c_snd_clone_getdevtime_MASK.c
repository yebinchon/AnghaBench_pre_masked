
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct snd_clone_entry {struct timespec tsp; int * parent; } ;
struct cdev {struct snd_clone_entry* si_drv2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

int
FUNC_1(struct cdev *VAR_1, struct timespec *VAR_2)
{
 struct snd_clone_entry *VAR_3;

 FUNC_0(VAR_1 != ((void*)0), ("NULL dev"));
 FUNC_0(VAR_2 != ((void*)0), ("NULL timespec"));

 VAR_3 = VAR_1->si_drv2;
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_3->parent != ((void*)0), ("NULL parent"));

 *VAR_2 = VAR_3->tsp;

 return (0);
}
