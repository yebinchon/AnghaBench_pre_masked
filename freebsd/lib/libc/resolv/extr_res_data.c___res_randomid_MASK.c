
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef TYPE_1__* res_state ;
struct TYPE_5__ {unsigned int options; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

u_int
FUNC_3(void) {
 res_state VAR_3 = &VAR_2;
 if ((VAR_3->options & VAR_1) == 0U && FUNC_1() == -1) {
  FUNC_0(VAR_3, VAR_0);
  return (-1);
 }

 return (FUNC_2(VAR_3));
}
