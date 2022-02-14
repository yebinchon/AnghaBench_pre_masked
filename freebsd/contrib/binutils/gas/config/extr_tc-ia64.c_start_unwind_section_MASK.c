
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* segT ;
typedef TYPE_1__* elf_linked_to_section ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,int ,int) ;
 char* FUNC_3 (TYPE_1__* const) ;
 int FUNC_4 (TYPE_1__* const) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const*,int) ;
 TYPE_1__* VAR_6 ;
 char* FUNC_7 (TYPE_1__* const) ;
 int FUNC_8 (char*) ;
 char** VAR_7 ;
 char** VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 size_t FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_12 (const segT VAR_10, int VAR_11)
{
  const char *VAR_12, *VAR_13;
  char *VAR_14;
  const char *VAR_15 = VAR_8 [VAR_11];
  const char *VAR_16;
  size_t VAR_17, VAR_18, VAR_19;

  VAR_13 = FUNC_7 (VAR_10);
  VAR_12 = VAR_13;
  if (FUNC_11 (VAR_12, "_info", 5) == 0)
    {
      FUNC_1 ("Illegal section name `%s' (causes unwind section name clash)",
       VAR_12);
      FUNC_5 ();
      return;
    }
  if (FUNC_9 (VAR_12, ".text") == 0)
    VAR_12 = "";



  VAR_16 = VAR_12;
  if (FUNC_11 (VAR_12, ".gnu.linkonce.t.",
        sizeof (".gnu.linkonce.t.") - 1) == 0)
    {
      VAR_15 = VAR_7 [VAR_11 - VAR_5];
      VAR_16 += sizeof (".gnu.linkonce.t.") - 1;
    }

  VAR_17 = FUNC_10 (VAR_15);
  VAR_18 = FUNC_10 (VAR_16);
  VAR_19 = VAR_17 + VAR_18;
  VAR_14 = FUNC_0 (VAR_19 + 1);
  FUNC_6 (VAR_14, VAR_15, VAR_17);
  FUNC_6 (VAR_14 + VAR_17, VAR_16, VAR_18);
  VAR_14 [VAR_19] = '\0';


  if ((VAR_10->flags & VAR_1) != 0
      && (FUNC_4 (VAR_10) & VAR_4) != 0)
    {
      char *VAR_20;
      size_t VAR_21, VAR_22;
      const char *VAR_23 = FUNC_3 (VAR_10);

      if (VAR_23 == ((void*)0))
 {
   FUNC_1 ("Group section `%s' has no group signature",
    VAR_13);
   FUNC_5 ();
   return;
 }

      VAR_22 = FUNC_10 (VAR_23);
      VAR_21 = (VAR_19
      + 16
      + VAR_22
      + 7);

      VAR_20 = FUNC_0 (VAR_21 + 1);
      FUNC_6 (VAR_20, VAR_14, VAR_19);
      FUNC_6 (VAR_20 + VAR_19, ",\"aG\",@progbits,", 16);
      FUNC_6 (VAR_20 + VAR_19 + 16, VAR_23, VAR_22);
      FUNC_6 (VAR_20 + VAR_21 - 7, ",comdat", 7);
      VAR_20 [VAR_21] = '\0';
      FUNC_8 (VAR_20);
    }
  else
    {
      FUNC_8 (VAR_14);
      FUNC_2 (VAR_9, VAR_6,
        VAR_2 | VAR_0 | VAR_3);
    }

  elf_linked_to_section (VAR_24) = VAR_10;
}
