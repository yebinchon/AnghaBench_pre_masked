
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {scalar_t__ use; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t,char*) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_1[VAR_3].use != VAR_0)
   FUNC_0(VAR_3, "forced");
}
