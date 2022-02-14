
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readelf {int dummy; } ;
typedef int rs ;
typedef int intmax_t ;
typedef scalar_t__ Dwarf_Half ;
typedef scalar_t__ Dwarf_Addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (struct readelf*,scalar_t__) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static char *
FUNC_2(struct readelf *VAR_3, Dwarf_Half VAR_4, Dwarf_Addr VAR_5)
{
 static char VAR_6[16];

 if (VAR_4 == VAR_2 || VAR_4 == VAR_1)
  FUNC_1(VAR_6, sizeof(VAR_6), "%c", 'u');
 else if (VAR_4 == VAR_0)
  FUNC_1(VAR_6, sizeof(VAR_6), "c%+jd", (intmax_t) VAR_5);
 else
  FUNC_1(VAR_6, sizeof(VAR_6), "%s%+jd", FUNC_0(VAR_3, VAR_4),
      (intmax_t) VAR_5);

 return (VAR_6);
}
