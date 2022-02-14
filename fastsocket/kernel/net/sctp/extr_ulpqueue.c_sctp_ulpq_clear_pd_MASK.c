
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpq {TYPE_2__* asoc; scalar_t__ pd_mode; } ;
struct TYPE_3__ {int sk; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (struct sctp_ulpq*) ;

__attribute__((used)) static int FUNC_2(struct sctp_ulpq *VAR_0)
{
 VAR_0->pd_mode = 0;
 FUNC_1(VAR_0);
 return FUNC_0(VAR_0->asoc->base.sk, VAR_0->asoc);
}
