
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* scr_clrtoeol ) (TYPE_1__*) ;int (* scr_move ) (TYPE_1__*,scalar_t__,int ) ;} ;
struct TYPE_9__ {scalar_t__ t_rows; scalar_t__ t_minrows; TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(SCR *VAR_2)
{
 GS *VAR_3;

 VAR_3 = VAR_2->gp;
 (void)VAR_3->scr_move(VAR_2, FUNC_0(VAR_2), 0);
 (void)VAR_3->scr_clrtoeol(VAR_2);
 for (; VAR_2->t_rows > VAR_2->t_minrows; --VAR_2->t_rows, --VAR_1) {
  (void)VAR_3->scr_move(VAR_2, VAR_1 - VAR_0, 0);
  (void)VAR_3->scr_clrtoeol(VAR_2);
 }
 return (0);
}
