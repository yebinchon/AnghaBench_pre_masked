
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_raid_disk {TYPE_2__* d_consumer; } ;
struct TYPE_4__ {TYPE_1__* provider; } ;
struct TYPE_3__ {char const* name; } ;



const char *
FUNC_0(struct g_raid_disk *VAR_0)
{

 if (VAR_0->d_consumer == ((void*)0) || VAR_0->d_consumer->provider == ((void*)0))
  return ("[unknown]");
 return (VAR_0->d_consumer->provider->name);
}
