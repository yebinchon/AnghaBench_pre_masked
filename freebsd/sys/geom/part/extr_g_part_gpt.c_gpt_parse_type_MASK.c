
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid {int dummy; } ;
struct g_part_uuid_alias {struct uuid* uuid; int alias; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct uuid*,int *) ;
 char* FUNC_1 (int ) ;
 struct g_part_uuid_alias* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*,struct uuid*) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_3, struct uuid *VAR_4)
{
 struct uuid VAR_5;
 const char *VAR_6;
 int VAR_7;
 struct g_part_uuid_alias *VAR_8;

 if (VAR_3[0] == '!') {
  VAR_7 = FUNC_2(VAR_3 + 1, &VAR_5);
  if (VAR_7)
   return (VAR_7);
  if (FUNC_0(&VAR_5, &VAR_2))
   return (VAR_0);
  *VAR_4 = VAR_5;
  return (0);
 }
 for (VAR_8 = &VAR_1[0]; VAR_8->uuid; VAR_8++) {
  VAR_6 = FUNC_1(VAR_8->alias);
  if (!FUNC_3(VAR_3, VAR_6)) {
   *VAR_4 = *VAR_8->uuid;
   return (0);
  }
 }
 return (VAR_0);
}
