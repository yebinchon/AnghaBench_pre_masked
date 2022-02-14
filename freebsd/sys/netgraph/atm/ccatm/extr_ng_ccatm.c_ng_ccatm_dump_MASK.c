
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ccnode {int dump; int * dump_last; struct mbuf* dump_first; int data; } ;
typedef int node_p ;


 int VAR_0 ;
 struct ccnode* FUNC_0 (int ) ;
 int FUNC_1 (int,int ,struct mbuf*) ;
 int FUNC_2 (int ,int ,int ,struct ccnode*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(node_p VAR_2)
{
 struct ccnode *VAR_3 = FUNC_0(VAR_2);
 struct mbuf *VAR_4;
 int VAR_5;

 VAR_3->dump_first = VAR_3->dump_last = ((void*)0);
 VAR_5 = FUNC_2(VAR_3->data, VAR_0, VAR_1, VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);

 if ((VAR_4 = VAR_3->dump_first) != ((void*)0)) {
  VAR_3->dump_first = VAR_3->dump_last = ((void*)0);
  FUNC_1(VAR_5, VAR_3->dump, VAR_4);
  return (VAR_5);
 }
 return (0);
}
