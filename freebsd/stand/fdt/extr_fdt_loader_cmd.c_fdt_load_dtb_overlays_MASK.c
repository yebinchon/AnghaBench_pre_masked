
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;

void
FUNC_3(const char *VAR_0)
{
 const char *VAR_1;


 if (VAR_0 != ((void*)0) && *VAR_0 != '\0') {
  FUNC_2("Loading DTB overlays: '%s'\n", VAR_0);
  FUNC_0(VAR_0);
 }


 VAR_1 = FUNC_1("fdt_overlays");
 if (VAR_1 != ((void*)0) && *VAR_1 != '\0') {
  FUNC_2("Loading DTB overlays: '%s'\n", VAR_1);
  FUNC_0(VAR_1);
 }
}
