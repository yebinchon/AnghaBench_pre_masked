
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int flags; int res; } ;
struct resource_list {int dummy; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 struct resource_list_entry* FUNC_2 (struct resource_list*,int,int) ;
 int FUNC_3 (struct resource_list*,scalar_t__,scalar_t__,int,int,int ) ;

int
FUNC_4(struct resource_list *VAR_4, device_t VAR_5, device_t VAR_6,
    int VAR_7, int VAR_8)
{
 struct resource_list_entry *VAR_9 = ((void*)0);
 int VAR_10 = (FUNC_0(VAR_6) != VAR_5);

 if (VAR_10)
  FUNC_1(
    "resource_list_unreserve() should only be called for direct children");

 VAR_9 = FUNC_2(VAR_4, VAR_7, VAR_8);

 if (!VAR_9)
  FUNC_1("resource_list_unreserve: can't find resource");
 if (!(VAR_9->flags & VAR_3))
  return (VAR_1);
 if (VAR_9->flags & VAR_2)
  return (VAR_0);
 VAR_9->flags &= ~VAR_3;
 return (FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9->res));
}
