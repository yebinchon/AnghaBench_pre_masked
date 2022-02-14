
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sub_seq {int alloc; int ns_list; int subscriptions; int first_free; struct sub_seq* sseqs; int type; int lock; } ;
struct name_seq {int alloc; int ns_list; int subscriptions; int first_free; struct name_seq* sseqs; int type; int lock; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct sub_seq*,int ,struct sub_seq*,int ) ;
 int FUNC_3 (int *,struct hlist_head*) ;
 int FUNC_4 (struct sub_seq*) ;
 struct sub_seq* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 struct sub_seq* FUNC_7 (int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static struct name_seq *FUNC_9(u32 VAR_1, struct hlist_head *VAR_2)
{
 struct name_seq *VAR_3 = FUNC_5(sizeof(*VAR_3), VAR_0);
 struct sub_seq *VAR_4 = FUNC_7(1);

 if (!VAR_3 || !VAR_4) {
  FUNC_8("Name sequence creation failed, no memory\n");
  FUNC_4(VAR_3);
  FUNC_4(VAR_4);
  return ((void*)0);
 }

 FUNC_6(&VAR_3->lock);
 VAR_3->type = VAR_1;
 VAR_3->sseqs = VAR_4;
 FUNC_2("tipc_nameseq_create(): nseq = %p, type %u, ssseqs %p, ff: %u\n",
     VAR_3, VAR_1, VAR_3->sseqs, VAR_3->first_free);
 VAR_3->alloc = 1;
 FUNC_0(&VAR_3->ns_list);
 FUNC_1(&VAR_3->subscriptions);
 FUNC_3(&VAR_3->ns_list, VAR_2);
 return VAR_3;
}
