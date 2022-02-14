
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {scalar_t__ f_devdata; } ;
struct disk_devdesc {int dummy; } ;


 int FUNC_0 (struct disk_devdesc*) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_0)
{
 struct disk_devdesc *VAR_1;

 VAR_1 = (struct disk_devdesc *)VAR_0->f_devdata;
 return (FUNC_0(VAR_1));
}
