
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_open_args {int a_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_open_args *VAR_2)
{
 int VAR_3 = VAR_2->a_mode;

 if (VAR_3 & VAR_1)
  return (FUNC_0(VAR_0));

 return (0);
}
