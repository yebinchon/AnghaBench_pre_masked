
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ sw_t ;
struct TYPE_15__ {scalar_t__ totalcount; scalar_t__ linecount; } ;
typedef TYPE_1__ VI_PRIVATE ;
struct TYPE_17__ {int (* scr_insertln ) (TYPE_2__*) ;int (* scr_move ) (TYPE_2__*,scalar_t__,int ) ;int (* scr_deleteln ) (TYPE_2__*) ;} ;
struct TYPE_16__ {scalar_t__ rows; scalar_t__ t_maxrows; TYPE_3__* gp; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int*,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(SCR *VAR_2, int *VAR_3, sw_t VAR_4)
{
 GS *VAR_5;
 VI_PRIVATE *VAR_6;

 VAR_5 = VAR_2->gp;
 VAR_6 = FUNC_3(VAR_2);
 if (!FUNC_0(VAR_2)) {





  (void)VAR_5->scr_move(VAR_2, VAR_6->totalcount <
      VAR_2->rows ? FUNC_1(VAR_2) - VAR_6->totalcount : 0, 0);
  (void)VAR_5->scr_deleteln(VAR_2);


  if (FUNC_2(VAR_2, VAR_1) != ((void*)0)) {
   (void)VAR_5->scr_move(VAR_2, FUNC_1(VAR_2), 0);
   (void)VAR_5->scr_insertln(VAR_2);
  }
 }
 if (VAR_4 == VAR_0 && VAR_6->linecount < VAR_2->t_maxrows)
  return;
 FUNC_8(VAR_2, VAR_3, VAR_4);
}
