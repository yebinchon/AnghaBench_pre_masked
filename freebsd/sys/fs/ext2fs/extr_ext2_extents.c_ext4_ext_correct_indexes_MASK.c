
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_path {TYPE_1__* ep_index; struct ext4_extent_header* ep_header; struct ext4_extent* ep_ext; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {void* e_blk; } ;
typedef void* int32_t ;
struct TYPE_2__ {void* ei_blk; } ;


 int VAR_0 ;
 struct ext4_extent* FUNC_0 (struct ext4_extent_header*) ;
 TYPE_1__* FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (struct inode*,struct ext4_extent_path*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_1, struct ext4_extent_path *VAR_2)
{
 struct ext4_extent_header *VAR_3;
 struct ext4_extent *VAR_4;
 int32_t VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_1);
 VAR_3 = VAR_2[VAR_6].ep_header;
 VAR_4 = VAR_2[VAR_6].ep_ext;

 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);

 if (!VAR_6)
  return (0);


 if (VAR_4 != FUNC_0(VAR_3))
  return (0);

 VAR_7 = VAR_6 - 1;
 VAR_5 = VAR_2[VAR_6].ep_ext->e_blk;
 VAR_2[VAR_7].ep_index->ei_blk = VAR_5;
 FUNC_2(VAR_1, VAR_2 + VAR_7);
 while (VAR_7--) {

  if (VAR_2[VAR_7+1].ep_index != FUNC_1(VAR_2[VAR_7+1].ep_header))
   break;

  VAR_2[VAR_7].ep_index->ei_blk = VAR_5;
  FUNC_2(VAR_1, VAR_2 + VAR_7);
 }

 return (0);
}
