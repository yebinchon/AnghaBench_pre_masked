
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct g_provider {int mediasize; int sectorsize; } ;
struct TYPE_7__ {TYPE_2__* map; } ;
struct g_part_vtoc8_table {TYPE_3__ vtoc; } ;
struct g_part_table {TYPE_1__* gpt_gp; } ;
struct g_part_parms {int gpp_size; } ;
struct g_part_entry {int gpe_index; scalar_t__ gpe_start; scalar_t__ gpe_end; struct g_provider* gpe_pp; } ;
struct TYPE_8__ {struct g_provider* provider; } ;
struct TYPE_6__ {int nblks; } ;
struct TYPE_5__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct g_part_vtoc8_table*,int *,int*) ;
 int FUNC_3 (struct g_part_table*,struct g_provider*) ;

__attribute__((used)) static int
FUNC_4(struct g_part_table *VAR_3,
    struct g_part_entry *VAR_4, struct g_part_parms *VAR_5)
{
 struct g_part_vtoc8_table *VAR_6;
 struct g_provider *VAR_7;
 uint64_t VAR_8;

 if (VAR_4 == ((void*)0)) {
  VAR_7 = FUNC_0(&VAR_3->gpt_gp->consumer)->provider;
  return (FUNC_3(VAR_3, VAR_7));
 }
 VAR_6 = (struct g_part_vtoc8_table *)VAR_3;
 VAR_8 = VAR_5->gpp_size;
 if (FUNC_2(VAR_6, ((void*)0), &VAR_8) != 0)
  return (VAR_1);

 VAR_7 = VAR_4->gpe_pp;
 if ((VAR_2 & 0x10) == 0 && VAR_8 < VAR_5->gpp_size &&
     VAR_7->mediasize / VAR_7->sectorsize > VAR_8)
  return (VAR_0);
 VAR_4->gpe_end = VAR_4->gpe_start + VAR_8 - 1;
 FUNC_1(&VAR_6->vtoc.map[VAR_4->gpe_index - 1].nblks, VAR_8);

 return (0);
}
