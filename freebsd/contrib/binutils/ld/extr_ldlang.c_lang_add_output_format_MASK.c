
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ endian; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 char const* VAR_3 ;

void
FUNC_0 (const char *VAR_4,
   const char *VAR_5,
   const char *VAR_6,
   int VAR_7)
{
  if (VAR_3 == ((void*)0) || !VAR_7)
    {
      if (VAR_2.endian == VAR_0
   && VAR_5 != ((void*)0))
 VAR_4 = VAR_5;
      else if (VAR_2.endian == VAR_1
        && VAR_6 != ((void*)0))
 VAR_4 = VAR_6;

      VAR_3 = VAR_4;
    }
}
