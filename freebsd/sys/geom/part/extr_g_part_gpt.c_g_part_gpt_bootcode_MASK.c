
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_part_table {int dummy; } ;
struct g_part_parms {int gpp_codeptr; int gpp_codesize; } ;
struct g_part_gpt_table {int mbr; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,size_t) ;

__attribute__((used)) static int
FUNC_3(struct g_part_table *VAR_1, struct g_part_parms *VAR_2)
{
 struct g_part_gpt_table *VAR_3;
 size_t VAR_4;

 VAR_4 = VAR_0;
 VAR_3 = (struct g_part_gpt_table *)VAR_1;
 FUNC_2(VAR_3->mbr, VAR_4);
 VAR_4 = FUNC_0(VAR_4, VAR_2->gpp_codesize);
 if (VAR_4 > 0)
  FUNC_1(VAR_2->gpp_codeptr, VAR_3->mbr, VAR_4);
 return (0);
}
