
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

char *
FUNC_4 (char *VAR_4, size_t VAR_5)
{
  char VAR_6[VAR_2];
  char *VAR_7;

  VAR_7 = FUNC_0 (VAR_6);
  if (VAR_7) {
    if (FUNC_3 (VAR_6) >= VAR_5) {
      VAR_3 = VAR_1;
      return 0;
    }
    if (!VAR_4) {
       VAR_4 = (char*)FUNC_1(VAR_5);
       if (!VAR_4) {
           VAR_3 = VAR_0;
    return 0;
       }
    }
    FUNC_2 (VAR_4, VAR_6);
  }
  return VAR_4;
}
