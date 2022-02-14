
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ai_family; } ;
struct mx_hostentry {int pref; TYPE_1__ ai; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct mx_hostentry *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 int VAR_4;


 VAR_4 = VAR_2->pref - VAR_3->pref;
 if (VAR_4 != 0)
  return (VAR_4);


 VAR_4 = - (VAR_2->ai.ai_family - VAR_3->ai.ai_family);
 return (VAR_4);
}
