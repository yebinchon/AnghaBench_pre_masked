
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_1__* wps; } ;
struct TYPE_2__ {int registrar; } ;


 int FUNC_0 (int ,int const*,char*,size_t) ;

int FUNC_1(struct hostapd_data *VAR_0, const u8 *VAR_1,
       char *VAR_2, size_t VAR_3)
{
 if (VAR_0->wps == ((void*)0))
  return 0;
 return FUNC_0(VAR_0->wps->registrar, VAR_1, VAR_2, VAR_3);
}
