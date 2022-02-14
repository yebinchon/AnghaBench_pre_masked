
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_machine; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3 (FILE *VAR_6)
{
  struct unwind_handler {
    int machtype;
    int (*handler)(FILE *VAR_7);
  } VAR_8[] = {
    { VAR_0, VAR_5 },
    { VAR_1, VAR_4 },
    { 0, 0 }
  };
  int VAR_9;

  if (!VAR_2)
    return 1;

  for (VAR_9 = 0; VAR_8[VAR_9].handler != ((void*)0); VAR_9++)
    if (VAR_3.e_machine == VAR_8[VAR_9].machtype)
      return VAR_8[VAR_9].handler (VAR_6);

  FUNC_1 (FUNC_0("\nThere are no unwind sections in this file.\n"));
  return 1;
}
