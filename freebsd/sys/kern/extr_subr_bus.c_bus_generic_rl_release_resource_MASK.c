
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct resource_list*,int ,int ,int,int,struct resource*) ;

int
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct resource *VAR_5)
{
 struct resource_list * VAR_6 = ((void*)0);

 if (FUNC_2(VAR_2) != VAR_1)
  return (FUNC_1(FUNC_2(VAR_1), VAR_2,
      VAR_3, VAR_4, VAR_5));

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_6)
  return (VAR_0);

 return (FUNC_3(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
