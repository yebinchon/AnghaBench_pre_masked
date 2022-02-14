
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_clone_entry {int flags; int * parent; } ;
struct cdev {struct snd_clone_entry* si_drv2; } ;


 int FUNC_0 (int ,char*) ;

uint32_t
FUNC_1(struct cdev *VAR_0)
{
 struct snd_clone_entry *VAR_1;

 FUNC_0(VAR_0 != ((void*)0), ("NULL dev"));

 VAR_1 = VAR_0->si_drv2;
 if (VAR_1 == ((void*)0))
  return (0xffffffff);

 FUNC_0(VAR_1->parent != ((void*)0), ("NULL parent"));

 return (VAR_1->flags);
}
