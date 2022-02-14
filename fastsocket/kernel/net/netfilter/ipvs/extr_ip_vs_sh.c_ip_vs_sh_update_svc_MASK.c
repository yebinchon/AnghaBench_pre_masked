
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_sh_bucket {int dummy; } ;
struct ip_vs_service {struct ip_vs_sh_bucket* sched_data; } ;


 int FUNC_0 (struct ip_vs_sh_bucket*,struct ip_vs_service*) ;
 int FUNC_1 (struct ip_vs_sh_bucket*) ;

__attribute__((used)) static int FUNC_2(struct ip_vs_service *VAR_0)
{
 struct ip_vs_sh_bucket *VAR_1 = VAR_0->sched_data;


 FUNC_1(VAR_1);


 FUNC_0(VAR_1, VAR_0);

 return 0;
}
