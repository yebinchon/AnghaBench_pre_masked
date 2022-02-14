
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {TYPE_1__* m; } ;
struct TYPE_2__ {char const* name; } ;



const char * FUNC_0(struct eap_sm *VAR_0)
{
 if (!VAR_0 || !VAR_0->m)
  return ((void*)0);
 return VAR_0->m->name;
}
