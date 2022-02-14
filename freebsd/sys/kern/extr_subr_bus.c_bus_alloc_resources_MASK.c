
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_spec {int type; int flags; int rid; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int ,int,int *,int) ;
 int FUNC_1 (int ,struct resource_spec*,struct resource**) ;

int
FUNC_2(device_t VAR_2, struct resource_spec *VAR_3,
    struct resource **VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_3[VAR_5].type != -1; VAR_5++)
  VAR_4[VAR_5] = ((void*)0);
 for (VAR_5 = 0; VAR_3[VAR_5].type != -1; VAR_5++) {
  VAR_4[VAR_5] = FUNC_0(VAR_2,
      VAR_3[VAR_5].type, &VAR_3[VAR_5].rid, VAR_3[VAR_5].flags);
  if (VAR_4[VAR_5] == ((void*)0) && !(VAR_3[VAR_5].flags & VAR_1)) {
   FUNC_1(VAR_2, VAR_3, VAR_4);
   return (VAR_0);
  }
 }
 return (0);
}
