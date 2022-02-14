
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {int tk_aw_type; int tk_aw_fiov; int tk_aw_mtx; int tk_ms_type; int tk_ms_fiov; } ;
struct fuse_in_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fuse_ticket*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, int VAR_4, int VAR_5)
{
 struct fuse_ticket *VAR_6 = VAR_3;

 FUNC_0(VAR_6, sizeof(struct fuse_ticket));

 FUNC_1(&VAR_6->tk_ms_fiov, sizeof(struct fuse_in_header));
 VAR_6->tk_ms_type = VAR_1;

 FUNC_2(&VAR_6->tk_aw_mtx, "fuse answer delivery mutex", ((void*)0), VAR_2);
 FUNC_1(&VAR_6->tk_aw_fiov, 0);
 VAR_6->tk_aw_type = VAR_0;

 return 0;
}
