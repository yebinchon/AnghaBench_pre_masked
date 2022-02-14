
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_path {int ep_depth; TYPE_1__* ep_index; int ep_header; } ;
struct TYPE_2__ {int ei_blk; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static unsigned
FUNC_1(struct inode *VAR_1, struct ext4_extent_path *VAR_2)
{
 int VAR_3 = VAR_2->ep_depth;


 if (VAR_3 == 0)
  return (VAR_0);


 VAR_3--;

 while (VAR_3 >= 0) {
  if (VAR_2[VAR_3].ep_index !=
      FUNC_0(VAR_2[VAR_3].ep_header))
   return (VAR_2[VAR_3].ep_index[1].ei_blk);

  VAR_3--;
 }

 return (VAR_0);
}
