
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct nm_bridge {int dummy; } ;


 int FUNC_0 (struct nm_bridge*) ;
 struct nm_bridge* FUNC_1 (int) ;

struct nm_bridge *
FUNC_2(u_int VAR_0)
{
 int VAR_1;
 struct nm_bridge *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct nm_bridge) * VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++)
  FUNC_0(&VAR_2[VAR_1]);
 return VAR_2;
}
