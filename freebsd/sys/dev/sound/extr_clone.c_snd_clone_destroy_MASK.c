
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone_entry {int * devt; int head; } ;
struct snd_clone {int * devt; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct snd_clone_entry* FUNC_1 (int *) ;
 struct snd_clone_entry* FUNC_2 (struct snd_clone_entry*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_clone_entry*,int ) ;
 int VAR_1 ;

void
FUNC_5(struct snd_clone *VAR_2)
{
 struct snd_clone_entry *VAR_3, *VAR_4;

 FUNC_0(VAR_2 != ((void*)0), ("NULL snd_clone"));

 VAR_3 = FUNC_1(&VAR_2->head);
 while (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_2(VAR_3, VAR_1);
  if (VAR_3->devt != ((void*)0))
   FUNC_3(VAR_3->devt);
  FUNC_4(VAR_3, VAR_0);
  VAR_3 = VAR_4;
 }

 FUNC_4(VAR_2, VAR_0);
}
