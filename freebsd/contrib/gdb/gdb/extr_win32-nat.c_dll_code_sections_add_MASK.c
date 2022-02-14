
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct TYPE_2__ {scalar_t__ addr; struct target_ops* target; } ;
typedef TYPE_1__ map_code_section_args ;
typedef int bfd ;
typedef int asection ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *,void*) ;
 int VAR_0 ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_1 ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int
  FUNC_6 (const char *VAR_2, int VAR_3, struct target_ops *VAR_4)
{
  bfd *VAR_5;
  map_code_section_args VAR_6;
  asection *VAR_7;
  char *VAR_8;
  if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
    return 0;
  VAR_8 = FUNC_5 (VAR_2);
  VAR_5 = FUNC_3 (VAR_8, "pei-i386");
  if (VAR_5 == ((void*)0))
    return 0;

  if (FUNC_0 (VAR_5, VAR_0))
    {
      VAR_7 = FUNC_1 (VAR_5, ".text");
      if (VAR_7 == ((void*)0))
 return 0;
      VAR_6.target = VAR_4;
      VAR_6.addr = VAR_3 - FUNC_4 (VAR_5, VAR_7);

      FUNC_2 (VAR_5, &VAR_1, (void *) (&VAR_6));
    }

  return 1;
}
