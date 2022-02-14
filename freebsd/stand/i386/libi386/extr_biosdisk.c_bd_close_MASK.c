
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct open_file {scalar_t__ f_devdata; } ;
struct TYPE_7__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {TYPE_4__ dd; } ;
struct TYPE_6__ {scalar_t__ bd_open; int * bd_bcache; } ;
typedef TYPE_2__ bdinfo_t ;
struct TYPE_5__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct disk_devdesc*) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_2)
{
 struct disk_devdesc *VAR_3;
 bdinfo_t *VAR_4;
 int VAR_5 = 0;

 VAR_3 = (struct disk_devdesc *)VAR_2->f_devdata;
 VAR_4 = FUNC_1(&VAR_3->dd);
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 VAR_4->bd_open--;
 if (VAR_4->bd_open == 0) {
     FUNC_0(VAR_4->bd_bcache);
     VAR_4->bd_bcache = ((void*)0);
 }
 if (VAR_3->dd.d_dev->dv_type == VAR_0)
  VAR_5 = FUNC_2(VAR_3);
 return (VAR_5);
}
