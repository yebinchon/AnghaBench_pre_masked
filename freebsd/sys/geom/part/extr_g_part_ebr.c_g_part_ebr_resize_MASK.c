
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_table {scalar_t__ gpt_last; TYPE_1__* gpt_gp; } ;
struct g_part_parms {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct TYPE_4__ {struct g_provider* provider; } ;
struct TYPE_3__ {int consumer; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_2,
    struct g_part_entry *VAR_3, struct g_part_parms *VAR_4)
{
 struct g_provider *VAR_5;

 if (VAR_3 != ((void*)0))
  return (VAR_0);
 VAR_5 = FUNC_0(&VAR_2->gpt_gp->consumer)->provider;
 VAR_2->gpt_last = FUNC_1(VAR_5->mediasize / VAR_5->sectorsize,
     VAR_1) - 1;
 return (0);
}
