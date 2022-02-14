
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct o2hb_region {struct config_item hr_item; int hr_all_item; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 struct o2hb_region* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct config_item *FUNC_6(struct config_group *VAR_5,
         const char *VAR_6)
{
 struct o2hb_region *VAR_7 = ((void*)0);

 VAR_7 = FUNC_2(sizeof(struct o2hb_region), VAR_1);
 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_7->hr_item, VAR_6, &VAR_4);

 FUNC_4(&VAR_3);
 FUNC_3(&VAR_7->hr_all_item, &VAR_2);
 FUNC_5(&VAR_3);

 return &VAR_7->hr_item;
}
