
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int mnt_map ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int,char*,char*,char**,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;

int
FUNC_6(mnt_map *VAR_2, char *VAR_3, char *VAR_4, char **VAR_5, time_t *VAR_6)
{
  int VAR_7, VAR_8;

  if ((VAR_8 = FUNC_2(VAR_3)) != 0) {
    return VAR_8;
  }

  if (!VAR_4)
    return 0;

  if (VAR_1)
    FUNC_5(VAR_1);
  FUNC_1("exec_search \"%s\", key: \"%s\"", VAR_3, VAR_4);
  VAR_7 = FUNC_3(VAR_3, VAR_4);

  if (VAR_7 >= 0) {
    if (VAR_6)
      *VAR_6 = FUNC_0(((void*)0));

    return FUNC_4(VAR_2, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
  }

  return VAR_0;
}
