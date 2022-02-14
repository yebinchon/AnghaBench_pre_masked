
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_datamsg {int can_delay; int chunks; scalar_t__ expires_at; scalar_t__ can_abandon; scalar_t__ send_error; scalar_t__ send_failed; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct sctp_datamsg *VAR_0)
{
 FUNC_1(&VAR_0->refcnt, 1);
 VAR_0->send_failed = 0;
 VAR_0->send_error = 0;
 VAR_0->can_abandon = 0;
 VAR_0->can_delay = 1;
 VAR_0->expires_at = 0;
 FUNC_0(&VAR_0->chunks);
}
