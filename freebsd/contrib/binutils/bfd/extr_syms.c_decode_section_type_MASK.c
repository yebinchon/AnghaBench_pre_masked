
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_section {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static char
FUNC_0 (const struct bfd_section *VAR_6)
{
  if (VAR_6->flags & VAR_0)
    return 't';
  if (VAR_6->flags & VAR_1)
    {
      if (VAR_6->flags & VAR_4)
 return 'r';
      else if (VAR_6->flags & VAR_5)
 return 'g';
      else
 return 'd';
    }
  if ((VAR_6->flags & VAR_3) == 0)
    {
      if (VAR_6->flags & VAR_5)
 return 's';
      else
 return 'b';
    }
  if (VAR_6->flags & VAR_2)
    return 'N';
  if ((VAR_6->flags & VAR_3) && (VAR_6->flags & VAR_4))
    return 'n';

  return '?';
}
