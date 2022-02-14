
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_bio_wait_ctxt {scalar_t__ wc_error; int wc_io_complete; int wc_num_reqs; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct o2hb_bio_wait_ctxt *VAR_0)
{
 FUNC_0(&VAR_0->wc_num_reqs, 1);
 FUNC_1(&VAR_0->wc_io_complete);
 VAR_0->wc_error = 0;
}
