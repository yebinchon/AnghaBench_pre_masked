
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {struct ofw_devdesc* f_devdata; } ;
struct ofw_devdesc {int d_handle; } ;


 int FUNC_0 (int ) ;
 struct ofw_devdesc* VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_1)
{
 struct ofw_devdesc *VAR_2 = VAR_1->f_devdata;

 if (VAR_2 == VAR_0) {

  FUNC_0(VAR_2->d_handle);

  VAR_0 = ((void*)0);
 }
 return (0);
}
