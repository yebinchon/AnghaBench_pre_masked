
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_blocks_per_segment; int ns_sufile; } ;
struct inode {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int mi_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 struct inode* FUNC_3 (struct the_nilfs*) ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct the_nilfs *VAR_0, sector_t *VAR_1)
{
 struct inode *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&FUNC_0(VAR_2)->mi_sem);
 VAR_4 = FUNC_4(VAR_0->ns_sufile, &VAR_3);
 FUNC_5(&FUNC_0(VAR_2)->mi_sem);
 if (FUNC_2(!VAR_4))
  *VAR_1 = (sector_t)VAR_3 * VAR_0->ns_blocks_per_segment;
 return VAR_4;
}
