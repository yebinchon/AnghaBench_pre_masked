
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct TYPE_2__ {int ent_type; } ;
struct g_part_gpt_entry {TYPE_1__ ent; } ;
struct g_part_entry {int gpe_index; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,size_t,char*,char,int ) ;

__attribute__((used)) static const char *
FUNC_2(struct g_part_table *VAR_1, struct g_part_entry *VAR_2,
    char *VAR_3, size_t VAR_4)
{
 struct g_part_gpt_entry *VAR_5;
 char VAR_6;

 VAR_5 = (struct g_part_gpt_entry *)VAR_2;
 VAR_6 = (FUNC_0(&VAR_5->ent.ent_type, &VAR_0)) ? 's' : 'p';
 FUNC_1(VAR_3, VAR_4, "%c%d", VAR_6, VAR_2->gpe_index);
 return (VAR_3);
}
