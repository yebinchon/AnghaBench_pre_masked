
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int flags; int col; int* fontq; size_t fonti; TYPE_1__* tcol; int (* letter ) (struct termp*,int) ;} ;
typedef enum termfont { ____Placeholder_termfont } termfont ;
struct TYPE_2__ {int maxcols; char* buf; int lastcol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct termp*,int) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_9, int VAR_10)
{
 enum termfont VAR_11;

 if (VAR_9->flags & VAR_8) {
  (*VAR_9->letter)(VAR_9, VAR_10);
  return;
 }

 if (VAR_9->col + 7 >= VAR_9->tcol->maxcols)
  FUNC_0(VAR_9->tcol, VAR_9->col + 7);

 VAR_11 = (VAR_10 == VAR_0 || VAR_10 > 127 || FUNC_1(VAR_10)) ?
     VAR_9->fontq[VAR_9->fonti] : VAR_4;

 if (VAR_9->flags & VAR_7) {
  if (VAR_9->tcol->buf[VAR_9->col - 1] == ' ' ||
      VAR_9->tcol->buf[VAR_9->col - 1] == '\t')
   VAR_9->col--;
  else
   VAR_9->tcol->buf[VAR_9->col++] = '\b';
  VAR_9->flags &= ~VAR_7;
 }
 if (VAR_11 == VAR_5 || VAR_11 == VAR_2) {
  VAR_9->tcol->buf[VAR_9->col++] = '_';
  VAR_9->tcol->buf[VAR_9->col++] = '\b';
 }
 if (VAR_11 == VAR_3 || VAR_11 == VAR_2) {
  if (VAR_10 == VAR_0)
   VAR_9->tcol->buf[VAR_9->col++] = '-';
  else
   VAR_9->tcol->buf[VAR_9->col++] = VAR_10;
  VAR_9->tcol->buf[VAR_9->col++] = '\b';
 }
 if (VAR_9->tcol->lastcol <= VAR_9->col || (VAR_10 != ' ' && VAR_10 != VAR_1))
  VAR_9->tcol->buf[VAR_9->col] = VAR_10;
 if (VAR_9->tcol->lastcol < ++VAR_9->col)
  VAR_9->tcol->lastcol = VAR_9->col;
 if (VAR_9->flags & VAR_6) {
  VAR_9->flags |= VAR_7;
  VAR_9->flags &= ~VAR_6;
 }
}
