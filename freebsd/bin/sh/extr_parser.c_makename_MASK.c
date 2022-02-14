
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int backquote; int text; int * next; } ;
union node {TYPE_1__ narg; int type; } ;
struct narg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static union node *
FUNC_1(void)
{
 union node *VAR_3;

 VAR_3 = (union node *)FUNC_0(sizeof (struct narg));
 VAR_3->type = VAR_0;
 VAR_3->narg.next = ((void*)0);
 VAR_3->narg.text = VAR_2;
 VAR_3->narg.backquote = VAR_1;
 return VAR_3;
}
