
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_table {int gpt_smhead; int gpt_smtail; TYPE_1__* gpt_gp; } ;
struct g_part_parms {int dummy; } ;
struct g_part_ldm_table {int db_offset; scalar_t__ is_gpt; } ;
struct TYPE_4__ {struct g_provider* provider; } ;
struct TYPE_3__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int* VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_3, struct g_part_parms *VAR_4)
{
 struct g_part_ldm_table *VAR_5;
 struct g_provider *VAR_6;

 VAR_5 = (struct g_part_ldm_table *)VAR_3;





 if (VAR_5->is_gpt)
  return (VAR_0);
 VAR_6 = FUNC_0(&VAR_3->gpt_gp->consumer)->provider;




 VAR_3->gpt_smhead = (1 << VAR_2[0]) | 1;





 if (VAR_5->db_offset + VAR_1 ==
     VAR_6->mediasize / VAR_6->sectorsize)
  VAR_3->gpt_smtail = 1;
 return (0);
}
