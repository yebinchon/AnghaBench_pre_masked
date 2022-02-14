
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int cap_rights_t ;
typedef int Elf ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int ) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int **,int *) ;
 scalar_t__ FUNC_8 (int,int ,int *,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,char const*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (char*,int,int ) ;
 int FUNC_14 (char const*,int *,char const*) ;
 int VAR_9 ;
 int FUNC_15 (int,char**,char*,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (char const*,int ) ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_17 (int ,int *,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_18 (int ,int *,char*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;

int
FUNC_21(int VAR_19, char **VAR_20)
{
 cap_rights_t VAR_21;
 Elf *VAR_22;
 Dwarf_Debug VAR_23;
 Dwarf_Error VAR_24;
 const char *VAR_25, *VAR_26;
 char VAR_27[1024];
 int VAR_28, VAR_29, VAR_30;

 VAR_25 = ((void*)0);
 VAR_26 = ((void*)0);
 while ((VAR_30 = FUNC_15(VAR_19, VAR_20, "ab:Ce:fij:psHV", VAR_11,
     ((void*)0))) != -1) {
  switch (VAR_30) {
  case 'a':
   VAR_15 = 1;
   break;
  case 'b':

   break;
  case 'C':
   VAR_8 = 1;
   break;
  case 'e':
   VAR_25 = VAR_12;
   break;
  case 'f':
   VAR_9 = 1;
   break;
  case 'i':
   VAR_10 = 1;
   break;
  case 'j':
   VAR_26 = VAR_12;
   break;
  case 'p':
   VAR_14 = 1;
   break;
  case 's':
   VAR_7 = 1;
   break;
  case 'H':
   FUNC_19();
  case 'V':
   FUNC_20();
  default:
   FUNC_19();
  }
 }

 VAR_20 += VAR_13;
 VAR_19 -= VAR_13;

 if (VAR_25 == ((void*)0))
  VAR_25 = "a.out";

 if ((VAR_28 = FUNC_16(VAR_25, VAR_5)) < 0)
  FUNC_10(VAR_4, "%s", VAR_25);

 if (FUNC_4(VAR_28, FUNC_0(&VAR_21, VAR_0,
     VAR_1)) < 0)
  FUNC_11(VAR_4, "caph_rights_limit");

 FUNC_1();
 if (FUNC_3() < 0)
  FUNC_11(VAR_4, "failed to limit stdio rights");
 if (FUNC_2() < 0)
  FUNC_11(VAR_4, "failed to enter capability mode");

 if (FUNC_8(VAR_28, VAR_2, ((void*)0), ((void*)0), &VAR_23, &VAR_24))
  FUNC_11(VAR_4, "dwarf_init: %s", FUNC_5(VAR_24));

 if (FUNC_7(VAR_23, &VAR_22, &VAR_24) != VAR_3)
  FUNC_11(VAR_4, "dwarf_get_elf: %s", FUNC_5(VAR_24));

 if (VAR_26)
  FUNC_14(VAR_25, VAR_22, VAR_26);
 else
  VAR_16 = 0;

 if (VAR_19 > 0)
  for (VAR_29 = 0; VAR_29 < VAR_19; VAR_29++)
   FUNC_18(VAR_23, VAR_22, VAR_20[VAR_29]);
 else {
  FUNC_17(VAR_18, ((void*)0), VAR_6, 0);
  while (FUNC_13(VAR_27, sizeof(VAR_27), VAR_17) != ((void*)0))
   FUNC_18(VAR_23, VAR_22, VAR_27);
 }

 FUNC_6(VAR_23, &VAR_24);

 (void) FUNC_9(VAR_22);

 FUNC_12(0);
}
