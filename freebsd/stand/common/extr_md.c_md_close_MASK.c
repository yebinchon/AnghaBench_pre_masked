
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {scalar_t__ f_devdata; } ;
struct devdesc {scalar_t__ d_unit; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct open_file *VAR_1)
{
 struct devdesc *VAR_2;

 VAR_2 = (struct devdesc *)(VAR_1->f_devdata);
 return ((VAR_2->d_unit != 0) ? VAR_0 : 0);
}
