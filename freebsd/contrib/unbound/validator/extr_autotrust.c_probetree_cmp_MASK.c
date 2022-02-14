
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trust_anchor {TYPE_1__* autr; } ;
struct TYPE_2__ {scalar_t__ next_probe_time; } ;


 int FUNC_0 (void const*,void const*) ;
 int FUNC_1 (int) ;

int FUNC_2(const void* VAR_0, const void* VAR_1)
{
 struct trust_anchor* VAR_2 = (struct trust_anchor*)VAR_0;
 struct trust_anchor* VAR_3 = (struct trust_anchor*)VAR_1;
 FUNC_1(VAR_2->autr && VAR_3->autr);
 if(VAR_2->autr->next_probe_time < VAR_3->autr->next_probe_time)
  return -1;
 if(VAR_2->autr->next_probe_time > VAR_3->autr->next_probe_time)
  return 1;

 return FUNC_0(VAR_0, VAR_1);
}
