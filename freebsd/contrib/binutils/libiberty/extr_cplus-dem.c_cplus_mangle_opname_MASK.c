
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* out; int flags; char const* in; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char const*) ;

const char *
FUNC_3 (const char *VAR_2, int VAR_3)
{
  size_t VAR_4;
  int VAR_5;

  VAR_5 = FUNC_2 (VAR_2);
  for (VAR_4 = 0; VAR_4 < FUNC_0 (VAR_1); VAR_4++)
    {
      if ((int) FUNC_2 (VAR_1[VAR_4].out) == VAR_5
   && (VAR_3 & VAR_0) == (VAR_1[VAR_4].flags & VAR_0)
   && FUNC_1 (VAR_1[VAR_4].out, VAR_2, VAR_5) == 0)
 return VAR_1[VAR_4].in;
    }
  return (0);
}
