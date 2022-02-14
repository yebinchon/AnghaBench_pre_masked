
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tftp_stats {int tstart; scalar_t__ amount; scalar_t__ blocks; scalar_t__ retries; scalar_t__ rollovers; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct tftp_stats *VAR_0)
{

 VAR_0->amount = 0;
 VAR_0->rollovers = 0;
 VAR_0->retries = 0;
 VAR_0->blocks = 0;
 VAR_0->amount = 0;
 FUNC_0(&(VAR_0->tstart), ((void*)0));
}
