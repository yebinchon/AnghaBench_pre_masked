
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {scalar_t__ sc_nfreesegs; int sc_gc_inodes; int sc_flags; int sc_dirty_files; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nilfs_sc_info *VAR_1)
{
 return FUNC_0(&VAR_1->sc_dirty_files) &&
  !FUNC_2(VAR_0, &VAR_1->sc_flags) &&
  VAR_1->sc_nfreesegs == 0 &&
  (!FUNC_1() || FUNC_0(&VAR_1->sc_gc_inodes));
}
