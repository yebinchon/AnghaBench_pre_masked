
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {scalar_t__ col; int flags; scalar_t__ bufcol; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (char) ;
 int VAR_2 ;

void
FUNC_2(struct html *VAR_3)
{
 if (VAR_3->col == 0)
  return;

 if (VAR_3->bufcol) {
  FUNC_1(' ');
  FUNC_0(VAR_3->buf, VAR_3->bufcol, 1, VAR_2);
  VAR_3->bufcol = 0;
 }
 FUNC_1('\n');
 VAR_3->col = 0;
 VAR_3->flags |= VAR_1;
 VAR_3->flags &= ~VAR_0;
}
