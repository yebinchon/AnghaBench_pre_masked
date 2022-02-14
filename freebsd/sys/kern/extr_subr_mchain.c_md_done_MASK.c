
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdchain {int * md_top; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct mdchain *VAR_0)
{
 if (VAR_0->md_top) {
  FUNC_0(VAR_0->md_top);
  VAR_0->md_top = ((void*)0);
 }
}
