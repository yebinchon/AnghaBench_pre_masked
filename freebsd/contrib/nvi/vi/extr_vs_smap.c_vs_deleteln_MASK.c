
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int (* scr_move ) (TYPE_1__*,size_t,size_t) ;int (* scr_insertln ) (TYPE_1__*) ;int (* scr_deleteln ) (TYPE_1__*) ;int (* scr_cursor ) (TYPE_1__*,size_t*,size_t*) ;int (* scr_clrtoeol ) (TYPE_1__*) ;} ;
struct TYPE_14__ {TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,size_t*,size_t*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,size_t,size_t) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,size_t,size_t) ;

__attribute__((used)) static int
FUNC_10(SCR *VAR_1, int VAR_2)
{
 GS *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = VAR_1->gp;


 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_1, VAR_0);
  return (0);
 }

 if (FUNC_1(VAR_1))
  (void)VAR_3->scr_clrtoeol(VAR_1);
 else {
  (void)VAR_3->scr_cursor(VAR_1, &VAR_4, &VAR_5);
  while (VAR_2--) {
   (void)VAR_3->scr_deleteln(VAR_1);
   (void)VAR_3->scr_move(VAR_1, FUNC_3(VAR_1), 0);
   (void)VAR_3->scr_insertln(VAR_1);
   (void)VAR_3->scr_move(VAR_1, VAR_4, VAR_5);
  }
 }
 return (0);
}
