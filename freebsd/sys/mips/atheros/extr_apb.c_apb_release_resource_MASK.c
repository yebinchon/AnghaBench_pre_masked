
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int * res; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 struct resource_list* FUNC_0 (int ,int ) ;
 struct resource_list_entry* FUNC_1 (struct resource_list*,int,int) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct resource *VAR_5)
{
 struct resource_list *VAR_6;
 struct resource_list_entry *VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 FUNC_2(VAR_5);
 VAR_7->res = ((void*)0);

 return (0);
}
