
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct t4_cqe {scalar_t__ bits_type_ts; } ;
struct t4_cq {int cidx; size_t size; scalar_t__ bits_type_ts; int error; struct t4_cqe* queue; int cqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct t4_cq*,struct t4_cqe*) ;
 int FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(struct t4_cq *VAR_3, struct t4_cqe **VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 if (VAR_3->cidx == 0)
  VAR_6 = VAR_3->size - 1;
 else
  VAR_6 = VAR_3->cidx - 1;

 if (VAR_3->queue[VAR_6].bits_type_ts != VAR_3->bits_type_ts) {
  VAR_5 = -VAR_1;
  FUNC_1(VAR_2, "cxgb4 cq overflow cqid %u\n", VAR_3->cqid);
  VAR_3->error = 1;
  FUNC_0(0);
 } else if (FUNC_2(VAR_3, &VAR_3->queue[VAR_3->cidx])) {
  FUNC_3();
  *VAR_4 = &VAR_3->queue[VAR_3->cidx];
  VAR_5 = 0;
 } else
  VAR_5 = -VAR_0;
 return VAR_5;
}
