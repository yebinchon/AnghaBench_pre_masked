
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {int destinations; int * sched_data; } ;



__attribute__((used)) static int FUNC_0(struct ip_vs_service *VAR_0)
{
 VAR_0->sched_data = &VAR_0->destinations;
 return 0;
}
