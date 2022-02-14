
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ e_type; scalar_t__ e_phnum; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4 (FILE *VAR_3)
{

  if (! VAR_1)
    return 1;

  if (VAR_2.e_type != VAR_0)
    return FUNC_3 (VAR_3);


  if (VAR_2.e_phnum > 0)
    return FUNC_2 (VAR_3);

  FUNC_1 (FUNC_0("No note segments present in the core file.\n"));
  return 1;
}
