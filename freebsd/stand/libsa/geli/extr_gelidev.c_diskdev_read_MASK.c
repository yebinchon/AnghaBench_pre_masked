
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {TYPE_2__ dd; } ;
typedef int off_t ;
struct TYPE_3__ {int (* dv_strategy ) (struct disk_devdesc*,int ,int,size_t,void*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct disk_devdesc*,int ,int,size_t,void*,int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3, off_t VAR_4,
    void *VAR_5, size_t VAR_6)
{
 struct disk_devdesc *VAR_7;

 VAR_7 = (struct disk_devdesc *)VAR_3;

 return (VAR_7->dd.d_dev->dv_strategy(VAR_7, VAR_1, VAR_4 / VAR_0,
     VAR_6, VAR_5, ((void*)0)));
}
