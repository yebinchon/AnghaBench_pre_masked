
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* get_seqnum ) (char const*,int ,int const*,int,int *) ;} ;


 int FUNC_0 (char const*,int ,int const*,int,int *) ;

int FUNC_1(const char *VAR_0, struct hostapd_data *VAR_1,
         const u8 *VAR_2, int VAR_3, u8 *VAR_4)
{
 if (VAR_1->driver == ((void*)0) || VAR_1->driver->get_seqnum == ((void*)0))
  return 0;
 return VAR_1->driver->get_seqnum(VAR_0, VAR_1->drv_priv, VAR_2, VAR_3,
     VAR_4);
}
