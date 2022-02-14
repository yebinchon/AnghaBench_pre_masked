
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct g_provider {int sectorsize; int mediasize; int consumers; } ;
struct g_part_table {scalar_t__ gpt_depth; int gpt_last; int gpt_entries; int gpt_sectors; scalar_t__ gpt_first; } ;
struct g_part_parms {struct g_provider* gpp_provider; } ;
struct g_consumer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct g_consumer* FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,struct g_consumer*,char**) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct g_part_table *VAR_4, struct g_part_parms *VAR_5)
{
 char VAR_6[64];
 struct g_consumer *VAR_7;
 struct g_provider *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_8 = VAR_5->gpp_provider;

 if (VAR_8->sectorsize < VAR_0)
  return (VAR_1);
 if (VAR_8->sectorsize > 4096)
  return (VAR_2);


 if (VAR_4->gpt_depth == 0)
  return (VAR_2);
 VAR_7 = FUNC_0(&VAR_8->consumers);
 VAR_10 = FUNC_2("PART::scheme", VAR_7, &VAR_6);
 if (VAR_10 != 0)
  return (VAR_10);
 if (FUNC_3(VAR_6, "MBR") != 0)
  return (VAR_2);
 VAR_10 = FUNC_2("PART::type", VAR_7, &VAR_6);
 if (VAR_10 != 0)
  return (VAR_10);
 if (FUNC_3(VAR_6, "ebr") != 0)
  return (VAR_2);

 VAR_9 = FUNC_1(VAR_8->mediasize / VAR_8->sectorsize, VAR_3);
 VAR_4->gpt_first = 0;
 VAR_4->gpt_last = VAR_9 - 1;
 VAR_4->gpt_entries = VAR_9 / VAR_4->gpt_sectors;
 return (0);
}
