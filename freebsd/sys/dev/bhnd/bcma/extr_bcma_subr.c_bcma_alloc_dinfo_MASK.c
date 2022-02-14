
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_devinfo {int rid_agent; int resources; scalar_t__ num_intrs; int intrs; int * res_agent; int * corecfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct bcma_devinfo* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;

struct bcma_devinfo *
FUNC_3(device_t VAR_3)
{
 struct bcma_devinfo *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct bcma_devinfo), VAR_0, VAR_1|VAR_2);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_4->corecfg = ((void*)0);
 VAR_4->res_agent = ((void*)0);
 VAR_4->rid_agent = -1;

 FUNC_0(&VAR_4->intrs);
 VAR_4->num_intrs = 0;

 FUNC_2(&VAR_4->resources);

 return (VAR_4);
}
