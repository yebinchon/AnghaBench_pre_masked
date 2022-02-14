
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int dummy; } ;
struct g_part_table {scalar_t__ gpt_corrupt; TYPE_1__* gpt_gp; } ;
struct g_part_gpt_table {int dummy; } ;
struct TYPE_4__ {struct g_provider* provider; } ;
struct TYPE_3__ {int consumer; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (struct g_part_table*,struct g_provider*) ;
 int FUNC_2 (struct g_part_gpt_table*,struct g_provider*) ;

__attribute__((used)) static int
FUNC_3(struct g_part_table *VAR_0)
{
 struct g_part_gpt_table *VAR_1;
 struct g_provider *VAR_2;

 VAR_1 = (struct g_part_gpt_table *)VAR_0;
 VAR_2 = FUNC_0(&VAR_0->gpt_gp->consumer)->provider;
 FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_2);
 VAR_0->gpt_corrupt = 0;
 return (0);
}
