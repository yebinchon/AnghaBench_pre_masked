
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_array {int * list; scalar_t__ alloced; scalar_t__ used; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct snd_array *VAR_0)
{
 FUNC_0(VAR_0->list);
 VAR_0->used = 0;
 VAR_0->alloced = 0;
 VAR_0->list = ((void*)0);
}
