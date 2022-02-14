
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct g_part_parms {int gpp_parms; int gpp_type; scalar_t__ gpp_start; int gpp_size; } ;
struct g_part_entry {int dummy; } ;
struct g_part_bsd_table {scalar_t__ offset; } ;
struct TYPE_2__ {int p_fstype; scalar_t__ p_cpg; scalar_t__ p_frag; scalar_t__ p_fsize; scalar_t__ p_offset; int p_size; } ;
struct g_part_bsd_entry {TYPE_1__ part; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_2, struct g_part_entry *VAR_3,
    struct g_part_parms *VAR_4)
{
 struct g_part_bsd_entry *VAR_5;
 struct g_part_bsd_table *VAR_6;

 if (VAR_4->gpp_parms & VAR_1)
  return (VAR_0);

 VAR_5 = (struct g_part_bsd_entry *)VAR_3;
 VAR_6 = (struct g_part_bsd_table *)VAR_2;

 VAR_5->part.p_size = VAR_4->gpp_size;
 VAR_5->part.p_offset = VAR_4->gpp_start + VAR_6->offset;
 VAR_5->part.p_fsize = 0;
 VAR_5->part.p_frag = 0;
 VAR_5->part.p_cpg = 0;
 return (FUNC_0(VAR_4->gpp_type, &VAR_5->part.p_fstype));
}
