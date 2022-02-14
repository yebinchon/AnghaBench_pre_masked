
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct open_file {scalar_t__ f_devdata; } ;
struct TYPE_2__ {int d_unit; } ;
struct disk_devdesc {TYPE_1__ dd; } ;


 int FUNC_0 (int ,int ,int ,void*) ;
 int VAR_0 ;
 int FUNC_1 (struct disk_devdesc*,int ,void*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_2, u_long VAR_3, void *VAR_4)
{
 struct disk_devdesc *VAR_5;
 int VAR_6;

 VAR_5 = (struct disk_devdesc *)VAR_2->f_devdata;
 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
 if (VAR_6 != VAR_0)
  return (VAR_6);

 return (FUNC_0(VAR_1, VAR_5->dd.d_unit, VAR_3, VAR_4));
}
