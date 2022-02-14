
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(const char * VAR_1)
{
 char *VAR_2;
 char *VAR_3, *VAR_4;
 char *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0("fdt_load_dtb_overlays_string(%s)\n", VAR_1);

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2 == ((void*)0))
  return (1);
 VAR_3 = VAR_2;
 do {
  VAR_5 = FUNC_6(VAR_3, ',');
  if (VAR_5)
   *VAR_5 = '\0';
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6 == VAR_0) {

   VAR_7 = FUNC_8(VAR_3) + 6;
   VAR_4 = FUNC_4(VAR_7);
   if (VAR_4 == ((void*)0)) {
    FUNC_2(VAR_6, VAR_3);
    VAR_3 = VAR_5 + 1;
    continue;
   }
   FUNC_5(VAR_4, VAR_7, "%s.dtbo", VAR_3);
   VAR_6 = FUNC_1(VAR_4);
   FUNC_3(VAR_4);
  }

  if (VAR_6 != 0)
   FUNC_2(VAR_6, VAR_3);
  VAR_3 = VAR_5 + 1;
 } while(VAR_5);

 FUNC_3(VAR_2);
 return (0);
}
