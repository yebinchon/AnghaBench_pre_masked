
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int * drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* br_delete_ip_neigh ) (int *,int ,int const*) ;} ;


 int FUNC_0 (int *,int ,int const*) ;

__attribute__((used)) static inline int FUNC_1(struct hostapd_data *VAR_0,
       u8 VAR_1, const u8 *VAR_2)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->drv_priv == ((void*)0) ||
     VAR_0->driver->br_delete_ip_neigh == ((void*)0))
  return -1;
 return VAR_0->driver->br_delete_ip_neigh(VAR_0->drv_priv, VAR_1,
      VAR_2);
}
