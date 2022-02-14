
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct open_file {TYPE_3__* f_dev; TYPE_2__* f_devdata; } ;
struct geli_devdesc {TYPE_2__* hdesc; } ;
struct TYPE_6__ {int (* dv_close ) (struct open_file*) ;} ;
struct TYPE_4__ {TYPE_3__* d_dev; } ;
struct TYPE_5__ {TYPE_1__ dd; } ;


 int FUNC_0 (struct geli_devdesc*) ;
 int FUNC_1 (struct open_file*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_0)
{
 struct geli_devdesc *VAR_1;







 VAR_1 = (struct geli_devdesc *)VAR_0->f_devdata;
 VAR_0->f_devdata = VAR_1->hdesc;
 VAR_0->f_dev = VAR_1->hdesc->dd.d_dev;
 FUNC_0(VAR_1);
 VAR_0->f_dev->dv_close(VAR_0);
 return (0);
}
