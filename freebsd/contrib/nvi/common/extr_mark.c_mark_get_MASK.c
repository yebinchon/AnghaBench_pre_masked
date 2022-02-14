
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mtype_t ;
struct TYPE_7__ {scalar_t__ name; int lno; scalar_t__ cno; } ;
struct TYPE_6__ {int lno; scalar_t__ cno; } ;
typedef int SCR ;
typedef TYPE_1__ MARK ;
typedef TYPE_2__ LMARK ;
typedef scalar_t__ ARG_CHAR_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ,char*,int ) ;

int
FUNC_5(
 SCR *VAR_3,
 ARG_CHAR_T VAR_4,
 MARK *VAR_5,
 mtype_t VAR_6)
{
 LMARK *VAR_7;

 if (VAR_4 == VAR_1)
  VAR_4 = VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_7 == ((void*)0) || VAR_7->name != VAR_4) {
  FUNC_4(VAR_3, VAR_6, "017|Mark %s: not set", FUNC_1(VAR_3, VAR_4));
  return (1);
 }
 if (FUNC_0(VAR_7, VAR_2)) {
  FUNC_4(VAR_3, VAR_6,
      "018|Mark %s: the line was deleted", FUNC_1(VAR_3, VAR_4));
  return (1);
 }






 if ((VAR_7->lno != 1 || VAR_7->cno != 0) && !FUNC_2(VAR_3, VAR_7->lno)) {
  FUNC_4(VAR_3, VAR_6,
      "019|Mark %s: cursor position no longer exists",
      FUNC_1(VAR_3, VAR_4));
  return (1);
 }
 VAR_5->lno = VAR_7->lno;
 VAR_5->cno = VAR_7->cno;
 return (0);
}
