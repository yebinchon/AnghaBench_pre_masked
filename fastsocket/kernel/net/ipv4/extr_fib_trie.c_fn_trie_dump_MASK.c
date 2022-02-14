
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct trie {int dummy; } ;
struct sk_buff {int len; } ;
struct netlink_callback {int* args; } ;
struct leaf {int key; } ;
struct fib_table {scalar_t__ tb_data; } ;


 struct leaf* FUNC_0 (struct trie*,int) ;
 scalar_t__ FUNC_1 (struct leaf*,struct fib_table*,struct sk_buff*,struct netlink_callback*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct leaf* FUNC_5 (struct trie*) ;
 struct leaf* FUNC_6 (struct trie*,int) ;
 struct leaf* FUNC_7 (struct leaf*) ;

__attribute__((used)) static int FUNC_8(struct fib_table *VAR_0, struct sk_buff *VAR_1,
   struct netlink_callback *VAR_2)
{
 struct leaf *VAR_3;
 struct trie *VAR_4 = (struct trie *) VAR_0->tb_data;
 t_key VAR_5 = VAR_2->args[2];
 int VAR_6 = VAR_2->args[3];

 FUNC_3();



 if (VAR_6 == 0)
  VAR_3 = FUNC_5(VAR_4);
 else {



  VAR_3 = FUNC_0(VAR_4, VAR_5);
  if (!VAR_3)
   VAR_3 = FUNC_6(VAR_4, VAR_6);
 }

 while (VAR_3) {
  VAR_2->args[2] = VAR_3->key;
  if (FUNC_1(VAR_3, VAR_0, VAR_1, VAR_2) < 0) {
   VAR_2->args[3] = VAR_6;
   FUNC_4();
   return -1;
  }

  ++VAR_6;
  VAR_3 = FUNC_7(VAR_3);
  FUNC_2(&VAR_2->args[4], 0,
         sizeof(VAR_2->args) - 4*sizeof(VAR_2->args[0]));
 }
 VAR_2->args[3] = VAR_6;
 FUNC_4();

 return VAR_1->len;
}
