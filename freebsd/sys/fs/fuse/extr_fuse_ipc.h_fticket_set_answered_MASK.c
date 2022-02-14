
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {int tk_flag; int tk_aw_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct fuse_ticket *VAR_2)
{
 FUNC_0(&VAR_2->tk_aw_mtx, VAR_1);
 VAR_2->tk_flag |= VAR_0;
}
