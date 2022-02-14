
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ reg; } ;


 scalar_t__ FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char const*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (TYPE_1__*,char,int) ;

__attribute__((used)) static void
FUNC_5 (enum neon_shape VAR_4, int VAR_5)
{
  const char *VAR_6 = 0;

  if (VAR_4 == VAR_0 || VAR_4 == VAR_2 || VAR_4 == VAR_1)
    {

      const char *VAR_7[] =
        {
          "ftosls",
          "ftouls",
          "fsltos",
          "fultos",
          ((void*)0),
          ((void*)0),
          "ftosld",
          "ftould",
          "fsltod",
          "fultod",
          "fshtos",
          "fuhtos",
          "fshtod",
          "fuhtod",
          "ftoshs",
          "ftouhs",
          "ftoshd",
          "ftouhd"
        };

      if (VAR_5 >= 0 && VAR_5 < (int) FUNC_0 (VAR_7))
        {
          VAR_6 = VAR_7[VAR_5];
          FUNC_2 (VAR_3.operands[0].reg != VAR_3.operands[1].reg,
                      FUNC_1("operands 0 and 1 must be the same register"));
          VAR_3.operands[1] = VAR_3.operands[2];
          FUNC_4 (&VAR_3.operands[2], '\0', sizeof (VAR_3.operands[2]));
        }
    }
  else
    {

      const char *VAR_8[] =
        {
          "ftosizs",
          "ftouizs",
          "fsitos",
          "fuitos",
          "fcvtsd",
          "fcvtds",
          "ftosizd",
          "ftouizd",
          "fsitod",
          "fuitod"
        };

      if (VAR_5 >= 0 && VAR_5 < (int) FUNC_0 (VAR_8))
        VAR_6 = VAR_8[VAR_5];
    }

  if (VAR_6)
    FUNC_3 (VAR_6);
}
