
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int mnt_map ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int *,int *,char*,int *,int *,void (*) (int *,char*,char*)) ;

int
FUNC_3(mnt_map *VAR_1, char *VAR_2, void (*VAR_3) (mnt_map *, char *, char *))
{
  FILE *VAR_4 = FUNC_1(VAR_2, (time_t *) ((void*)0));

  if (VAR_4) {
    int VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_2, ((void*)0), ((void*)0), VAR_3);
    (void) FUNC_0(VAR_4);
    return VAR_5;
  }
  return VAR_0;
}
