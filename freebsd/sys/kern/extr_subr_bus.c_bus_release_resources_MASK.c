
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_spec {int type; int rid; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int ,struct resource*) ;

void
FUNC_1(device_t VAR_0, const struct resource_spec *VAR_1,
    struct resource **VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].type != -1; VAR_3++)
  if (VAR_2[VAR_3] != ((void*)0)) {
   FUNC_0(
       VAR_0, VAR_1[VAR_3].type, VAR_1[VAR_3].rid, VAR_2[VAR_3]);
   VAR_2[VAR_3] = ((void*)0);
  }
}
