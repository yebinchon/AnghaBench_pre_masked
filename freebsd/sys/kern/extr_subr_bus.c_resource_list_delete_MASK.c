
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int * res; } ;
struct resource_list {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct resource_list*,struct resource_list_entry*,int ,int ) ;
 int FUNC_1 (struct resource_list_entry*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 struct resource_list_entry* FUNC_3 (struct resource_list*,int,int) ;

void
FUNC_4(struct resource_list *VAR_3, int VAR_4, int VAR_5)
{
 struct resource_list_entry *VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);

 if (VAR_6) {
  if (VAR_6->res != ((void*)0))
   FUNC_2("resource_list_delete: resource has not been released");
  FUNC_0(VAR_3, VAR_6, VAR_2, VAR_1);
  FUNC_1(VAR_6, VAR_0);
 }
}
