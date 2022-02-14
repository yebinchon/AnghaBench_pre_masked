
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_3__ {scalar_t__ lno; } ;
typedef int SCR ;
typedef TYPE_1__ MARK ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(SCR *VAR_2, MARK *VAR_3)
{
 recno_t VAR_4;

 if (VAR_3 == ((void*)0))
  FUNC_2(VAR_2, ((void*)0), VAR_1);
 else {
  if (FUNC_0(VAR_2, &VAR_4))
   return;
  if (VAR_3->lno >= VAR_4)
   FUNC_2(VAR_2, ((void*)0), VAR_1);
  else
   FUNC_1(VAR_2, VAR_0, "195|Movement past the end-of-file");
 }
}
