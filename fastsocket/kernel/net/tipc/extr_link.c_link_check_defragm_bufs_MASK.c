
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {struct sk_buff* next; } ;
struct link {struct sk_buff* defragm_buf; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct link*,char*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct link*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct link *VAR_0)
{
 struct sk_buff *VAR_1 = ((void*)0);
 struct sk_buff *VAR_2 = ((void*)0);
 struct sk_buff *VAR_3 = VAR_0->defragm_buf;

 if (!VAR_3)
  return;
 if (!FUNC_7(VAR_0))
  return;
 while (VAR_3) {
  u32 VAR_4 = FUNC_5(VAR_3);

  VAR_2 = VAR_3->next;
  if (VAR_4 < 4) {
   FUNC_6(VAR_3);
   VAR_1 = VAR_3;
  } else {
   FUNC_2(" Discarding incomplete long buffer\n");
   FUNC_8(FUNC_1(VAR_3), "LONG:");
   FUNC_4(VAR_0, "curr:");
   FUNC_2("Pending long buffers:\n");
   FUNC_3(VAR_0->defragm_buf);
   if (VAR_1)
    VAR_1->next = VAR_3->next;
   else
    VAR_0->defragm_buf = VAR_3->next;
   FUNC_0(VAR_3);
  }
  VAR_3 = VAR_2;
 }
}
