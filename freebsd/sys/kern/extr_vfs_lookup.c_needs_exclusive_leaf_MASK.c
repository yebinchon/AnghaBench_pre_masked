
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mount*) ;

__attribute__((used)) static __inline int
FUNC_1(struct mount *VAR_4, int VAR_5)
{





 if ((VAR_5 & (VAR_0 | VAR_2)) != (VAR_0 | VAR_2))
  return (0);


 if (!(VAR_5 & VAR_3))
  return (1);






 if ((VAR_5 & VAR_1) != 0)
  return (!FUNC_0(VAR_4));





 return (0);
}
