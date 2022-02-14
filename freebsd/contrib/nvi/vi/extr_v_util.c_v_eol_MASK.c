
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t cno; int lno; } ;
typedef int SCR ;
typedef TYPE_1__ MARK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,size_t*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(SCR *VAR_3, MARK *VAR_4)
{
 size_t VAR_5;

 if (VAR_4 == ((void*)0))
  FUNC_2(VAR_3, ((void*)0), VAR_2);
 else {
  if (FUNC_0(VAR_3, VAR_4->lno, VAR_0, ((void*)0), &VAR_5))
   return;
  if (VAR_4->cno == VAR_5 - 1)
   FUNC_2(VAR_3, ((void*)0), VAR_2);
  else
   FUNC_1(VAR_3, VAR_1, "196|Movement past the end-of-line");
 }
}
