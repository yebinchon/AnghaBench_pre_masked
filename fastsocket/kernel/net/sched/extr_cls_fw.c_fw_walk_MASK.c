
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,unsigned long,struct tcf_walker*) ;} ;
struct tcf_proto {scalar_t__ root; } ;
struct fw_head {struct fw_filter** ht; } ;
struct fw_filter {struct fw_filter* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcf_proto*,unsigned long,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_1(struct tcf_proto *VAR_1, struct tcf_walker *VAR_2)
{
 struct fw_head *VAR_3 = (struct fw_head*)VAR_1->root;
 int VAR_4;

 if (VAR_3 == ((void*)0))
  VAR_2->stop = 1;

 if (VAR_2->stop)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct fw_filter *VAR_5;

  for (VAR_5 = VAR_3->ht[VAR_4]; VAR_5; VAR_5 = VAR_5->next) {
   if (VAR_2->count < VAR_2->skip) {
    VAR_2->count++;
    continue;
   }
   if (VAR_2->fn(VAR_1, (unsigned long)VAR_5, VAR_2) < 0) {
    VAR_2->stop = 1;
    return;
   }
   VAR_2->count++;
  }
 }
}
