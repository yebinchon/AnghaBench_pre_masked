
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone_entry {struct snd_clone* parent; } ;
struct snd_clone {scalar_t__ refcount; int flags; } ;
struct cdev {struct snd_clone_entry* si_drv2; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_clone*) ;

int
FUNC_2(struct cdev *VAR_2)
{
 struct snd_clone_entry *VAR_3;
 struct snd_clone *VAR_4;

 FUNC_0(VAR_2 != ((void*)0), ("NULL dev"));

 VAR_3 = VAR_2->si_drv2;
 if (VAR_3 == ((void*)0))
  return (0);

 VAR_4 = VAR_3->parent;
 FUNC_0(VAR_4 != ((void*)0), ("NULL parent"));
 FUNC_0(VAR_4->refcount > 0, ("refcount <= 0"));

 VAR_4->refcount--;




 if ((VAR_4->flags & VAR_1) &&
     (!(VAR_4->flags & VAR_0) ||
     (VAR_4->refcount == 0 && (VAR_4->flags & VAR_0))))
  (void)FUNC_1(VAR_4);

 return (VAR_4->refcount);
}
