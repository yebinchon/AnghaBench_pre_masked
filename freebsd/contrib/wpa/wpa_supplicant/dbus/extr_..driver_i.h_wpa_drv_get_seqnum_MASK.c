
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_priv; int ifname; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* get_seqnum ) (int ,int ,int const*,int,int *) ;} ;


 int FUNC_0 (int ,int ,int const*,int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
         const u8 *VAR_1, int VAR_2, u8 *VAR_3)
{
 if (VAR_0->driver->get_seqnum)
  return VAR_0->driver->get_seqnum(VAR_0->ifname, VAR_0->drv_priv,
       VAR_1, VAR_2, VAR_3);
 return -1;
}
