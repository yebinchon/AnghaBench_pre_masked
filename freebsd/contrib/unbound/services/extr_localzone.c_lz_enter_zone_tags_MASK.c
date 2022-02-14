
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int dummy; } ;
struct config_strbytelist {int str2len; int str2; int str; struct config_strbytelist* next; } ;
struct config_file {struct config_strbytelist* local_zone_tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct local_zones*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct local_zones* VAR_2, struct config_file* VAR_3)
{
 struct config_strbytelist* VAR_4;
 int VAR_5 = 0;
 for(VAR_4 = VAR_3->local_zone_tags; VAR_4; VAR_4 = VAR_4->next) {
  if(!FUNC_0(VAR_2, VAR_4->str, VAR_4->str2, VAR_4->str2len,
   VAR_0))
   return 0;
  VAR_5++;
 }
 if(VAR_5) FUNC_1(VAR_1, "applied tags to %d local zones", VAR_5);
 return 1;
}
