
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int v_iflag; } ;
typedef TYPE_1__ vnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(vnode_t *VAR_6, int VAR_7)
{
 FUNC_3(VAR_6);
 if (VAR_7 != FUNC_1(VAR_6)) {
  if (VAR_7 == VAR_2)
   FUNC_2(VAR_6, VAR_4 | VAR_3);
  else
   FUNC_2(VAR_6, VAR_1 | VAR_3);


  if ((VAR_6->v_iflag & VAR_5) != 0) {
   FUNC_4(VAR_6);
   return (FUNC_0(VAR_0));
  }
 }
 return (0);
}
