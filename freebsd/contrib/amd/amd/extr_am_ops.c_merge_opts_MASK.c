
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int oneopt ;
struct TYPE_3__ {char* mnt_opts; } ;
typedef TYPE_1__ mntent_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char*) ;
 char* FUNC_6 (size_t) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,size_t) ;
 int FUNC_9 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_10(const char *VAR_0, const char *VAR_1)
{
  mntent_t VAR_2;
  char *VAR_3;
  char *VAR_4;
  char *VAR_5;
  char VAR_6[80];
  char *VAR_7;
  size_t VAR_8 = FUNC_4(VAR_0) + FUNC_4(VAR_1) + 2;
  char *VAR_9 = FUNC_7(VAR_0);


  VAR_2 = (char *) VAR_1;
  VAR_3 = FUNC_6(VAR_8);
  VAR_3[0] = '\0';

  for (VAR_4 = FUNC_5(VAR_9, ",");
       VAR_4;
       VAR_4 = FUNC_5(((void*)0), ",")) {

    FUNC_9(VAR_6, VAR_4, sizeof(VAR_6));

    if ((VAR_5 = FUNC_3(VAR_6, '=')))
      *VAR_5 = '\0';

    VAR_7 = FUNC_2(VAR_6);

    if (FUNC_1(&VAR_2, VAR_6) || FUNC_1(&VAR_2, VAR_7))
      continue;

    if (VAR_3[0]) {
      FUNC_8(VAR_3, ",", VAR_8);
      FUNC_8(VAR_3, VAR_4, VAR_8);
    } else {
      FUNC_9(VAR_3, VAR_4, VAR_8);
    }
  }


  if (VAR_3[0]) {
    FUNC_8(VAR_3, ",", VAR_8);
    FUNC_8(VAR_3, VAR_1, VAR_8);
  } else {
    FUNC_9(VAR_3, VAR_1, VAR_8);
  }

  FUNC_0(VAR_9);
  return VAR_3;
}
