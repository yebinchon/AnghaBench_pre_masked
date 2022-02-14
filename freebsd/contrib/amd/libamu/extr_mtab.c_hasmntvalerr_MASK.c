
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mntent_t ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 long FUNC_3 (char*,char**,int ) ;

unsigned int
FUNC_4(mntent_t *VAR_1, char *VAR_2, int *VAR_3)
{
  char *VAR_4 = FUNC_0(VAR_1, VAR_2);
  int VAR_5 = 1;
  char *VAR_6, *VAR_7;
  long int VAR_8;


  if (!VAR_4) {
    goto out;
  }

  VAR_6 = FUNC_1(VAR_1, VAR_2);

  if (!VAR_6) {
    FUNC_2(VAR_0, "numeric option to \"%s\" missing", VAR_2);
    goto out;
  }


  VAR_7 = ((void*)0);
  VAR_8 = FUNC_3(VAR_6, &VAR_7, 0);
  if (!VAR_7 ||
      (VAR_7 != VAR_6 && (*VAR_7 == ',' || *VAR_7 == '\0'))) {
    *VAR_3 = (int) VAR_8;
    VAR_5 = 0;
  } else {

    FUNC_2(VAR_0, "invalid numeric option in \"%s\": \"%s\"", VAR_2, VAR_4);

  }

 out:
  return VAR_5;
}
