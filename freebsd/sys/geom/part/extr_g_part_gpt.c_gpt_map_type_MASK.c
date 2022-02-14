
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid {int dummy; } ;
struct g_part_uuid_alias {int mbrtype; scalar_t__ uuid; } ;


 scalar_t__ FUNC_0 (struct uuid*,scalar_t__) ;
 struct g_part_uuid_alias* VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct uuid *VAR_1)
{
 struct g_part_uuid_alias *VAR_2;

 for (VAR_2 = &VAR_0[0]; VAR_2->uuid; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_2->uuid))
   return (VAR_2->mbrtype);
 }
 return (0);
}
