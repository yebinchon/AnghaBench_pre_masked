
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_table {scalar_t__ gpt_last; TYPE_1__* gpt_gp; } ;
struct g_part_parms {int gpp_size; } ;
struct TYPE_5__ {int dp_size; int dp_esect; int dp_ehd; int dp_ecyl; } ;
struct g_part_mbr_entry {TYPE_2__ ent; } ;
struct g_part_entry {scalar_t__ gpe_end; scalar_t__ gpe_start; struct g_provider* gpe_pp; } ;
struct TYPE_6__ {struct g_provider* provider; } ;
struct TYPE_4__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct g_part_table*,int *,int*) ;
 int FUNC_3 (struct g_part_table*,scalar_t__,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct g_part_table *VAR_4,
    struct g_part_entry *VAR_5, struct g_part_parms *VAR_6)
{
 struct g_part_mbr_entry *VAR_7;
 struct g_provider *VAR_8;
 uint32_t VAR_9;

 if (VAR_5 == ((void*)0)) {
  VAR_8 = FUNC_0(&VAR_4->gpt_gp->consumer)->provider;
  VAR_4->gpt_last = FUNC_1(VAR_8->mediasize / VAR_8->sectorsize,
      VAR_2) - 1;
  return (0);
 }
 VAR_9 = VAR_6->gpp_size;
 if (FUNC_2(VAR_4, ((void*)0), &VAR_9) != 0)
  return (VAR_1);

 VAR_8 = VAR_5->gpe_pp;
 if ((VAR_3 & 0x10) == 0 && VAR_9 < VAR_6->gpp_size &&
     VAR_8->mediasize / VAR_8->sectorsize > VAR_9)
  return (VAR_0);
 VAR_7 = (struct g_part_mbr_entry *)VAR_5;
 VAR_5->gpe_end = VAR_5->gpe_start + VAR_9 - 1;
 VAR_7->ent.dp_size = VAR_9;
 FUNC_3(VAR_4, VAR_5->gpe_end, &VAR_7->ent.dp_ecyl,
     &VAR_7->ent.dp_ehd, &VAR_7->ent.dp_esect);
 return (0);
}
