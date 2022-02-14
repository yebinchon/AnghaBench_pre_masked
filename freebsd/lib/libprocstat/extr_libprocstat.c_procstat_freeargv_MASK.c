
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int * argv; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct procstat *VAR_0)
{

 if (VAR_0->argv != ((void*)0)) {
  FUNC_0(VAR_0->argv);
  VAR_0->argv = ((void*)0);
 }
}
