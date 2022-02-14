
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int flags; } ;
struct resource_list {int dummy; } ;


 int VAR_0 ;
 struct resource_list_entry* FUNC_0 (struct resource_list*,int,int) ;

int
FUNC_1(struct resource_list *VAR_1, int VAR_2, int VAR_3)
{
 struct resource_list_entry *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 != ((void*)0) && VAR_4->flags & VAR_0)
  return (1);
 return (0);
}
