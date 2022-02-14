
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {int flags; int col; int bufcol; char* buf; int indent; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (struct html*) ;
 int FUNC_2 (char) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct html *VAR_2, char VAR_3)
{
 if ((VAR_2->flags & VAR_0) == 0) {
  FUNC_2(VAR_3);
  VAR_2->col++;
  return;
 }

 if (VAR_2->col + VAR_2->bufcol < sizeof(VAR_2->buf)) {
  VAR_2->buf[VAR_2->bufcol++] = VAR_3;
  return;
 }

 FUNC_2('\n');
 VAR_2->col = 0;
 FUNC_1(VAR_2);
 FUNC_2(' ');
 FUNC_2(' ');
 FUNC_0(VAR_2->buf, VAR_2->bufcol, 1, VAR_1);
 FUNC_2(VAR_3);
 VAR_2->col = (VAR_2->indent + 1) * 2 + VAR_2->bufcol + 1;
 VAR_2->bufcol = 0;
 VAR_2->flags &= ~VAR_0;
}
