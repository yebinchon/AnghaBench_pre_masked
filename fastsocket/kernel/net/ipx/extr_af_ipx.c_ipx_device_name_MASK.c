
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipx_interface {TYPE_1__* if_dev; scalar_t__ if_internal; } ;
struct TYPE_2__ {char const* name; } ;



const char *FUNC_0(struct ipx_interface *VAR_0)
{
 return VAR_0->if_internal ? "Internal" :
  VAR_0->if_dev ? VAR_0->if_dev->name : "Unknown";
}
