
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_writer_sem; struct nilfs_sb_info* ns_writer; } ;
struct nilfs_sb_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct the_nilfs *VAR_0, struct nilfs_sb_info *VAR_1)
{
 FUNC_0(&VAR_0->ns_writer_sem);
 if (VAR_1 == VAR_0->ns_writer)
  VAR_0->ns_writer = ((void*)0);
 FUNC_1(&VAR_0->ns_writer_sem);
}
