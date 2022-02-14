
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {scalar_t__ tk_flag; int tk_aw_type; scalar_t__ tk_aw_bufsize; int * tk_aw_bufdata; scalar_t__ tk_aw_errno; int tk_aw_fiov; int tk_aw_ohead; int tk_ms_type; scalar_t__ tk_ms_bufsize; int * tk_ms_bufdata; int tk_ms_fiov; } ;
struct fuse_out_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fuse_ticket*) ;
 int FUNC_1 (struct fuse_ticket*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline
void
FUNC_4(struct fuse_ticket *VAR_2)
{
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 FUNC_3(&VAR_2->tk_ms_fiov);
 VAR_2->tk_ms_bufdata = ((void*)0);
 VAR_2->tk_ms_bufsize = 0;
 VAR_2->tk_ms_type = VAR_1;

 FUNC_2(&VAR_2->tk_aw_ohead, sizeof(struct fuse_out_header));

 FUNC_3(&VAR_2->tk_aw_fiov);
 VAR_2->tk_aw_errno = 0;
 VAR_2->tk_aw_bufdata = ((void*)0);
 VAR_2->tk_aw_bufsize = 0;
 VAR_2->tk_aw_type = VAR_0;

 VAR_2->tk_flag = 0;
}
