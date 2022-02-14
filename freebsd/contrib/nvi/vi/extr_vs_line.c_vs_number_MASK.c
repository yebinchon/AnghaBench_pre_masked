
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_long ;
typedef int nbuf ;
typedef int VI_PRIVATE ;
struct TYPE_17__ {int (* scr_move ) (TYPE_2__*,size_t,size_t) ;int (* scr_addstr ) (TYPE_2__*,char*,size_t) ;int (* scr_cursor ) (TYPE_2__*,size_t*,size_t*) ;} ;
struct TYPE_16__ {TYPE_3__* gp; } ;
struct TYPE_15__ {int lno; scalar_t__ coff; int soff; } ;
typedef TYPE_1__ SMAP ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 size_t FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (TYPE_2__*,size_t*,size_t*) ;
 int FUNC_6 (TYPE_2__*,int,size_t) ;
 int FUNC_7 (TYPE_2__*,char*,size_t) ;
 int FUNC_8 (TYPE_2__*,size_t,size_t) ;

int
FUNC_9(SCR *VAR_5)
{
 GS *VAR_6;
 SMAP *VAR_7;
 VI_PRIVATE *VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 int VAR_12;
 char VAR_13[10];

 VAR_6 = VAR_5->gp;
 VAR_8 = FUNC_2(VAR_5);


 if (FUNC_0(VAR_5, VAR_3))
  return (0);
 VAR_12 = FUNC_3(VAR_5, VAR_4->lno + 1);

 (void)VAR_6->scr_cursor(VAR_5, &VAR_10, &VAR_11);
 for (VAR_7 = VAR_0; VAR_7 <= VAR_4; ++VAR_7) {

  if (FUNC_1(VAR_5, VAR_1)) {
   if (VAR_7->coff != 0)
    continue;
  } else
   if (VAR_7->soff != 1)
    continue;





  if (VAR_7->lno != 1 && !VAR_12 && !FUNC_3(VAR_5, VAR_7->lno))
   break;

  (void)VAR_6->scr_move(VAR_5, VAR_7 - VAR_0, 0);
  VAR_9 = FUNC_4(VAR_13, sizeof(VAR_13), VAR_2, (u_long)VAR_7->lno);
  (void)VAR_6->scr_addstr(VAR_5, VAR_13, VAR_9);
 }
 (void)VAR_6->scr_move(VAR_5, VAR_10, VAR_11);
 return (0);
}
