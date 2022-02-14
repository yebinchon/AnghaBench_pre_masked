
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_6(void)
{
 bool VAR_5, VAR_6;
 char *VAR_7, *VAR_8;

 VAR_5 = VAR_6 = 0;
 VAR_8 = FUNC_3("kern.cfg.order");
 if (VAR_8 != ((void*)0)) {
  VAR_7 = VAR_8;
  while (VAR_7 != ((void*)0)) {
   if (VAR_5 &&
       FUNC_5(VAR_7, "acpi", 4) == 0 &&
       (VAR_7[4] == ',' || VAR_7[4] == '\0')) {
    VAR_4 = VAR_1;
    break;
   }
   if (VAR_6 &&
       FUNC_5(VAR_7, "fdt", 3) == 0 &&
       (VAR_7[3] == ',' || VAR_7[3] == '\0')) {
    VAR_4 = VAR_2;
    break;
   }
   VAR_7 = FUNC_4(VAR_7, ',');
  }
  FUNC_2(VAR_8);


  if (VAR_4 != VAR_3)
   return (1);
 }

 if (VAR_4 == VAR_3) {
  if (VAR_6)
   VAR_4 = VAR_2;
  else if (VAR_5)
   VAR_4 = VAR_1;
 }






 return (VAR_8 == ((void*)0));
}
