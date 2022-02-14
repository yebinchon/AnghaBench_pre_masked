
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_wrr_mark {scalar_t__ mw; scalar_t__ cw; int di; int * cl; } ;
struct ip_vs_service {int destinations; struct ip_vs_wrr_mark* sched_data; } ;


 int FUNC_0 (struct ip_vs_service*) ;
 scalar_t__ FUNC_1 (struct ip_vs_service*) ;

__attribute__((used)) static int FUNC_2(struct ip_vs_service *VAR_0)
{
 struct ip_vs_wrr_mark *VAR_1 = VAR_0->sched_data;

 VAR_1->cl = &VAR_0->destinations;
 VAR_1->mw = FUNC_1(VAR_0);
 VAR_1->di = FUNC_0(VAR_0);
 if (VAR_1->cw > VAR_1->mw)
  VAR_1->cw = 0;
 return 0;
}
