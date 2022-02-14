
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct fw_head* root; } ;
struct fw_head {struct fw_filter** ht; } ;
struct fw_filter {struct fw_filter* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcf_proto*,struct fw_filter*) ;
 int FUNC_1 (struct fw_head*) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_1)
{
 struct fw_head *VAR_2 = VAR_1->root;
 struct fw_filter *VAR_3;
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
  while ((VAR_3=VAR_2->ht[VAR_4]) != ((void*)0)) {
   VAR_2->ht[VAR_4] = VAR_3->next;
   FUNC_0(VAR_1, VAR_3);
  }
 }
 FUNC_1(VAR_2);
}
