
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_pa {scalar_t__ pa_size; } ;


 struct dump_pa* VAR_0 ;

struct dump_pa *
FUNC_0(struct dump_pa *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (&VAR_0[0]);

 VAR_1++;
 if (VAR_1->pa_size == 0)
  VAR_1 = ((void*)0);
 return (VAR_1);
}
