
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct snd_clone {struct timespec tsp; } ;


 int FUNC_0 (int ,char*) ;

int
FUNC_1(struct snd_clone *VAR_0, struct timespec *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0), ("NULL snd_clone"));
 FUNC_0(VAR_1 != ((void*)0), ("NULL timespec"));

 *VAR_1 = VAR_0->tsp;

 return (0);
}
