
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int flags; int col; TYPE_1__* tcol; int (* letter ) (struct termp*,char) ;} ;
struct TYPE_2__ {int maxcols; int lastcol; char* buf; } ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct termp*,char) ;

__attribute__((used)) static void
FUNC_2(struct termp *VAR_2, char VAR_3)
{
 if (VAR_2->flags & VAR_1) {
  (*VAR_2->letter)(VAR_2, VAR_3);
  return;
 }
 if (VAR_2->col + 1 >= VAR_2->tcol->maxcols)
  FUNC_0(VAR_2->tcol, VAR_2->col + 1);
 if (VAR_2->tcol->lastcol <= VAR_2->col || (VAR_3 != ' ' && VAR_3 != VAR_0))
  VAR_2->tcol->buf[VAR_2->col] = VAR_3;
 if (VAR_2->tcol->lastcol < ++VAR_2->col)
  VAR_2->tcol->lastcol = VAR_2->col;
}
