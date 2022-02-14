
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* message; } ;
typedef TYPE_1__ list_info_type ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_1, const char *VAR_2)
{
  if (VAR_0 != (list_info_type *) ((void*)0))
    {
      unsigned int VAR_3 = FUNC_2 (VAR_1) + FUNC_2 (VAR_2) + 1;
      char *VAR_4 = (char *) FUNC_3 (VAR_3);
      FUNC_1 (VAR_4, VAR_1);
      FUNC_0 (VAR_4, VAR_2);
      VAR_0->message = VAR_4;
    }
}
