
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct o2nm_node {struct config_item nd_item; int nd_lock; int nd_name; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 struct o2nm_node* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static struct config_item *FUNC_6(struct config_group *VAR_5,
           const char *VAR_6)
{
 struct o2nm_node *VAR_7 = ((void*)0);

 if (FUNC_5(VAR_6) > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(sizeof(struct o2nm_node), VAR_2);
 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_1);

 FUNC_4(VAR_7->nd_name, VAR_6);
 FUNC_1(&VAR_7->nd_item, VAR_6, &VAR_4);
 FUNC_3(&VAR_7->nd_lock);

 return &VAR_7->nd_item;
}
