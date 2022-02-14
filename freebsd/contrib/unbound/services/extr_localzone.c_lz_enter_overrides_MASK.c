
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int dummy; } ;
struct config_str3list {int str3; int str2; int str; struct config_str3list* next; } ;
struct config_file {struct config_str3list* local_zone_overrides; } ;


 int VAR_0 ;
 int FUNC_0 (struct local_zones*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct local_zones* VAR_1, struct config_file* VAR_2)
{
 struct config_str3list* VAR_3;
 for(VAR_3 = VAR_2->local_zone_overrides; VAR_3; VAR_3 = VAR_3->next) {
  if(!FUNC_0(VAR_1, VAR_3->str, VAR_3->str2, VAR_3->str3,
   VAR_0))
   return 0;
 }
 return 1;
}
