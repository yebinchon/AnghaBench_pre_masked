
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc_class_hash {unsigned int hashsize; unsigned int hashmask; scalar_t__ hashelems; int * hash; } ;


 int VAR_0 ;
 int * FUNC_0 (unsigned int) ;

int FUNC_1(struct Qdisc_class_hash *VAR_1)
{
 unsigned int VAR_2 = 4;

 VAR_1->hash = FUNC_0(VAR_2);
 if (VAR_1->hash == ((void*)0))
  return -VAR_0;
 VAR_1->hashsize = VAR_2;
 VAR_1->hashmask = VAR_2 - 1;
 VAR_1->hashelems = 0;
 return 0;
}
