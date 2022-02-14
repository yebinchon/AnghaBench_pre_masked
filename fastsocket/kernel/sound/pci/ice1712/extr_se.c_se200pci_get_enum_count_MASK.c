
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** member; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
 const char **VAR_2;
 int VAR_3;

 VAR_2 = VAR_0[VAR_1].member;
 if (!VAR_2)
  return 0;
 for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3++)
  ;
 return VAR_3;
}
