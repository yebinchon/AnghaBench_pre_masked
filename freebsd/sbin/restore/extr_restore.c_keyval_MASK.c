
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *
FUNC_2(int VAR_4)
{
 static char VAR_5[32];

 (void) FUNC_1(VAR_5, "|NIL");
 VAR_5[0] = '\0';
 if (VAR_4 & VAR_3)
  (void) FUNC_0(VAR_5, "|ONTAPE");
 if (VAR_4 & VAR_0)
  (void) FUNC_0(VAR_5, "|INOFND");
 if (VAR_4 & VAR_2)
  (void) FUNC_0(VAR_5, "|NAMEFND");
 if (VAR_4 & VAR_1)
  (void) FUNC_0(VAR_5, "|MODECHG");
 return (&VAR_5[1]);
}
