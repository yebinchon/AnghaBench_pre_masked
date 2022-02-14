
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_2__ expressionS ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ pc_rel; int exp; } ;
struct TYPE_8__ {TYPE_1__ reloc; void* error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t) ;
 int FUNC_2 (void*,...) ;
 int FUNC_3 (void*) ;
 TYPE_5__ VAR_5 ;
 int FUNC_4 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char**,int ) ;
 char** VAR_6 ;
 int FUNC_6 (char**) ;

__attribute__((used)) static long
FUNC_7 (char ** VAR_7)
{
  char * VAR_8 = * VAR_7;
  long VAR_9 = 0;
  int VAR_10;


  do
    {
      VAR_10 = 0;

      if (*VAR_8 == '{')
 {
   int VAR_11 = 0;
   int VAR_12 = -1;

   VAR_8++;
   do
     {
       int VAR_13;

       if ((VAR_13 = FUNC_1 (&VAR_8, VAR_4)) == VAR_1)
  {
    FUNC_3 (FUNC_0(VAR_6[VAR_4]));
    return VAR_1;
  }

       if (VAR_11)
  {
    int VAR_14;

    if (VAR_13 <= VAR_12)
      {
        FUNC_3 (FUNC_0("bad range in register list"));
        return VAR_1;
      }

    for (VAR_14 = VAR_12 + 1; VAR_14 < VAR_13; VAR_14++)
      {
        if (VAR_9 & (1 << VAR_14))
   FUNC_2
     (FUNC_0("Warning: duplicated register (r%d) in register list"),
      VAR_14);
        else
   VAR_9 |= 1 << VAR_14;
      }
    VAR_11 = 0;
  }

       if (VAR_9 & (1 << VAR_13))
  FUNC_2 (FUNC_0("Warning: duplicated register (r%d) in register list"),
      VAR_13);
       else if (VAR_13 <= VAR_12)
  FUNC_2 (FUNC_0("Warning: register range not in ascending order"));

       VAR_9 |= 1 << VAR_13;
       VAR_12 = VAR_13;
     }
   while (FUNC_6 (&VAR_8) != VAR_1
   || (VAR_11 = 1, *VAR_8++ == '-'));
   VAR_8--;

   if (*VAR_8++ != '}')
     {
       FUNC_3 (FUNC_0("missing `}'"));
       return VAR_1;
     }
 }
      else
 {
   expressionS VAR_15;

   if (FUNC_5 (&VAR_15, &VAR_8, VAR_2))
     return VAR_1;

   if (VAR_15.X_op == VAR_3)
     {
       if (VAR_15.X_add_number
    != (VAR_15.X_add_number & 0x0000ffff))
  {
    VAR_5.error = FUNC_0("invalid register mask");
    return VAR_1;
  }

       if ((VAR_9 & VAR_15.X_add_number) != 0)
  {
    int VAR_16 = VAR_9 & VAR_15.X_add_number;

    VAR_16 &= -VAR_16;
    VAR_16 = (1 << VAR_16) - 1;
    FUNC_2
      (FUNC_0("Warning: duplicated register (r%d) in register list"),
       VAR_16);
  }

       VAR_9 |= VAR_15.X_add_number;
     }
   else
     {
       if (VAR_5.reloc.type != 0)
  {
    VAR_5.error = FUNC_0("expression too complex");
    return VAR_1;
  }

       FUNC_4 (&VAR_5.reloc.exp, &VAR_15, sizeof (expressionS));
       VAR_5.reloc.type = VAR_0;
       VAR_5.reloc.pc_rel = 0;
     }
 }

      if (*VAR_8 == '|' || *VAR_8 == '+')
 {
   VAR_8++;
   VAR_10 = 1;
 }
    }
  while (VAR_10);

  *VAR_7 = VAR_8;
  return VAR_9;
}
