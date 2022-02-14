
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netent_data {scalar_t__ stayopen; int * netf; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct netent_data *VAR_0)
{

 if (VAR_0->netf) {
  FUNC_0(VAR_0->netf);
  VAR_0->netf = ((void*)0);
 }
 VAR_0->stayopen = 0;
}
