
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

int
FUNC_1(struct snd_clone *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0), ("NULL snd_clone"));

 if (VAR_2->flags & VAR_1)
  return (VAR_0);

 VAR_2->flags |= VAR_1;

 return (0);
}
