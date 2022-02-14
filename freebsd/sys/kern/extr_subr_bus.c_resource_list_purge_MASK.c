
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {scalar_t__ res; int rid; int type; } ;
struct resource_list {int dummy; } ;


 int VAR_0 ;
 struct resource_list_entry* FUNC_0 (struct resource_list*) ;
 int FUNC_1 (struct resource_list*,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (struct resource_list_entry*,int ) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(struct resource_list *VAR_2)
{
 struct resource_list_entry *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) {
  if (VAR_3->res)
   FUNC_2(FUNC_4(VAR_3->res),
       VAR_3->type, VAR_3->rid, VAR_3->res);
  FUNC_1(VAR_2, VAR_1);
  FUNC_3(VAR_3, VAR_0);
 }
}
