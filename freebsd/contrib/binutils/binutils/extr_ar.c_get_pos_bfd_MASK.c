
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum pos { ____Placeholder_pos } pos ;
struct TYPE_4__ {struct TYPE_4__* archive_next; int filename; } ;
typedef TYPE_1__ bfd ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bfd **
FUNC_1 (bfd **VAR_5, enum pos VAR_6, const char *VAR_7)
{
  bfd **VAR_8 = VAR_5;
  enum pos VAR_9;
  const char *VAR_10;

  if (VAR_4 == VAR_1)
    {
      VAR_9 = VAR_6;
      VAR_10 = VAR_7;
    }
  else
    {
      VAR_9 = VAR_4;
      VAR_10 = VAR_3;
    }

  if (VAR_9 == VAR_2)
    {
      while (*VAR_8)
 VAR_8 = &((*VAR_8)->archive_next);
    }
  else
    {
      for (; *VAR_8; VAR_8 = &(*VAR_8)->archive_next)
 if (FUNC_0 ((*VAR_8)->filename, VAR_10) == 0)
   {
     if (VAR_9 == VAR_0)
       VAR_8 = &(*VAR_8)->archive_next;
     break;
   }
    }
  return VAR_8;
}
