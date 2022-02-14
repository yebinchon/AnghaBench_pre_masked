
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef int * driver_intr_t ;
typedef int driver_filter_t ;
typedef TYPE_1__* device_t ;
struct TYPE_5__ {int * parent; } ;


 int FUNC_0 (int *,TYPE_1__*,struct resource*,int,int ,int *,void*,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;

int
FUNC_2(device_t VAR_2, struct resource *VAR_3, int VAR_4,
    driver_filter_t VAR_5, driver_intr_t VAR_6, void *VAR_7, void **VAR_8)
{
 int VAR_9;

 if (VAR_2->parent == ((void*)0))
  return (VAR_0);
 VAR_9 = FUNC_0(VAR_2->parent, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);
 if (VAR_6 != ((void*)0) && !(VAR_4 & VAR_1))
  FUNC_1(VAR_2, "[GIANT-LOCKED]\n");
 return (0);
}
