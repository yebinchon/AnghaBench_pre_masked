
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int sectorsize; int mediasize; } ;
struct g_part_table {scalar_t__ gpt_last; int gpt_sectors; int gpt_first; } ;
struct g_part_parms {struct g_provider* gpp_provider; } ;
struct g_part_mbr_table {scalar_t__ mbr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_5, struct g_part_parms *VAR_6)
{
 struct g_provider *VAR_7;
 struct g_part_mbr_table *VAR_8;

 VAR_7 = VAR_6->gpp_provider;
 if (VAR_7->sectorsize < VAR_3)
  return (VAR_2);

 VAR_5->gpt_first = VAR_5->gpt_sectors;
 VAR_5->gpt_last = FUNC_0(VAR_7->mediasize / VAR_7->sectorsize,
     VAR_4) - 1;

 VAR_8 = (struct g_part_mbr_table *)VAR_5;
 FUNC_1(VAR_8->mbr + VAR_1, VAR_0);
 return (0);
}
