
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct nm_bridge {int dummy; } ;


 int FUNC_0 (struct nm_bridge*) ;
 int FUNC_1 (struct nm_bridge*) ;

void
FUNC_2(struct nm_bridge *VAR_0, u_int VAR_1)
{
 int VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(&VAR_0[VAR_2]);
 FUNC_1(VAR_0);
}
