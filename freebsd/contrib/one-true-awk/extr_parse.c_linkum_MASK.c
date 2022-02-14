
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* nnext; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;

Node *FUNC_0(Node *VAR_1, Node *VAR_2)
{
 Node *VAR_3;

 if (VAR_0)
  return VAR_1;
 if (VAR_1 == ((void*)0))
  return(VAR_2);
 else if (VAR_2 == ((void*)0))
  return(VAR_1);
 for (VAR_3 = VAR_1; VAR_3->nnext != ((void*)0); VAR_3 = VAR_3->nnext)
  ;
 VAR_3->nnext = VAR_2;
 return(VAR_1);
}
