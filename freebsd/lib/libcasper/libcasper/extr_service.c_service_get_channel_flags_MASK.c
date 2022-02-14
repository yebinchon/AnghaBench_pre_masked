
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service {scalar_t__ s_magic; int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

int
FUNC_1(struct service *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->s_magic == VAR_2);
 VAR_4 = 0;

 if ((VAR_3->s_flags & VAR_1) != 0)
  VAR_4 |= VAR_0;

 return (VAR_4);
}
