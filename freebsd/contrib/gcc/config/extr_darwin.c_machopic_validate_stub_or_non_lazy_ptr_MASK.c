
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {int used; int symbol; } ;
typedef TYPE_1__ machopic_indirection ;
struct TYPE_4__ {char* (* strip_name_encoding ) (int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (int ) ;
 TYPE_2__ VAR_1 ;

void
FUNC_8 (const char *VAR_2)
{
  machopic_indirection *VAR_3;

  VAR_3 = ((machopic_indirection *)
       (FUNC_2 (VAR_0, VAR_2,
        FUNC_3 (VAR_2))));
  if (VAR_3 && ! VAR_3->used)
    {
      const char *VAR_4;
      tree VAR_5;

      VAR_3->used = 1;


      if (FUNC_0 (VAR_3->symbol))
 FUNC_4 (FUNC_0 (VAR_3->symbol));

      VAR_4 = VAR_1.strip_name_encoding (FUNC_1 (VAR_3->symbol, 0));

      VAR_5 = FUNC_6 (VAR_4);
      if (VAR_5)
 FUNC_5 (VAR_5);
    }
}
