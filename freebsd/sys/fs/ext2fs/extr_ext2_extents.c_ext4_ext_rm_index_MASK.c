
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_path {TYPE_1__* ep_header; int ep_index; } ;
typedef int e4fs_daddr_t ;
struct TYPE_2__ {scalar_t__ eh_ecount; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct inode*,int ,int,int ) ;
 int FUNC_2 (struct inode*,struct ext4_extent_path*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_0, struct ext4_extent_path *VAR_1)
{
 e4fs_daddr_t VAR_2;


 VAR_1--;
 VAR_2 = FUNC_3(VAR_1->ep_index);
 FUNC_0(VAR_1->ep_header->eh_ecount != 0,
     ("ext4_ext_rm_index: bad ecount"));
 VAR_1->ep_header->eh_ecount--;
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_2, 1, 0);
 return (0);
}
