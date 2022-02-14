
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_clone_entry {int flags; int * parent; } ;
struct cdev {struct snd_clone_entry* si_drv2; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

uint32_t
FUNC_1(struct cdev *VAR_1, uint32_t VAR_2)
{
 struct snd_clone_entry *VAR_3;

 FUNC_0(VAR_1 != ((void*)0), ("NULL dev"));
 FUNC_0(!(VAR_2 & ~VAR_0),
     ("invalid clone dev flags=0x%08x", VAR_2));

 VAR_3 = VAR_1->si_drv2;
 if (VAR_3 == ((void*)0))
  return (0xffffffff);

 FUNC_0(VAR_3->parent != ((void*)0), ("NULL parent"));

 VAR_3->flags = VAR_2;

 return (VAR_3->flags);
}
