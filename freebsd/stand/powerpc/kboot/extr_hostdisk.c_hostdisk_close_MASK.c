
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {struct devdesc* f_devdata; } ;
struct devdesc {int d_unit; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_0)
{
 struct devdesc *VAR_1 = VAR_0->f_devdata;

 FUNC_0(VAR_1->d_unit);
 return (0);
}
