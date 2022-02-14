
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct resource_spec {int type; int rid; } ;
struct bhnd_resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int ,struct bhnd_resource*) ;

void
FUNC_1(device_t VAR_0, const struct resource_spec *VAR_1,
    struct bhnd_resource **VAR_2)
{
 for (u_int VAR_3 = 0; VAR_1[VAR_3].type != -1; VAR_3++) {
  if (VAR_2[VAR_3] == ((void*)0))
   continue;

  FUNC_0(VAR_0, VAR_1[VAR_3].type, VAR_1[VAR_3].rid, VAR_2[VAR_3]);
  VAR_2[VAR_3] = ((void*)0);
 }
}
