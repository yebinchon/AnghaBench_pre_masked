
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone_entry {struct snd_clone* parent; } ;
struct snd_clone {scalar_t__ refcount; } ;
struct cdev {struct snd_clone_entry* si_drv2; } ;


 int FUNC_0 (int,char*) ;

int
FUNC_1(struct cdev *VAR_0)
{
 struct snd_clone_entry *VAR_1;
 struct snd_clone *VAR_2;

 FUNC_0(VAR_0 != ((void*)0), ("NULL dev"));

 VAR_1 = VAR_0->si_drv2;
 if (VAR_1 == ((void*)0))
  return (0);

 VAR_2 = VAR_1->parent;
 FUNC_0(VAR_2 != ((void*)0), ("NULL parent"));
 FUNC_0(VAR_2->refcount >= 0, ("refcount < 0"));

 return (++VAR_2->refcount);
}
