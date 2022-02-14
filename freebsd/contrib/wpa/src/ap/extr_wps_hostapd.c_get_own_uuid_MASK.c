
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_iface {TYPE_1__* interfaces; } ;
struct TYPE_2__ {int (* for_each_interface ) (TYPE_1__*,int ,int const**) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int const**) ;

__attribute__((used)) static const u8 * FUNC_1(struct hostapd_iface *VAR_1)
{
 const u8 *VAR_2;
 if (VAR_1->interfaces == ((void*)0) ||
     VAR_1->interfaces->for_each_interface == ((void*)0))
  return ((void*)0);
 VAR_2 = ((void*)0);
 VAR_1->interfaces->for_each_interface(VAR_1->interfaces, VAR_0,
           &VAR_2);
 return VAR_2;
}
