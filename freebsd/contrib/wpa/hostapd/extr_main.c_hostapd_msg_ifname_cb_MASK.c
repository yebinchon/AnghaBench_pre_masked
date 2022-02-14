
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {char const* iface; } ;



__attribute__((used)) static const char * FUNC_0(void *VAR_0)
{
 struct hostapd_data *VAR_1 = VAR_0;
 if (VAR_1 && VAR_1->conf)
  return VAR_1->conf->iface;
 return ((void*)0);
}
