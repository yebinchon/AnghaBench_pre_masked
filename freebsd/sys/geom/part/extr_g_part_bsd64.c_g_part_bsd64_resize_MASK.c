
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int sectorsize; scalar_t__ mediasize; } ;
struct g_part_table {int gpt_last; TYPE_1__* gpt_gp; } ;
struct g_part_parms {scalar_t__ gpp_size; } ;
struct g_part_entry {scalar_t__ gpe_start; scalar_t__ gpe_end; } ;
struct g_part_bsd64_table {int d_abase; int d_bbase; int d_align; } ;
struct TYPE_4__ {struct g_provider* provider; } ;
struct TYPE_3__ {int consumer; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_0,
    struct g_part_entry *VAR_1, struct g_part_parms *VAR_2)
{
 struct g_part_bsd64_table *VAR_3;
 struct g_provider *VAR_4;

 if (VAR_1 == ((void*)0)) {
  VAR_4 = FUNC_0(&VAR_0->gpt_gp->consumer)->provider;
  VAR_3 = (struct g_part_bsd64_table *)VAR_0;
  VAR_3->d_abase =
      FUNC_1(VAR_4->mediasize - VAR_3->d_bbase * VAR_4->sectorsize,
          VAR_3->d_align) / VAR_4->sectorsize;
  VAR_0->gpt_last = VAR_3->d_abase - 1;
  return (0);
 }
 VAR_1->gpe_end = VAR_1->gpe_start + VAR_2->gpp_size - 1;
 return (0);
}
