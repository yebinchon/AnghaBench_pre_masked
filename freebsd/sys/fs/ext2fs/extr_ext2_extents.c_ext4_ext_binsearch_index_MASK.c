
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent_path {struct ext4_extent_index* ep_index; struct ext4_extent_header* ep_header; } ;
struct ext4_extent_index {int ei_blk; } ;
struct ext4_extent_header {scalar_t__ eh_ecount; scalar_t__ eh_max; } ;


 struct ext4_extent_index* FUNC_0 (struct ext4_extent_header*) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2(struct ext4_extent_path *VAR_0, int VAR_1)
{
 struct ext4_extent_header *VAR_2;
 struct ext4_extent_index *VAR_3, *VAR_4, *VAR_5;

 VAR_2 = VAR_0->ep_header;

 FUNC_1(VAR_2->eh_ecount <= VAR_2->eh_max && VAR_2->eh_ecount > 0,
     ("ext4_ext_binsearch_index: bad args"));

 VAR_4 = FUNC_0(VAR_2) + 1;
 VAR_3 = FUNC_0(VAR_2) + VAR_2->eh_ecount - 1;
 while (VAR_4 <= VAR_3) {
  VAR_5 = VAR_4 + (VAR_3 - VAR_4) / 2;
  if (VAR_1 < VAR_5->ei_blk)
   VAR_3 = VAR_5 - 1;
  else
   VAR_4 = VAR_5 + 1;
 }

 VAR_0->ep_index = VAR_4 - 1;
}
