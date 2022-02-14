
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* filename; char const* local_sym_name; int real; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 char const* VAR_2 ;

void
FUNC_2 (const char *VAR_3)
{
  if (VAR_2 != ((void*)0))
    {
      FUNC_1 (FUNC_0("%P%F: multiple STARTUP files\n"));
    }
  VAR_1->filename = VAR_3;
  VAR_1->local_sym_name = VAR_3;
  VAR_1->real = VAR_0;

  VAR_2 = VAR_3;
}
