
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {int argc; TYPE_1__** argv; } ;
struct TYPE_21__ {char* name; } ;
struct TYPE_20__ {int lno; TYPE_4__* frp; TYPE_2__* gp; } ;
struct TYPE_19__ {int (* scr_rename ) (TYPE_3__*,char*,int) ;} ;
struct TYPE_18__ {int len; int bp; } ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ FREF ;
typedef TYPE_5__ EXCMD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,char*,size_t) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,char*,int) ;
 char* FUNC_10 (TYPE_3__*,char*,size_t) ;

int
FUNC_11(SCR *VAR_4, EXCMD *VAR_5)
{
 char *VAR_6;
 FREF *VAR_7;
 char *VAR_8;
 size_t VAR_9;

 FUNC_4(VAR_4, VAR_5);

 switch (VAR_5->argc) {
 case 0:
  break;
 case 1:
  VAR_7 = VAR_4->frp;


  FUNC_3(VAR_4, VAR_5->argv[0]->bp, VAR_5->argv[0]->len + 1,
       VAR_8, VAR_9);
  if ((VAR_6 = FUNC_10(VAR_4, VAR_8, VAR_9 - 1)) == ((void*)0))
   return (1);


  if (!FUNC_1(VAR_7, VAR_2))
   FUNC_8(VAR_4, VAR_7->name);


  FUNC_6(VAR_7->name);
  VAR_7->name = VAR_6;





  FUNC_0(VAR_7, VAR_1 | VAR_2);


  FUNC_2(VAR_7, VAR_0);


  (void)VAR_4->gp->scr_rename(VAR_4, VAR_4->frp->name, 1);
  break;
 default:
  FUNC_5();
 }
 FUNC_7(VAR_4, VAR_4->lno, VAR_3);
 return (0);
}
