
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int indep_surround; } ;


 int FUNC_0 (struct snd_ac97*) ;

__attribute__((used)) static inline int FUNC_1(struct snd_ac97 *VAR_0)
{
 return !VAR_0->indep_surround && !FUNC_0(VAR_0);
}
