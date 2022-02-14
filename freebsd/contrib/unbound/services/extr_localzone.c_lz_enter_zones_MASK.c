
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int dummy; } ;
struct local_zone {int lock; } ;
struct config_str2list {int str2; int str; struct config_str2list* next; } ;
struct config_file {struct config_str2list* local_zones; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct local_zone* FUNC_1 (struct local_zones*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct local_zones* VAR_1, struct config_file* VAR_2)
{
 struct config_str2list* VAR_3;
 struct local_zone* VAR_4;
 for(VAR_3 = VAR_2->local_zones; VAR_3; VAR_3 = VAR_3->next) {
  if(!(VAR_4=FUNC_1(VAR_1, VAR_3->str, VAR_3->str2,
   VAR_0)))
   return 0;
  FUNC_0(&VAR_4->lock);
 }
 return 1;
}
