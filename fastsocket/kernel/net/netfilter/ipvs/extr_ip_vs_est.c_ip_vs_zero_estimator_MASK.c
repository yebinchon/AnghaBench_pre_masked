
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_estimator {scalar_t__ outbps; scalar_t__ inbps; scalar_t__ outpps; scalar_t__ inpps; scalar_t__ cps; scalar_t__ last_outpkts; scalar_t__ last_inpkts; scalar_t__ last_conns; scalar_t__ last_outbytes; scalar_t__ last_inbytes; } ;
struct ip_vs_stats {struct ip_vs_estimator est; } ;



void FUNC_0(struct ip_vs_stats *VAR_0)
{
 struct ip_vs_estimator *VAR_1 = &VAR_0->est;


 VAR_1->last_inbytes = 0;
 VAR_1->last_outbytes = 0;
 VAR_1->last_conns = 0;
 VAR_1->last_inpkts = 0;
 VAR_1->last_outpkts = 0;
 VAR_1->cps = 0;
 VAR_1->inpps = 0;
 VAR_1->outpps = 0;
 VAR_1->inbps = 0;
 VAR_1->outbps = 0;
}
