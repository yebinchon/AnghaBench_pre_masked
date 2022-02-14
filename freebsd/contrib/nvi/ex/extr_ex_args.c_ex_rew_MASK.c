
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int iflags; } ;
struct TYPE_10__ {int * cargv; int * argv; } ;
typedef TYPE_1__ SCR ;
typedef int FREF ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;

int
FUNC_6(SCR *VAR_8, EXCMD *VAR_9)
{
 FREF *VAR_10;





 if (VAR_8->argv == ((void*)0)) {
  FUNC_5(VAR_8, VAR_5, "113|No previous files to rewind");
  return (1);
 }

 if (FUNC_4(VAR_8,
     FUNC_0(VAR_9->iflags, VAR_0), VAR_1 | VAR_3))
  return (1);


 VAR_8->cargv = VAR_8->argv;
 if ((VAR_10 = FUNC_2(VAR_8, *VAR_8->cargv)) == ((void*)0))
  return (1);
 if (FUNC_3(VAR_8, VAR_10, ((void*)0), VAR_4 |
     (FUNC_0(VAR_9->iflags, VAR_0) ? VAR_2 : 0)))
  return (1);


 FUNC_1(VAR_8, VAR_6 | VAR_7);

 return (0);
}
