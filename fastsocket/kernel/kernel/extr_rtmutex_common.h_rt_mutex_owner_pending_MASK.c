
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex {scalar_t__ owner; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct rt_mutex *VAR_1)
{
 return (unsigned long)VAR_1->owner & VAR_0;
}
