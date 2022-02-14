
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_proto {scalar_t__ root; } ;
struct fw_head {struct fw_filter** ht; } ;
struct fw_filter {scalar_t__ id; struct fw_filter* next; } ;


 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(struct tcf_proto *VAR_0, u32 VAR_1)
{
 struct fw_head *VAR_2 = (struct fw_head*)VAR_0->root;
 struct fw_filter *VAR_3;

 if (VAR_2 == ((void*)0))
  return 0;

 for (VAR_3=VAR_2->ht[FUNC_0(VAR_1)]; VAR_3; VAR_3=VAR_3->next) {
  if (VAR_3->id == VAR_1)
   return (unsigned long)VAR_3;
 }
 return 0;
}
