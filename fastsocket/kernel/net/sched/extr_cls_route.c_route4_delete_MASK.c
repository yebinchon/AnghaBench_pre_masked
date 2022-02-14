
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int q; scalar_t__ root; } ;
struct route4_head {int ** table; } ;
struct route4_filter {unsigned int handle; int id; struct route4_filter* next; struct route4_bucket* bkt; } ;
struct route4_bucket {struct route4_filter** ht; } ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (struct route4_bucket*) ;
 int FUNC_2 (struct tcf_proto*,struct route4_filter*) ;
 int FUNC_3 (int ,struct route4_head*,int ) ;
 int FUNC_4 (struct tcf_proto*) ;
 int FUNC_5 (struct tcf_proto*) ;
 size_t FUNC_6 (unsigned int) ;

__attribute__((used)) static int FUNC_7(struct tcf_proto *VAR_1, unsigned long VAR_2)
{
 struct route4_head *VAR_3 = (struct route4_head*)VAR_1->root;
 struct route4_filter **VAR_4, *VAR_5 = (struct route4_filter*)VAR_2;
 unsigned VAR_6 = 0;
 struct route4_bucket *VAR_7;
 int VAR_8;

 if (!VAR_3 || !VAR_5)
  return -VAR_0;

 VAR_6 = VAR_5->handle;
 VAR_7 = VAR_5->bkt;

 for (VAR_4 = &VAR_7->ht[FUNC_0(VAR_6>>16)]; *VAR_4; VAR_4 = &(*VAR_4)->next) {
  if (*VAR_4 == VAR_5) {
   FUNC_4(VAR_1);
   *VAR_4 = VAR_5->next;
   FUNC_5(VAR_1);

   FUNC_3(VAR_1->q, VAR_3, VAR_5->id);
   FUNC_2(VAR_1, VAR_5);



   for (VAR_8=0; VAR_8<=32; VAR_8++)
    if (VAR_7->ht[VAR_8])
     return 0;


   FUNC_4(VAR_1);
   VAR_3->table[FUNC_6(VAR_6)] = ((void*)0);
   FUNC_5(VAR_1);

   FUNC_1(VAR_7);
   return 0;
  }
 }
 return 0;
}
