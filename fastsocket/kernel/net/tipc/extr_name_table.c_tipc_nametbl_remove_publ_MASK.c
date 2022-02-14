
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct publication {int dummy; } ;
struct name_seq {struct name_seq* sseqs; int ns_list; int subscriptions; int first_free; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct name_seq*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct name_seq* FUNC_4 (int ) ;
 struct publication* FUNC_5 (struct name_seq*,int ,int ,int ,int ) ;

struct publication *FUNC_6(u32 VAR_0, u32 VAR_1,
          u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct publication *VAR_5;
 struct name_seq *VAR_6 = FUNC_4(VAR_0);

 if (!VAR_6)
  return ((void*)0);

 FUNC_0("Withdrawing {%u,%u} from 0x%x\n", VAR_0, VAR_1, VAR_2);
 VAR_5 = FUNC_5(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);

 if (!VAR_6->first_free && FUNC_3(&VAR_6->subscriptions)) {
  FUNC_1(&VAR_6->ns_list);
  FUNC_2(VAR_6->sseqs);
  FUNC_2(VAR_6);
 }
 return VAR_5;
}
