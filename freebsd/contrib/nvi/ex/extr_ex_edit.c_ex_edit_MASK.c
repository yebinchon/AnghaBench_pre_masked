
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int argc; int iflags; int * cmd; TYPE_1__** argv; } ;
struct TYPE_20__ {int * ep; TYPE_3__* frp; } ;
struct TYPE_19__ {int len; int bp; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ FREF ;
typedef TYPE_3__ EXCMD ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,char*,size_t) ;
 int VAR_6 ;
 int FUNC_4 () ;
 int * VAR_7 ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_3__*,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,char*) ;

int
FUNC_10(SCR *VAR_8, EXCMD *VAR_9)
{
 FREF *VAR_10;
 int VAR_11, VAR_12;
 char *VAR_13;
 size_t VAR_14;

 switch (VAR_9->argc) {
 case 0:







  VAR_10 = VAR_8->frp;
  if (VAR_8->ep == ((void*)0) || FUNC_1(VAR_10, VAR_3)) {
   if ((VAR_10 = FUNC_6(VAR_8, ((void*)0))) == ((void*)0))
    return (1);
   VAR_11 = 0;
  } else
   VAR_11 = 1;
  VAR_12 = 0;
  break;
 case 1:
  FUNC_3(VAR_8, VAR_9->argv[0]->bp, VAR_9->argv[0]->len + 1,
    VAR_13, VAR_14);
  if ((VAR_10 = FUNC_6(VAR_8, VAR_13)) == ((void*)0))
   return (1);
  VAR_11 = 0;
  VAR_12 = 1;
  FUNC_9(VAR_8, VAR_13);
  break;
 default:
  FUNC_4();
 }

 if (FUNC_1(VAR_9, VAR_2) || VAR_9->cmd == &VAR_7[VAR_0])
  return (FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11));







 if (FUNC_8(VAR_8, FUNC_0(VAR_9->iflags, VAR_1)))
  return (1);


 if (FUNC_7(VAR_8, VAR_10, ((void*)0), (VAR_12 ? VAR_5 : 0) |
     (FUNC_0(VAR_9->iflags, VAR_1) ? VAR_4 : 0)))
  return (1);

 FUNC_2(VAR_8, VAR_6);
 return (0);
}
