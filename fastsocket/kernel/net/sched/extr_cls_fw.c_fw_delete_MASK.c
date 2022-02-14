
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {scalar_t__ root; } ;
struct fw_head {struct fw_filter** ht; } ;
struct fw_filter {struct fw_filter* next; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcf_proto*,struct fw_filter*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct tcf_proto*) ;
 int FUNC_3 (struct tcf_proto*) ;

__attribute__((used)) static int FUNC_4(struct tcf_proto *VAR_1, unsigned long VAR_2)
{
 struct fw_head *VAR_3 = (struct fw_head*)VAR_1->root;
 struct fw_filter *VAR_4 = (struct fw_filter*)VAR_2;
 struct fw_filter **VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  goto out;

 for (VAR_5=&VAR_3->ht[FUNC_1(VAR_4->id)]; *VAR_5; VAR_5 = &(*VAR_5)->next) {
  if (*VAR_5 == VAR_4) {
   FUNC_2(VAR_1);
   *VAR_5 = VAR_4->next;
   FUNC_3(VAR_1);
   FUNC_0(VAR_1, VAR_4);
   return 0;
  }
 }
out:
 return -VAR_0;
}
