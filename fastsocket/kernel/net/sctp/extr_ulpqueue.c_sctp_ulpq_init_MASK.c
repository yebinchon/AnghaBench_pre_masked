
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ulpq {scalar_t__ malloced; scalar_t__ pd_mode; int lobby; int reasm; struct sctp_association* asoc; } ;
struct sctp_association {int dummy; } ;


 int FUNC_0 (struct sctp_ulpq*,int ,int) ;
 int FUNC_1 (int *) ;

struct sctp_ulpq *FUNC_2(struct sctp_ulpq *VAR_0,
     struct sctp_association *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(struct sctp_ulpq));

 VAR_0->asoc = VAR_1;
 FUNC_1(&VAR_0->reasm);
 FUNC_1(&VAR_0->lobby);
 VAR_0->pd_mode = 0;
 VAR_0->malloced = 0;

 return VAR_0;
}
