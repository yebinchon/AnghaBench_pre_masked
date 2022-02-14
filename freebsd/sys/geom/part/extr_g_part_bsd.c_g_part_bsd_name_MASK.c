
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_part_table {int dummy; } ;
struct g_part_entry {int gpe_index; } ;


 int FUNC_0 (char*,size_t,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(struct g_part_table *VAR_0, struct g_part_entry *VAR_1,
    char *VAR_2, size_t VAR_3)
{

 FUNC_0(VAR_2, VAR_3, "%c", 'a' + VAR_1->gpe_index - 1);
 return (VAR_2);
}
