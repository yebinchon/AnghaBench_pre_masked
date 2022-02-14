
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccnode {int * data; int node; } ;
typedef int node_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ccnode*) ;
 int * FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct ccnode*,int ) ;
 struct ccnode* FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(node_p VAR_5)
{
 struct ccnode *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);

 VAR_6->node = VAR_5;
 VAR_6->data = FUNC_1(&VAR_4);
 if (VAR_6->data == ((void*)0)) {
  FUNC_2(VAR_6, VAR_1);
  return (VAR_0);
 }

 FUNC_0(VAR_5, VAR_6);

 return (0);
}
