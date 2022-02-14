
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_ns {scalar_t__ namelen; struct delegpt_ns* next; } ;
struct delegpt_addr {int dummy; } ;
struct delegpt {int namelen; struct delegpt_ns* nslist; } ;


 int FUNC_0 (struct delegpt*) ;

size_t FUNC_1(struct delegpt* VAR_0)
{
 struct delegpt_ns* VAR_1;
 size_t VAR_2;
 if(!VAR_0) return 0;
 VAR_2 = sizeof(*VAR_0) + VAR_0->namelen +
  FUNC_0(VAR_0)*sizeof(struct delegpt_addr);
 for(VAR_1=VAR_0->nslist; VAR_1; VAR_1=VAR_1->next)
  VAR_2 += sizeof(*VAR_1)+VAR_1->namelen;
 return VAR_2;
}
