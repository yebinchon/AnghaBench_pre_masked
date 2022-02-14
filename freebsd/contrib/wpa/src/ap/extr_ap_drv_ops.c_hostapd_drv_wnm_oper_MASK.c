
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
typedef enum wnm_oper { ____Placeholder_wnm_oper } wnm_oper ;
struct TYPE_2__ {int (* wnm_oper ) (int ,int,int const*,int *,int *) ;} ;


 int FUNC_0 (int ,int,int const*,int *,int *) ;

int FUNC_1(struct hostapd_data *VAR_0, enum wnm_oper VAR_1,
    const u8 *VAR_2, u8 *VAR_3, u16 *VAR_4)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->wnm_oper == ((void*)0))
  return -1;
 return VAR_0->driver->wnm_oper(VAR_0->drv_priv, VAR_1, VAR_2, VAR_3,
          VAR_4);
}
