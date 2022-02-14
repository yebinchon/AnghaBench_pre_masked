
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_command {unsigned int gc_flags; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned
FUNC_0(struct g_command *VAR_2)
{
 unsigned VAR_3 = 0;

 if ((VAR_2->gc_flags & VAR_0) != 0 && VAR_1)
  VAR_3 |= VAR_0;

 return (VAR_3);
}
