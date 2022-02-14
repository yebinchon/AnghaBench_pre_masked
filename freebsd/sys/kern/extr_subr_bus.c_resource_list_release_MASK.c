
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int flags; int * res; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int,int,struct resource*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 struct resource_list_entry* FUNC_4 (struct resource_list*,int,int) ;
 int FUNC_5 (struct resource*) ;

int
FUNC_6(struct resource_list *VAR_4, device_t VAR_5, device_t VAR_6,
    int VAR_7, int VAR_8, struct resource *VAR_9)
{
 struct resource_list_entry *VAR_10 = ((void*)0);
 int VAR_11 = (FUNC_2(VAR_6) != VAR_5);
 int VAR_12;

 if (VAR_11) {
  return (FUNC_0(FUNC_2(VAR_5), VAR_6,
      VAR_7, VAR_8, VAR_9));
 }

 VAR_10 = FUNC_4(VAR_4, VAR_7, VAR_8);

 if (!VAR_10)
  FUNC_3("resource_list_release: can't find resource");
 if (!VAR_10->res)
  FUNC_3("resource_list_release: resource entry is not busy");
 if (VAR_10->flags & VAR_3) {
  if (VAR_10->flags & VAR_2) {
   if (FUNC_5(VAR_9) & VAR_1) {
    VAR_12 = FUNC_1(VAR_6, VAR_7,
        VAR_8, VAR_9);
    if (VAR_12)
     return (VAR_12);
   }
   VAR_10->flags &= ~VAR_2;
   return (0);
  }
  return (VAR_0);
 }

 VAR_12 = FUNC_0(FUNC_2(VAR_5), VAR_6,
     VAR_7, VAR_8, VAR_9);
 if (VAR_12)
  return (VAR_12);

 VAR_10->res = ((void*)0);
 return (0);
}
