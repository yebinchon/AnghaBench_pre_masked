
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_flags; int b_bufsize; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct buf *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0((VAR_2->b_flags & VAR_0) != 0,
     ("bufmallocadjust: non-malloc buf %p", VAR_2));
 VAR_4 = VAR_3 - VAR_2->b_bufsize;
 if (VAR_4 < 0)
  FUNC_2(&VAR_1, -VAR_4);
 else
  FUNC_1(&VAR_1, VAR_4);
 VAR_2->b_bufsize = VAR_3;
}
