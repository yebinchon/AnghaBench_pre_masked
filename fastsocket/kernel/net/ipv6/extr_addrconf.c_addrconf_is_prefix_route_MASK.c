
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct rt6_info *VAR_2)
{
 return ((VAR_2->rt6i_flags & (VAR_1 | VAR_0)) == 0);
}
