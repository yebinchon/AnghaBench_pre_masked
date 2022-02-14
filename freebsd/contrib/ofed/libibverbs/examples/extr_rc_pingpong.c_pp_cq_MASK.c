
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ibv_cq* cq; int cq_ex; } ;
struct pingpong_context {TYPE_1__ cq_s; } ;
struct ibv_cq {int dummy; } ;


 struct ibv_cq* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static struct ibv_cq *FUNC_1(struct pingpong_context *VAR_1)
{
 return VAR_0 ? FUNC_0(VAR_1->cq_s.cq_ex) :
  VAR_1->cq_s.cq;
}
