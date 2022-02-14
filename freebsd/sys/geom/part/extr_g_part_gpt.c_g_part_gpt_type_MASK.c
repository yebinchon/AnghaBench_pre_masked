
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uuid {int dummy; } ;
struct g_part_uuid_alias {int alias; scalar_t__ uuid; } ;
struct g_part_table {int dummy; } ;
struct TYPE_2__ {struct uuid ent_type; } ;
struct g_part_gpt_entry {TYPE_1__ ent; } ;
struct g_part_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct uuid*,scalar_t__) ;
 char const* FUNC_1 (int ) ;
 struct g_part_uuid_alias* VAR_0 ;
 int FUNC_2 (char*,size_t,struct uuid*) ;

__attribute__((used)) static const char *
FUNC_3(struct g_part_table *VAR_1, struct g_part_entry *VAR_2,
    char *VAR_3, size_t VAR_4)
{
 struct g_part_gpt_entry *VAR_5;
 struct uuid *VAR_6;
 struct g_part_uuid_alias *VAR_7;

 VAR_5 = (struct g_part_gpt_entry *)VAR_2;
 VAR_6 = &VAR_5->ent.ent_type;
 for (VAR_7 = &VAR_0[0]; VAR_7->uuid; VAR_7++)
  if (FUNC_0(VAR_6, VAR_7->uuid))
   return (FUNC_1(VAR_7->alias));
 VAR_3[0] = '!';
 FUNC_2(VAR_3 + 1, VAR_4 - 1, VAR_6);

 return (VAR_3);
}
