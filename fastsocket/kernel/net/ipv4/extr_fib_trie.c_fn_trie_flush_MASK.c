
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int dummy; } ;
struct leaf {int list; } ;
struct fib_table {scalar_t__ tb_data; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 struct leaf* FUNC_2 (struct trie*) ;
 scalar_t__ FUNC_3 (struct leaf*) ;
 int FUNC_4 (struct trie*,struct leaf*) ;
 struct leaf* FUNC_5 (struct leaf*) ;

__attribute__((used)) static int FUNC_6(struct fib_table *VAR_0)
{
 struct trie *VAR_1 = (struct trie *) VAR_0->tb_data;
 struct leaf *VAR_2, *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 for (VAR_2 = FUNC_2(VAR_1); VAR_2; VAR_2 = FUNC_5(VAR_2)) {
  VAR_4 += FUNC_3(VAR_2);

  if (VAR_3 && FUNC_0(&VAR_3->list))
   FUNC_4(VAR_1, VAR_3);
  VAR_3 = VAR_2;
 }

 if (VAR_3 && FUNC_0(&VAR_3->list))
  FUNC_4(VAR_1, VAR_3);

 FUNC_1("trie_flush found=%d\n", VAR_4);
 return VAR_4;
}
