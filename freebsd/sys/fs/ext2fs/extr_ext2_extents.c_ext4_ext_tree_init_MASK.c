
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ec_type; } ;
struct inode {int i_flag; int i_vnode; TYPE_1__ i_ext_cache; scalar_t__ i_data; } ;
struct ext4_extent_header {int eh_max; int eh_magic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;

void
FUNC_3(struct inode *VAR_7)
{
 struct ext4_extent_header *VAR_8;

 VAR_7->i_flag |= VAR_5;

 FUNC_2(VAR_7->i_data, 0, VAR_0 + VAR_1);
 VAR_8 = (struct ext4_extent_header *)VAR_7->i_data;
 VAR_8->eh_magic = VAR_3;
 VAR_8->eh_max = FUNC_1(VAR_7);
 VAR_7->i_ext_cache.ec_type = VAR_2;
 VAR_7->i_flag |= VAR_4 | VAR_6;
 FUNC_0(VAR_7->i_vnode, 1);
}
