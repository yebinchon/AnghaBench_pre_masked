
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_provider {int dummy; } ;
struct g_part_table {TYPE_2__* gpt_gp; } ;
struct g_part_parms {scalar_t__ gpp_size; } ;
struct g_part_entry {scalar_t__ gpe_start; scalar_t__ gpe_end; } ;
struct TYPE_4__ {scalar_t__ p_size; } ;
struct g_part_bsd_entry {TYPE_1__ part; } ;
struct TYPE_6__ {struct g_provider* provider; } ;
struct TYPE_5__ {int consumer; } ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (struct g_part_table*,struct g_provider*) ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_0,
    struct g_part_entry *VAR_1, struct g_part_parms *VAR_2)
{
 struct g_part_bsd_entry *VAR_3;
 struct g_provider *VAR_4;

 if (VAR_1 == ((void*)0)) {
  VAR_4 = FUNC_0(&VAR_0->gpt_gp->consumer)->provider;
  FUNC_1(VAR_0, VAR_4);
  return (0);
 }
 VAR_3 = (struct g_part_bsd_entry *)VAR_1;
 VAR_1->gpe_end = VAR_1->gpe_start + VAR_2->gpp_size - 1;
 VAR_3->part.p_size = VAR_2->gpp_size;

 return (0);
}
