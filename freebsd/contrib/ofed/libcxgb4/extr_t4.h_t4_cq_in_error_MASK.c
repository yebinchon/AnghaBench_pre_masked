
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_status_page {int qp_err; } ;
struct t4_cq {size_t size; int * queue; } ;



__attribute__((used)) static inline int FUNC_0(struct t4_cq *VAR_0)
{
 return ((struct t4_status_page *)&VAR_0->queue[VAR_0->size])->qp_err;
}
