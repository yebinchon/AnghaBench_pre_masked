
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct g_part_bsd64_entry {scalar_t__ fstype; int type_uuid; } ;
struct bsd64_uuid_alias {scalar_t__ fstype; int alias; int * uuid; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct bsd64_uuid_alias* VAR_2 ;
 struct bsd64_uuid_alias* VAR_3 ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,scalar_t__) ;
 int FUNC_3 (char*,size_t,int *) ;

__attribute__((used)) static const char *
FUNC_4(struct g_part_table *VAR_4, struct g_part_entry *VAR_5,
    char *VAR_6, size_t VAR_7)
{
 struct g_part_bsd64_entry *VAR_8;
 struct bsd64_uuid_alias *VAR_9;

 VAR_8 = (struct g_part_bsd64_entry *)VAR_5;
 if (VAR_8->fstype != VAR_0) {
  for (VAR_9 = &VAR_2[0]; VAR_9->uuid != ((void*)0); VAR_9++)
   if (VAR_9->fstype == VAR_8->fstype)
    return (FUNC_1(VAR_9->alias));
 } else {
  for (VAR_9 = &VAR_3[0]; VAR_9->uuid != ((void*)0); VAR_9++)
   if (FUNC_0(VAR_9->uuid, &VAR_8->type_uuid))
    return (FUNC_1(VAR_9->alias));
  for (VAR_9 = &VAR_2[0]; VAR_9->uuid != ((void*)0); VAR_9++)
   if (FUNC_0(VAR_9->uuid, &VAR_8->type_uuid))
    return (FUNC_1(VAR_9->alias));
 }
 if (FUNC_0(&VAR_1, &VAR_8->type_uuid))
  FUNC_2(VAR_6, VAR_7, "!%d", VAR_8->fstype);
 else {
  VAR_6[0] = '!';
  FUNC_3(VAR_6 + 1, VAR_7 - 1, &VAR_8->type_uuid);
 }
 return (VAR_6);
}
