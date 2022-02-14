
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone_entry {int flags; scalar_t__ unit; struct cdev* devt; int * parent; } ;
struct cdev {struct snd_clone_entry* si_drv2; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct cdev*) ;

void
FUNC_2(struct snd_clone_entry *VAR_2, struct cdev *VAR_3)
{
 FUNC_0(VAR_2 != ((void*)0), ("NULL snd_clone_entry"));
 FUNC_0(VAR_3 != ((void*)0), ("NULL dev"));
 FUNC_0(VAR_3->si_drv2 == ((void*)0), ("dev->si_drv2 not NULL"));
 FUNC_0((VAR_2->flags & VAR_0) == VAR_0,
     ("invalid clone alloc flags=0x%08x", VAR_2->flags));
 FUNC_0(VAR_2->devt == ((void*)0), ("ce->devt not NULL"));
 FUNC_0(VAR_2->unit == FUNC_1(VAR_3),
     ("invalid unit ce->unit=0x%08x dev2unit=0x%08x",
     VAR_2->unit, FUNC_1(VAR_3)));

 FUNC_0(VAR_2->parent != ((void*)0), ("NULL parent"));

 VAR_3->si_drv2 = VAR_2;
 VAR_2->devt = VAR_3;
 VAR_2->flags &= ~VAR_0;
 VAR_2->flags |= VAR_1;
}
