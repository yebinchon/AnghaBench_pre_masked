
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_path {TYPE_1__* ep_header; } ;
struct ext4_extent {int e_blk; } ;
struct TYPE_2__ {scalar_t__ eh_ecount; scalar_t__ eh_max; } ;


 scalar_t__ FUNC_0 (struct ext4_extent_path*) ;
 int FUNC_1 (struct ext4_extent_path*) ;
 int FUNC_2 (struct inode*,int ,struct ext4_extent_path**) ;
 int FUNC_3 (struct inode*,struct ext4_extent_path*,struct ext4_extent*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct ext4_extent_path*,struct ext4_extent*,int) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_0, struct ext4_extent_path *VAR_1,
    struct ext4_extent *VAR_2)
{
 struct ext4_extent_path *VAR_3;
 int VAR_4, VAR_5, VAR_6;

repeat:
 VAR_5 = VAR_4 = FUNC_4(VAR_0);


 VAR_3 = VAR_1 + VAR_4;
 while (VAR_5 > 0 && !FUNC_0(VAR_3)) {
  VAR_5--;
  VAR_3--;
 }





 if (FUNC_0(VAR_3)) {
  VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_5);
  if (VAR_6)
   goto out;


  FUNC_1(VAR_1);
  VAR_6 = FUNC_2(VAR_0, VAR_2->e_blk, &VAR_1);
  if (VAR_6)
   goto out;
 } else {

  VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2);
  if (VAR_6)
   goto out;


  FUNC_1(VAR_1);
  VAR_6 = FUNC_2(VAR_0, VAR_2->e_blk, &VAR_1);
  if (VAR_6)
   goto out;


  VAR_4 = FUNC_4(VAR_0);
  if (VAR_1[VAR_4].ep_header->eh_ecount ==
      VAR_1[VAR_4].ep_header->eh_max)
   goto repeat;
 }

out:
 return (VAR_6);
}
