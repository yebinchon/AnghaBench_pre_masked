
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {int flags; scalar_t__ bufcol; scalar_t__ col; int buf; scalar_t__ noindent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct html*,char) ;
 int FUNC_2 (char) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct html *VAR_2)
{
 if (VAR_2->noindent) {
  FUNC_1(VAR_2, ' ');
  return;
 }

 if ((VAR_2->flags & VAR_0) == 0) {
  VAR_2->col++;
  VAR_2->flags |= VAR_0;
 } else if (VAR_2->bufcol) {
  FUNC_2(' ');
  FUNC_0(VAR_2->buf, VAR_2->bufcol, 1, VAR_1);
  VAR_2->col += VAR_2->bufcol + 1;
 }
 VAR_2->bufcol = 0;
}
