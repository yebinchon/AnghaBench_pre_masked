
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct c4iw_qp {int dummy; } ;
struct c4iw_dev {struct c4iw_qp** qpid2ptr; } ;



__attribute__((used)) static inline struct c4iw_qp *FUNC_0(struct c4iw_dev *VAR_0, u32 VAR_1)
{
 return VAR_0->qpid2ptr[VAR_1];
}
