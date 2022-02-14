
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone {int maxunit; } ;


 int FUNC_0 (int ,char*) ;

int
FUNC_1(struct snd_clone *VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0), ("NULL snd_clone"));

 return (VAR_0->maxunit);
}
