
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct delegpt_ns {size_t namelen; struct delegpt_ns* next; int name; } ;
struct delegpt {struct delegpt_ns* nslist; } ;


 scalar_t__ FUNC_0 (int *,int ) ;

struct delegpt_ns*
FUNC_1(struct delegpt* VAR_0, uint8_t* VAR_1, size_t VAR_2)
{
 struct delegpt_ns* VAR_3 = VAR_0->nslist;
 while(VAR_3) {
  if(VAR_2 == VAR_3->namelen &&
   FUNC_0(VAR_1, VAR_3->name) == 0) {
   return VAR_3;
  }
  VAR_3 = VAR_3->next;
 }
 return ((void*)0);
}
