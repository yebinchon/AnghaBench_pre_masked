
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_queue_entry {int dummy; } ;
struct ipq_verdict_msg {int value; unsigned int data_len; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nf_queue_entry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ipq_verdict_msg*,struct nf_queue_entry*) ;
 int FUNC_2 (struct nf_queue_entry*,int) ;

__attribute__((used)) static int
FUNC_3(struct ipq_verdict_msg *VAR_4, unsigned int VAR_5)
{
 struct nf_queue_entry *VAR_6;

 if (VAR_4->value > VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4->id);
 if (VAR_6 == ((void*)0))
  return -VAR_1;
 else {
  int VAR_7 = VAR_4->value;

  if (VAR_4->data_len && VAR_4->data_len == VAR_5)
   if (FUNC_1(VAR_4, VAR_6) < 0)
    VAR_7 = VAR_2;

  FUNC_2(VAR_6, VAR_7);
  return 0;
 }
}
