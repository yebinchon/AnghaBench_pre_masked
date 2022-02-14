
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int flags; int col; TYPE_1__* tcol; int (* letter ) (struct termp*,char const) ;} ;
struct TYPE_2__ {int maxcols; int lastcol; char* buf; } ;


 char const VAR_0 ;
 char const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct termp*,char const) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (struct termp*,char const) ;

__attribute__((used)) static void
FUNC_4(struct termp *VAR_5, const char *VAR_6, size_t VAR_7)
{
 size_t VAR_8;

 if (VAR_5->flags & VAR_4) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   (*VAR_5->letter)(VAR_5, VAR_6[VAR_8]);
  return;
 }

 if (VAR_5->col + 2 + (VAR_7 * 5) >= VAR_5->tcol->maxcols)
  FUNC_0(VAR_5->tcol, VAR_5->col + 2 + (VAR_7 * 5));

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_0 == VAR_6[VAR_8] ||
      FUNC_2((unsigned char)VAR_6[VAR_8]))
   FUNC_1(VAR_5, VAR_6[VAR_8]);
  else {
   if (VAR_5->tcol->lastcol <= VAR_5->col ||
       (VAR_6[VAR_8] != ' ' && VAR_6[VAR_8] != VAR_1))
    VAR_5->tcol->buf[VAR_5->col] = VAR_6[VAR_8];
   VAR_5->col++;






   if (VAR_6[VAR_8] == '\b' &&
       (VAR_5->flags & VAR_3)) {
    VAR_5->flags &= ~VAR_3;
    VAR_5->flags |= VAR_2;
   }
  }
 }
 if (VAR_5->tcol->lastcol < VAR_5->col)
  VAR_5->tcol->lastcol = VAR_5->col;
}
