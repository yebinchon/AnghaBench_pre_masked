
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tmo; } ;
struct TYPE_6__ {TYPE_1__ isp_osinfo; } ;
typedef TYPE_2__ ispsoftc_t ;


 int FUNC_0 (int *,int ,void (*) (void*),TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(void *VAR_1)
{
 ispsoftc_t *VAR_2 = VAR_1;



 FUNC_0(&VAR_2->isp_osinfo.tmo, VAR_0, FUNC_2, VAR_2);
}
