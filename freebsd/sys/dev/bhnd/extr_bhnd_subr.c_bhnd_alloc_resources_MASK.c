
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct resource_spec {int type; int flags; int rid; } ;
struct bhnd_resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bhnd_resource* FUNC_0 (int ,int,int *,int) ;
 int FUNC_1 (int ,struct resource_spec*,struct bhnd_resource**) ;

int
FUNC_2(device_t VAR_2, struct resource_spec *VAR_3,
    struct bhnd_resource **VAR_4)
{

 for (u_int VAR_5 = 0; VAR_3[VAR_5].type != -1; VAR_5++)
  VAR_4[VAR_5] = ((void*)0);

 for (u_int VAR_6 = 0; VAR_3[VAR_6].type != -1; VAR_6++) {
  VAR_4[VAR_6] = FUNC_0(VAR_2, VAR_3[VAR_6].type, &VAR_3[VAR_6].rid,
      VAR_3[VAR_6].flags);


  if (VAR_4[VAR_6] == ((void*)0) && !(VAR_3[VAR_6].flags & VAR_1)) {
   FUNC_1(VAR_2, VAR_3, VAR_4);
   return (VAR_0);
  }
 }

 return (0);
}
