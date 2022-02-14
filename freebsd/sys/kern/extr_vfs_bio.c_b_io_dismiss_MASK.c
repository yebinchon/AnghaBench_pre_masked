
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_flags; int b_dep; int b_xflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;

__attribute__((used)) static void
FUNC_4(struct buf *VAR_8, int VAR_9, bool VAR_10)
{

 FUNC_0((VAR_9 & VAR_6) == 0 || (VAR_9 & VAR_7) != 0,
     ("buf %p non-VMIO noreuse", VAR_8));

 if ((VAR_9 & VAR_4) != 0)
  VAR_8->b_flags |= VAR_1;
 if ((VAR_9 & VAR_5) != 0)
  VAR_8->b_xflags |= VAR_0;
 if ((VAR_9 & (VAR_7 | VAR_4)) != 0 && FUNC_1(&VAR_8->b_dep)) {
  VAR_8->b_flags |= VAR_3;
  if ((VAR_9 & VAR_6) != 0)
   VAR_8->b_flags |= VAR_2;
  if (VAR_10)
   FUNC_3(VAR_8);
 } else if (VAR_10)
  FUNC_2(VAR_8);
}
