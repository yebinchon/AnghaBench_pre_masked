
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gregset_t ;
typedef int fpregset_t ;
typedef int fpregs ;
typedef int fakename ;
typedef int bfd ;
struct TYPE_3__ {int * e_ident; } ;
typedef TYPE_1__ Elf_Internal_Ehdr ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 char* FUNC_1 (int *,char*,int*,int *,int) ;
 char* FUNC_2 (int *,char*,int*,char*,char*) ;
 char* FUNC_3 (int *,char*,int*,int ,int ,int *) ;
 char* FUNC_4 (int *,char*,int*,char*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int VAR_2 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (char*,char*,char*,scalar_t__,int *) ;
 int VAR_3 ;
 char* FUNC_12 (scalar_t__,char) ;
 int VAR_4 ;
 char* FUNC_13 (char*) ;

__attribute__((used)) static char *
FUNC_14 (bfd *VAR_5, int *VAR_6)
{
  gregset_t VAR_7;
  fpregset_t VAR_8;
  char *VAR_9 = ((void*)0);
  Elf_Internal_Ehdr *VAR_10;
  char VAR_11;


  VAR_10 = FUNC_0 (VAR_5);
  VAR_10->e_ident[VAR_0] = VAR_1;

  FUNC_6 (&VAR_7, -1);
  VAR_9 = FUNC_3 (VAR_5, VAR_9, VAR_6,
          FUNC_10 (VAR_2),
          VAR_3, &VAR_7);

  FUNC_5 (&VAR_8, -1);
  VAR_9 = FUNC_1 (VAR_5, VAR_9, VAR_6,
         &VAR_8, sizeof (VAR_8));

  VAR_11 = '\0';
  VAR_9 = FUNC_4 (VAR_5, VAR_9, VAR_6,
         &VAR_11, sizeof (VAR_11));

  if (FUNC_7 (0))
    {
      char *VAR_12 = FUNC_12 (FUNC_7 (0), '/') + 1;
      char *VAR_13 = FUNC_13 (VAR_12);

      if (FUNC_8 ())
 VAR_13 = FUNC_11 (VAR_13, VAR_13, " ", FUNC_8 (), ((void*)0));

      VAR_9 = FUNC_2 (VAR_5, VAR_9, VAR_6,
       VAR_12, VAR_13);
    }

  FUNC_9 (VAR_4, VAR_9);
  return VAR_9;
}
