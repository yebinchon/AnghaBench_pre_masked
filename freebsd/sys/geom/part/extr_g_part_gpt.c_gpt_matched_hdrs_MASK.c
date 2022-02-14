
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpt_hdr {scalar_t__ hdr_revision; scalar_t__ hdr_size; scalar_t__ hdr_lba_start; scalar_t__ hdr_lba_end; scalar_t__ hdr_entries; scalar_t__ hdr_entsz; scalar_t__ hdr_crc_table; int hdr_uuid; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct gpt_hdr *VAR_0, struct gpt_hdr *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if (!FUNC_0(&VAR_0->hdr_uuid, &VAR_1->hdr_uuid))
  return (0);
 return ((VAR_0->hdr_revision == VAR_1->hdr_revision &&
     VAR_0->hdr_size == VAR_1->hdr_size &&
     VAR_0->hdr_lba_start == VAR_1->hdr_lba_start &&
     VAR_0->hdr_lba_end == VAR_1->hdr_lba_end &&
     VAR_0->hdr_entries == VAR_1->hdr_entries &&
     VAR_0->hdr_entsz == VAR_1->hdr_entsz &&
     VAR_0->hdr_crc_table == VAR_1->hdr_crc_table) ? 1 : 0);
}
