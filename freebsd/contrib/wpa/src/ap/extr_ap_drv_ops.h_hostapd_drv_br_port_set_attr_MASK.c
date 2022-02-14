
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int * drv_priv; TYPE_1__* driver; } ;
typedef enum drv_br_port_attr { ____Placeholder_drv_br_port_attr } drv_br_port_attr ;
struct TYPE_2__ {int (* br_port_set_attr ) (int *,int,unsigned int) ;} ;


 int FUNC_0 (int *,int,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0,
            enum drv_br_port_attr VAR_1,
            unsigned int VAR_2)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->drv_priv == ((void*)0) ||
     VAR_0->driver->br_port_set_attr == ((void*)0))
  return -1;
 return VAR_0->driver->br_port_set_attr(VAR_0->drv_priv, VAR_1, VAR_2);
}
