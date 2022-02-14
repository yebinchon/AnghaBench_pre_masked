
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ recno_t ;
typedef enum which { ____Placeholder_which } which ;
struct TYPE_14__ {int count; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_15__ {int lno; scalar_t__ cno; int showmode; } ;
typedef TYPE_2__ SCR ;
typedef int CHAR_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int *,int *,size_t,int ,scalar_t__,int,int ) ;

__attribute__((used)) static int
FUNC_8(SCR *VAR_8, VICMD *VAR_9, enum which VAR_10)
{
 recno_t VAR_11, VAR_12;
 size_t VAR_13;
 u_int32_t VAR_14;
 CHAR_T *VAR_15;

 VAR_14 = FUNC_6(VAR_8, VAR_9, VAR_5 | VAR_6);
 VAR_8->showmode = VAR_4;

 if (VAR_8->lno == 1) {
  if (FUNC_5(VAR_8, &VAR_12))
   return (1);
  if (VAR_12 != 0)
   goto insert;
  VAR_15 = ((void*)0);
  VAR_13 = 0;
  VAR_11 = VAR_2;
 } else {
insert: VAR_15 = FUNC_1("");
  VAR_8->cno = 0;
  VAR_1;

  if (VAR_10 == VAR_3) {
   if (FUNC_4(VAR_8, VAR_8->lno, VAR_15, 0))
    return (1);
   if (FUNC_3(VAR_8, VAR_8->lno, VAR_0, &VAR_15, &VAR_13))
    return (1);
   VAR_11 = VAR_8->lno + 1;
  } else {
   if (FUNC_2(VAR_8, 1, VAR_8->lno, VAR_15, 0))
    return (1);
   if (FUNC_3(VAR_8, ++VAR_8->lno, VAR_0, &VAR_15, &VAR_13))
    return (1);
   VAR_11 = VAR_8->lno - 1;
  }
 }
 return (FUNC_7(VAR_8, VAR_9, ((void*)0), VAR_15, VAR_13,
     0, VAR_11, FUNC_0(VAR_9, VAR_7) ? VAR_9->count : 1, VAR_14));
}
