
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_part_table {int gpt_smhead; } ;
struct g_part_parms {int dummy; } ;
struct g_part_bsd_table {int * bbarea; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_0, struct g_part_parms *VAR_1)
{
 struct g_part_bsd_table *VAR_2;

 VAR_2 = (struct g_part_bsd_table *)VAR_0;
 if (VAR_2->bbarea != ((void*)0))
  FUNC_0(VAR_2->bbarea);
 VAR_2->bbarea = ((void*)0);


 VAR_0->gpt_smhead |= 2;
 return (0);
}
