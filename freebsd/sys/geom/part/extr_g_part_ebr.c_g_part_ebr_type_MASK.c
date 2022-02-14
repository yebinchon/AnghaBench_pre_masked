
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ dp_typ; } ;
struct g_part_ebr_entry {TYPE_1__ ent; } ;
struct TYPE_5__ {scalar_t__ typ; int alias; } ;


 TYPE_2__* VAR_0 ;
 char const* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,size_t,char*,int) ;

__attribute__((used)) static const char *
FUNC_3(struct g_part_table *VAR_1, struct g_part_entry *VAR_2,
    char *VAR_3, size_t VAR_4)
{
 struct g_part_ebr_entry *VAR_5;
 int VAR_6;

 VAR_5 = (struct g_part_ebr_entry *)VAR_2;
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_0); VAR_6++) {
  if (VAR_0[VAR_6].typ == VAR_5->ent.dp_typ)
   return (FUNC_0(VAR_0[VAR_6].alias));
 }
 FUNC_2(VAR_3, VAR_4, "!%d", VAR_5->ent.dp_typ);
 return (VAR_3);
}
