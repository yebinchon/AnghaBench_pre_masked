
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* error; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char**,int*,int ,int,int ) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3 (char **VAR_3)
{
  int VAR_4;
  char *VAR_5 = *VAR_3;

  if (FUNC_2 (VAR_5, "ROR", 3) == 0)
    VAR_5 += 3;
  else
    {
      VAR_2.error = FUNC_0("missing rotation field after comma");
      return VAR_0;
    }

  if (FUNC_1 (&VAR_5, &VAR_4, 0, 24, VAR_1) == VAR_0)
    return VAR_0;

  switch (VAR_4)
    {
    case 0: *VAR_3 = VAR_5; return 0x0;
    case 8: *VAR_3 = VAR_5; return 0x1;
    case 16: *VAR_3 = VAR_5; return 0x2;
    case 24: *VAR_3 = VAR_5; return 0x3;

    default:
      VAR_2.error = FUNC_0("rotation can only be 0, 8, 16, or 24");
      return VAR_0;
    }
}
