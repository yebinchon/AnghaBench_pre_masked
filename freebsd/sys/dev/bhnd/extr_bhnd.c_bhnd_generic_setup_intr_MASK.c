
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,struct resource*,int,int *,int *,void*,void**) ;

int
FUNC_1(device_t VAR_0, device_t VAR_1, struct resource *VAR_2,
    int VAR_3, driver_filter_t *VAR_4, driver_intr_t *VAR_5, void *VAR_6,
    void **VAR_7)
{
 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7));
}
