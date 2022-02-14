
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gv_sd {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct gv_softc*,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int ,char*,int) ;

int
FUNC_5(struct gv_softc *VAR_3, struct gv_sd *VAR_4, char *VAR_5, int VAR_6)
{
 char *VAR_7, *VAR_8;

 FUNC_1(VAR_4 != ((void*)0), ("gv_rename_sd: NULL s"));

 if (FUNC_2(VAR_3, VAR_5) != VAR_2) {
  FUNC_0(1, "subdisk name %s already in use", VAR_5);
  return (VAR_1);
 }


 VAR_7 = FUNC_3(VAR_5, '.');
 if (VAR_7 == ((void*)0) || (VAR_8 = FUNC_3(VAR_7 + 1, '.')) == ((void*)0)) {
  FUNC_0(0, "proposed sd name '%s' is not a valid sd name",
      VAR_5);
  return (VAR_0);
 }
 FUNC_4(VAR_4->name, VAR_5, sizeof(VAR_4->name));
 return (0);
}
