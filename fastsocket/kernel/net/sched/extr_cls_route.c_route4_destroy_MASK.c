
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct route4_head* root; } ;
struct route4_head {struct route4_filter** ht; struct route4_head** table; } ;
struct route4_filter {struct route4_filter* next; } ;
struct route4_bucket {struct route4_filter** ht; struct route4_bucket** table; } ;


 int FUNC_0 (struct route4_head*) ;
 int FUNC_1 (struct tcf_proto*,struct route4_filter*) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_0)
{
 struct route4_head *VAR_1 = VAR_0->root;
 int VAR_2, VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 for (VAR_2=0; VAR_2<=256; VAR_2++) {
  struct route4_bucket *VAR_4;

  if ((VAR_4 = VAR_1->table[VAR_2]) != ((void*)0)) {
   for (VAR_3=0; VAR_3<=32; VAR_3++) {
    struct route4_filter *VAR_5;

    while ((VAR_5 = VAR_4->ht[VAR_3]) != ((void*)0)) {
     VAR_4->ht[VAR_3] = VAR_5->next;
     FUNC_1(VAR_0, VAR_5);
    }
   }
   FUNC_0(VAR_4);
  }
 }
 FUNC_0(VAR_1);
}
