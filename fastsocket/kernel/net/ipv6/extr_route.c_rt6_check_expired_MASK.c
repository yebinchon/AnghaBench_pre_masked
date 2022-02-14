
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_flags; int rt6i_expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static __inline__ int FUNC_1(const struct rt6_info *VAR_2)
{
 return (VAR_2->rt6i_flags & VAR_0 &&
  FUNC_0(VAR_1, VAR_2->rt6i_expires));
}
