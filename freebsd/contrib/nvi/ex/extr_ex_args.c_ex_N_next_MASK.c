
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int iflags; TYPE_1__** argv; } ;
struct TYPE_19__ {struct TYPE_19__* nextdisp; int argv; int cargv; int gp; } ;
struct TYPE_18__ {scalar_t__ len; int bp; } ;
typedef TYPE_2__ SCR ;
typedef int FREF ;
typedef TYPE_3__ EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int *) ;
 int * FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*,TYPE_2__**) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_10(SCR *VAR_4, EXCMD *VAR_5)
{
 SCR *VAR_6;
 FREF *VAR_7;
 char *VAR_8;
 size_t VAR_9;


 if (FUNC_7(VAR_4->gp, VAR_4, &VAR_6))
  return (1);
 if (FUNC_9(VAR_4, VAR_6, 0)) {
  (void)FUNC_6(VAR_6);
  return (1);
 }


 FUNC_2(VAR_4, VAR_5->argv[0]->bp, VAR_5->argv[0]->len + 1, VAR_8, VAR_9);
 if ((VAR_7 = FUNC_4(VAR_6, VAR_8)) == ((void*)0) ||
     FUNC_5(VAR_6, VAR_7, ((void*)0),
     (FUNC_0(VAR_5->iflags, VAR_0) ? VAR_1 : 0))) {
  (void)FUNC_8(VAR_6, ((void*)0));
  (void)FUNC_6(VAR_6);
  return (1);
 }


 VAR_6->cargv = VAR_6->argv = FUNC_3(VAR_4, VAR_5, ((void*)0));


 FUNC_1(VAR_6, VAR_3);


 VAR_4->nextdisp = VAR_6;
 FUNC_1(VAR_4, VAR_2);

 return (0);
}
