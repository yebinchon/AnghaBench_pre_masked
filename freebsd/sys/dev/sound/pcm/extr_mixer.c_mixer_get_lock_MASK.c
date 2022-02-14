
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {struct mtx* lock; } ;
struct mtx {int dummy; } ;


 struct mtx VAR_0 ;

struct mtx *
FUNC_0(struct snd_mixer *VAR_1)
{
 if (VAR_1->lock == ((void*)0)) {
  return (&VAR_0);
 }
 return (VAR_1->lock);
}
