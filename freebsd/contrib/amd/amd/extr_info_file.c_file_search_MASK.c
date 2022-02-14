
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int mnt_map ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,scalar_t__*) ;
 int FUNC_2 (int *,int *,char*,char*,char**,int *) ;

int
FUNC_3(mnt_map *VAR_1, char *VAR_2, char *VAR_3, char **VAR_4, time_t *VAR_5)
{
  time_t VAR_6;
  FILE *VAR_7 = FUNC_1(VAR_2, &VAR_6);

  if (VAR_7) {
    int VAR_8;
    if (*VAR_5 < VAR_6) {
      *VAR_5 = VAR_6;
      VAR_8 = -1;
    } else {
      VAR_8 = FUNC_2(VAR_1, VAR_7, VAR_2, VAR_3, VAR_4, ((void*)0));
    }
    (void) FUNC_0(VAR_7);
    return VAR_8;
  }
  return VAR_0;
}
