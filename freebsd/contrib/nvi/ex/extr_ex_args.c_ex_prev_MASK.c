
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int iflags; } ;
struct TYPE_16__ {int * cargv; int * argv; } ;
typedef TYPE_1__ SCR ;
typedef int FREF ;
typedef TYPE_2__ EXCMD ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_1__*,int ,scalar_t__,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,int *,size_t) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_9 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_10 (int ) ;

int
FUNC_11(SCR *VAR_8, EXCMD *VAR_9)
{
 FREF *VAR_10;
 size_t VAR_11;
 CHAR_T *VAR_12;

 if (VAR_8->cargv == VAR_8->argv) {
  FUNC_9(VAR_8, VAR_6, "112|No previous files to edit");
  return (1);
 }

 if (FUNC_2(VAR_9, VAR_1)) {
  FUNC_0(VAR_8, VAR_8->cargv[-1], FUNC_10(VAR_8->cargv[-1]) + 1,
       VAR_12, VAR_11);
  if (FUNC_4(VAR_8, VAR_9, VAR_12, VAR_11 - 1))
   return (1);
  return (FUNC_5(VAR_8, VAR_9));
 }

 if (FUNC_8(VAR_8,
     FUNC_1(VAR_9->iflags, VAR_0), VAR_2 | VAR_4))
  return (1);

 if ((VAR_10 = FUNC_6(VAR_8, VAR_8->cargv[-1])) == ((void*)0))
  return (1);

 if (FUNC_7(VAR_8, VAR_10, ((void*)0), VAR_5 |
     (FUNC_1(VAR_9->iflags, VAR_0) ? VAR_3 : 0)))
  return (1);
 --VAR_8->cargv;

 FUNC_3(VAR_8, VAR_7);
 return (0);
}
