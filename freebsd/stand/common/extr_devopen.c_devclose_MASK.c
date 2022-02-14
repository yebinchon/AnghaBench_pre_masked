
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {int * f_devdata; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct open_file *VAR_0)
{

 if (VAR_0->f_devdata != ((void*)0)) {
  FUNC_0(VAR_0->f_devdata);
 }
 return (0);
}
