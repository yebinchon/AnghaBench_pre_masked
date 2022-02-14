
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_1 ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_2)
{
  char *VAR_3 = FUNC_3(VAR_0);
  char *VAR_4;
  char VAR_5[VAR_0];

  FUNC_5(VAR_3, VAR_2, VAR_0);
  FUNC_0(VAR_3, VAR_1);
  VAR_5[0] = '\0';

  do {
    VAR_4 = FUNC_2(VAR_3, '.');
    if (VAR_4) {
      *VAR_4 = '\0';
      FUNC_4(VAR_5, VAR_4 + 1, sizeof(VAR_5));
      FUNC_4(VAR_5, "/", sizeof(VAR_5));
    } else {
      FUNC_4(VAR_5, VAR_3, sizeof(VAR_5));
    }
  } while (VAR_4);

  FUNC_1("hostpath of '%s' is '%s'", VAR_2, VAR_5);

  FUNC_5(VAR_3, VAR_5, VAR_0);
  return VAR_3;
}
