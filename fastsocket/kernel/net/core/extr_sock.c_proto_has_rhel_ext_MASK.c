
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto {int slab_flags; int rhel_flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct proto *VAR_1, int VAR_2)
{
 return (VAR_1->slab_flags & VAR_0) &&
        (VAR_1->rhel_flags & VAR_2);
}
