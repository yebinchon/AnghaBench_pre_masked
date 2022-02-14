
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buf {int b_flags; } ;
struct TYPE_2__ {int td_pflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buf*,int) ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__* VAR_4 ;
 struct buf* FUNC_3 (int *,int ,int ,int,int) ;

struct buf *
FUNC_4(int VAR_5, int VAR_6)
{
 struct buf *VAR_7;
 int VAR_8;

 VAR_8 = (VAR_5 + VAR_0) & ~VAR_0;
 while ((VAR_7 = FUNC_3(((void*)0), 0, 0, VAR_8, VAR_6)) == ((void*)0)) {
  if ((VAR_6 & VAR_2) &&
      (VAR_4->td_pflags & VAR_3) != 0)
   return (((void*)0));
 }
 FUNC_0(VAR_7, VAR_5);
 FUNC_2(FUNC_1(VAR_7), VAR_8);
 VAR_7->b_flags |= VAR_1;
 return (VAR_7);
}
