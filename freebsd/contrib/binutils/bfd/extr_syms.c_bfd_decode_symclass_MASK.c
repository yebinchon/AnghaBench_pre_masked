
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; TYPE_2__* section; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char FUNC_0 (char) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 char FUNC_5 (int ) ;
 char FUNC_6 (TYPE_2__*) ;

int
FUNC_7 (asymbol *VAR_4)
{
  char VAR_5;

  if (FUNC_2 (VAR_4->section))
    return 'C';
  if (FUNC_4 (VAR_4->section))
    {
      if (VAR_4->flags & VAR_3)
 {


   if (VAR_4->flags & VAR_2)
     return 'v';
   else
     return 'w';
 }
      else
 return 'U';
    }
  if (FUNC_3 (VAR_4->section))
    return 'I';
  if (VAR_4->flags & VAR_3)
    {


      if (VAR_4->flags & VAR_2)
 return 'V';
      else
 return 'W';
    }
  if (!(VAR_4->flags & (VAR_0 | VAR_1)))
    return '?';

  if (FUNC_1 (VAR_4->section))
    VAR_5 = 'a';
  else if (VAR_4->section)
    {
      VAR_5 = FUNC_5 (VAR_4->section->name);
      if (VAR_5 == '?')
 VAR_5 = FUNC_6 (VAR_4->section);
    }
  else
    return '?';
  if (VAR_4->flags & VAR_0)
    VAR_5 = FUNC_0 (VAR_5);
  return VAR_5;
}
