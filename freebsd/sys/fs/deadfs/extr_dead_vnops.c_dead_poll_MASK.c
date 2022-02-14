
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_poll_args {int a_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(struct vop_poll_args *VAR_5)
{

 if (VAR_5->a_events & ~VAR_4)
  return (VAR_2);




 return (VAR_0 | ((VAR_1 | VAR_3) & VAR_5->a_events));

}
