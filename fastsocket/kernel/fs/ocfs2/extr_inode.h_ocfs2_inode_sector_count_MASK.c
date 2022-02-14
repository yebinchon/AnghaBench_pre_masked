
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
typedef int blkcnt_t ;
struct TYPE_4__ {int ip_clusters; } ;
struct TYPE_3__ {int s_clustersize_bits; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static inline blkcnt_t FUNC_2(struct inode *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->i_sb)->s_clustersize_bits - 9;

 return (blkcnt_t)(FUNC_0(VAR_0)->ip_clusters << VAR_1);
}
