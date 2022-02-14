
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cq {scalar_t__ sw_in_use; scalar_t__ size; int error; scalar_t__ sw_pidx; int cqid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct t4_cq *VAR_1)
{
 VAR_1->sw_in_use++;
 if (VAR_1->sw_in_use == VAR_1->size) {
  FUNC_1(VAR_0, "cxgb4 sw cq overflow cqid %u\n", VAR_1->cqid);
  VAR_1->error = 1;
  FUNC_0(0);
 }
 if (++VAR_1->sw_pidx == VAR_1->size)
  VAR_1->sw_pidx = 0;
}
