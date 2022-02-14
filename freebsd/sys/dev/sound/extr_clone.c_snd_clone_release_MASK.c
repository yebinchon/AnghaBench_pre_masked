
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone_entry {int flags; int pid; int * parent; } ;
struct cdev {struct snd_clone_entry* si_drv2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_1(struct cdev *VAR_4)
{
 struct snd_clone_entry *VAR_5;

 FUNC_0(VAR_4 != ((void*)0), ("NULL dev"));

 VAR_5 = VAR_4->si_drv2;
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 FUNC_0(VAR_5->parent != ((void*)0), ("NULL parent"));

 VAR_5->flags &= ~VAR_3;

 if (!(VAR_5->flags & VAR_2))
  return (VAR_0);

 VAR_5->flags &= ~VAR_2;
 VAR_5->pid = -1;

 return (0);
}
