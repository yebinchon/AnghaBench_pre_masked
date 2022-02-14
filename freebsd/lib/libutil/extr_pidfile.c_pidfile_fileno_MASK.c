
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int pf_fd; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(const struct pidfh *VAR_2)
{

 if (VAR_2 == ((void*)0) || VAR_2->pf_fd == -1) {
  VAR_1 = VAR_0;
  return (-1);
 }
 return (VAR_2->pf_fd);
}
