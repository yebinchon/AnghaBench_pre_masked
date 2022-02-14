
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_eq {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(struct sge_eq *VAR_2)
{

 return ((VAR_2->flags & (VAR_0 | VAR_1)) != VAR_0);
}
