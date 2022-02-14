
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_table {int gpt_smhead; int gpt_smtail; TYPE_1__* gpt_gp; } ;
struct g_part_parms {int dummy; } ;
struct g_part_gpt_table {scalar_t__* state; int* lba; int * hdr; } ;
struct TYPE_4__ {struct g_provider* provider; } ;
struct TYPE_3__ {int consumer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_3, struct g_part_parms *VAR_4)
{
 struct g_part_gpt_table *VAR_5;
 struct g_provider *VAR_6;

 VAR_5 = (struct g_part_gpt_table *)VAR_3;
 VAR_6 = FUNC_0(&VAR_3->gpt_gp->consumer)->provider;
 FUNC_1(VAR_5->hdr);
 VAR_5->hdr = ((void*)0);





 if (VAR_5->state[VAR_0] == VAR_2)
  VAR_3->gpt_smhead |= 3;
 if (VAR_5->state[VAR_1] == VAR_2 &&
     VAR_5->lba[VAR_1] == VAR_6->mediasize / VAR_6->sectorsize - 1)
  VAR_3->gpt_smtail |= 1;
 return (0);
}
