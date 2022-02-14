
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dict_ent ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static dict_ent *
FUNC_5(char *VAR_1)
{
  dict_ent *VAR_2;
  char *VAR_3 = FUNC_4(VAR_1);
  char *VAR_4;

  do {
    FUNC_2("Searching for volname %s", VAR_3);
    VAR_2 = FUNC_1(VAR_0, VAR_3);
    VAR_4 = FUNC_3(VAR_3, '/');
    if (VAR_4)
      *VAR_4 = '\0';
  } while (!VAR_2 && VAR_4);

  FUNC_0(VAR_3);
  return VAR_2;
}
