
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int mnt_map ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int *,char*,char*,char**,int *) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int) ;

int
FUNC_4(mnt_map *VAR_3, char *VAR_4)
{
  int VAR_5;
  char *VAR_6;
  time_t VAR_7;
  static int VAR_8 = 1;

  VAR_5 = FUNC_1(VAR_3, VAR_4, "/defaults", &VAR_6, &VAR_7);
  FUNC_0("hesiod_isup(%s): %s", VAR_4, FUNC_3(VAR_5));
  if (VAR_5 != 0 && VAR_5 != VAR_0) {
    FUNC_2(VAR_1,
  "hesiod_isup: error getting `/defaults' entry in map %s: %m", VAR_4);
    VAR_8 = 0;
    return 0;
  }
  if (VAR_8 == 0) {
    FUNC_2(VAR_2, "hesiod_isup: Hesiod came back up for map %s", VAR_4);
    VAR_8 = 1;
  }
  return 1;
}
