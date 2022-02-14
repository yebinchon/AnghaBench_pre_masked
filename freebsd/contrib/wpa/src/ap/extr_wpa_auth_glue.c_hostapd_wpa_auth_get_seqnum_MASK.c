
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int iface; } ;


 int FUNC_0 (int ,struct hostapd_data*,int const*,int,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const u8 *VAR_1, int VAR_2,
           u8 *VAR_3)
{
 struct hostapd_data *VAR_4 = VAR_0;
 return FUNC_0(VAR_4->conf->iface, VAR_4, VAR_1, VAR_2, VAR_3);
}
