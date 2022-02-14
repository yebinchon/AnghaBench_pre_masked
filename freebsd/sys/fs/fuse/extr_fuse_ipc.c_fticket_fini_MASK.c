
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {int tk_aw_mtx; int tk_aw_fiov; int tk_ms_fiov; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct fuse_ticket *VAR_2 = VAR_0;

 FUNC_0(&VAR_2->tk_ms_fiov);
 FUNC_0(&VAR_2->tk_aw_fiov);
 FUNC_1(&VAR_2->tk_aw_mtx);
}
