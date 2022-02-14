
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * next; scalar_t__ base; scalar_t__ limit; } ;
typedef TYPE_1__ tokenrun ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;

void
FUNC_1 (tokenrun *VAR_1, unsigned int VAR_2)
{
  VAR_1->base = FUNC_0 (VAR_0, VAR_2);
  VAR_1->limit = VAR_1->base + VAR_2;
  VAR_1->next = ((void*)0);
}
