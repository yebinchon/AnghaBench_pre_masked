
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* rlink; struct TYPE_9__* llink; } ;
typedef TYPE_1__ posix_tnode ;
typedef int (* cmp_fn_t ) (TYPE_1__ const*,int ,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__ const*,int ,int) ;
 int FUNC_1 (TYPE_1__ const*,int ,int) ;
 int FUNC_2 (TYPE_1__ const*,int ,int) ;
 int FUNC_3 (TYPE_1__ const*,int ,int) ;

__attribute__((used)) static void
FUNC_4(const posix_tnode *VAR_4, cmp_fn_t VAR_5, int VAR_6)
{

 if (VAR_4->llink == ((void*)0) && VAR_4->rlink == ((void*)0))
  (*VAR_5)(VAR_4, VAR_1, VAR_6);
 else {
  (*VAR_5)(VAR_4, VAR_3, VAR_6);
  if (VAR_4->llink != ((void*)0))
   FUNC_4(VAR_4->llink, VAR_5, VAR_6 + 1);
  (*VAR_5)(VAR_4, VAR_2, VAR_6);
  if (VAR_4->rlink != ((void*)0))
   FUNC_4(VAR_4->rlink, VAR_5, VAR_6 + 1);
  (*VAR_5)(VAR_4, VAR_0, VAR_6);
 }
}
