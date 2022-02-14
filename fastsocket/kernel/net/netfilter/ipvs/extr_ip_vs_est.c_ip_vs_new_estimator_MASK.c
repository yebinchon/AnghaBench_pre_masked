
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cps; int inpps; int outpps; int inbps; int outbps; int outbytes; int inbytes; int outpkts; int inpkts; int conns; } ;
struct ip_vs_estimator {int cps; int inpps; int outpps; int inbps; int outbps; int list; int last_outbytes; int last_inbytes; int last_outpkts; int last_inpkts; int last_conns; } ;
struct ip_vs_stats {TYPE_1__ ustats; struct ip_vs_estimator est; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ip_vs_stats *VAR_2)
{
 struct ip_vs_estimator *VAR_3 = &VAR_2->est;

 FUNC_0(&VAR_3->list);

 VAR_3->last_conns = VAR_2->ustats.conns;
 VAR_3->cps = VAR_2->ustats.cps<<10;

 VAR_3->last_inpkts = VAR_2->ustats.inpkts;
 VAR_3->inpps = VAR_2->ustats.inpps<<10;

 VAR_3->last_outpkts = VAR_2->ustats.outpkts;
 VAR_3->outpps = VAR_2->ustats.outpps<<10;

 VAR_3->last_inbytes = VAR_2->ustats.inbytes;
 VAR_3->inbps = VAR_2->ustats.inbps<<5;

 VAR_3->last_outbytes = VAR_2->ustats.outbytes;
 VAR_3->outbps = VAR_2->ustats.outbps<<5;

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_3->list, &VAR_0);
 FUNC_3(&VAR_1);
}
