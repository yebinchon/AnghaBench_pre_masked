
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lineno; int * nnext; } ;
typedef TYPE_1__ Node ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

Node *FUNC_2(int VAR_1)
{
 Node *VAR_2;

 VAR_2 = (Node *) FUNC_1(sizeof(Node) + (VAR_1-1)*sizeof(Node *));
 if (VAR_2 == ((void*)0))
  FUNC_0("out of space in nodealloc");
 VAR_2->nnext = ((void*)0);
 VAR_2->lineno = VAR_0;
 return(VAR_2);
}
