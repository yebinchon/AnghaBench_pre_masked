
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone {int deadline; } ;


 int FUNC_0 (int ,char*) ;

int
FUNC_1(struct snd_clone *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0), ("NULL snd_clone"));

 VAR_0->deadline = VAR_1;

 return (VAR_0->deadline);
}
