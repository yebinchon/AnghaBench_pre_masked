
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum gdb_osabi { ____Placeholder_gdb_osabi } gdb_osabi ;
typedef int bfd ;
struct TYPE_2__ {unsigned int* e_ident; } ;


 size_t VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (unsigned int*,char*) ;

__attribute__((used)) static enum gdb_osabi
FUNC_3 (bfd *VAR_9)
{
  unsigned int VAR_10;
  enum gdb_osabi VAR_11 = VAR_7;

  VAR_10 = FUNC_1 (VAR_9)->e_ident[VAR_0];

  switch (VAR_10)
    {
    case 129:




      FUNC_0 (VAR_9,
        VAR_8,
        &VAR_11);
      break;

    case 134:
      VAR_11 = VAR_1;
      break;

    case 130:
      VAR_11 = VAR_5;
      break;

    case 131:
      VAR_11 = VAR_4;
      break;

    case 132:
      VAR_11 = VAR_3;
      break;

    case 128:
      VAR_11 = VAR_6;
      break;

    case 133:
      VAR_11 = VAR_2;
      break;
    }

  if (VAR_11 == VAR_7)
    {



      if (FUNC_2 (&FUNC_1 (VAR_9)->e_ident[8], "FreeBSD") == 0)
 VAR_11 = VAR_1;
    }

  return VAR_11;
}
