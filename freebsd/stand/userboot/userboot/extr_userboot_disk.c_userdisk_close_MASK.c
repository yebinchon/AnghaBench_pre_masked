
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct open_file {scalar_t__ f_devdata; } ;
struct TYPE_3__ {size_t d_unit; } ;
struct disk_devdesc {TYPE_1__ dd; } ;
struct TYPE_4__ {scalar_t__ ud_open; int * ud_bcache; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct disk_devdesc*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_1)
{
 struct disk_devdesc *VAR_2;

 VAR_2 = (struct disk_devdesc *)VAR_1->f_devdata;
 VAR_0[VAR_2->dd.d_unit].ud_open--;
 if (VAR_0[VAR_2->dd.d_unit].ud_open == 0) {
  FUNC_0(VAR_0[VAR_2->dd.d_unit].ud_bcache);
  VAR_0[VAR_2->dd.d_unit].ud_bcache = ((void*)0);
 }
 return (FUNC_1(VAR_2));
}
