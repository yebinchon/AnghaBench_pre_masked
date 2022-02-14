
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t bfd_error_type ;
struct TYPE_2__ {int filename; } ;


 char const* FUNC_0 (int ) ;
 int FUNC_1 (char**,char const*,int ,char const*) ;
 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;
 char const* FUNC_2 (int) ;

const char *
FUNC_3 (bfd_error_type VAR_6)
{

  extern int VAR_7;

  if (VAR_6 == VAR_2)
    {
      char *VAR_8;
      const char *VAR_9 = FUNC_3 (VAR_5);

      if (FUNC_1 (&VAR_8, FUNC_0(VAR_0 [VAR_6]), VAR_4->filename, VAR_9)
   != -1)
 return VAR_8;


      return VAR_9;
    }

  if (VAR_6 == VAR_3)
    return FUNC_2 (VAR_7);

  if (VAR_6 > VAR_1)
    VAR_6 = VAR_1;

  return FUNC_0(VAR_0 [VAR_6]);
}
