
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_part_table {int gpt_smhead; } ;
struct g_part_parms {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct g_part_table *VAR_0, struct g_part_parms *VAR_1)
{


 VAR_0->gpt_smhead |= 1;
 return (0);
}
