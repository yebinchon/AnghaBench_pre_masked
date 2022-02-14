
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_table {scalar_t__ gpt_depth; } ;
struct TYPE_3__ {int ddr_sig; int ddr_blksize; int ddr_blkcount; } ;
struct TYPE_4__ {scalar_t__ ent_sig; int ent_pmblkcnt; int ent_type; } ;
struct g_part_apm_table {int tivo_series1; TYPE_1__ ddr; TYPE_2__ self; } ;
struct g_consumer {struct g_provider* provider; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct g_consumer*,int,TYPE_2__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (struct g_consumer*,long,int,int*) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct g_part_table *VAR_7, struct g_consumer *VAR_8)
{
 struct g_provider *VAR_9;
 struct g_part_apm_table *VAR_10;
 char *VAR_11;
 int VAR_12;


 if (VAR_7->gpt_depth != 0)
  return (VAR_4);

 VAR_10 = (struct g_part_apm_table *)VAR_7;
 VAR_10->tivo_series1 = 0;
 VAR_9 = VAR_8->provider;


 if (VAR_9->mediasize < 4 * VAR_9->sectorsize)
  return (VAR_3);


 VAR_11 = FUNC_5(VAR_8, 0L, VAR_9->sectorsize, &VAR_12);
 if (VAR_11 == ((void*)0))
  return (VAR_12);
 if (FUNC_2(VAR_11) == VAR_0) {

  VAR_10->ddr.ddr_sig = FUNC_2(VAR_11);
  VAR_10->ddr.ddr_blksize = FUNC_2(VAR_11 + 2);
  VAR_10->ddr.ddr_blkcount = FUNC_3(VAR_11 + 4);
  FUNC_4(VAR_11);
  if (VAR_10->ddr.ddr_blksize != VAR_9->sectorsize)
   return (VAR_4);
  if (VAR_10->ddr.ddr_blkcount > VAR_9->mediasize / VAR_9->sectorsize)
   return (VAR_4);
 } else {






  if (FUNC_2(VAR_11) != 0x9214) {

   FUNC_4(VAR_11);
   return (VAR_4);
  }
  VAR_10->ddr.ddr_sig = VAR_0;
  VAR_10->ddr.ddr_blksize = VAR_9->sectorsize;
  VAR_10->ddr.ddr_blkcount =
      FUNC_0(VAR_9->mediasize / VAR_9->sectorsize, VAR_6);
  VAR_10->tivo_series1 = 1;
  FUNC_4(VAR_11);
 }


 VAR_12 = FUNC_1(VAR_8, 1, &VAR_10->self, VAR_10->tivo_series1);
 if (VAR_12)
  return (VAR_12);
 if (VAR_10->self.ent_sig != VAR_1)
  return (VAR_4);
 if (FUNC_6(VAR_10->self.ent_type, VAR_2))
  return (VAR_4);
 if (VAR_10->self.ent_pmblkcnt >= VAR_10->ddr.ddr_blkcount)
  return (VAR_4);
 return (VAR_5);
}
