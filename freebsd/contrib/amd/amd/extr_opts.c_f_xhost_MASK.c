
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; char** h_aliases; } ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,...) ;
 struct hostent* FUNC_2 (char*) ;
 char* VAR_2 ;
 char* FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_4)
{
  struct hostent *VAR_5;
  char **VAR_6;

  if (!VAR_4)
    return 0;


  if (FUNC_0(VAR_4, VAR_3))
    return 1;


  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5 == ((void*)0)) {



    FUNC_4(VAR_0, "gethostbyname xhost(%s): h_errno %d", VAR_4, VAR_2);

    return 0;
  }

  if (VAR_5->h_name) {
    FUNC_1("xhost: compare %s==%s", VAR_5->h_name, VAR_3);
    if (FUNC_0(VAR_5->h_name, VAR_3)) {
      FUNC_4(VAR_1, "xhost(%s): matched h_name %s", VAR_4, VAR_5->h_name);
      return 1;
    }
  }

  if (VAR_5->h_aliases == ((void*)0)) {
    FUNC_1("gethostbyname(%s) has no aliases", VAR_4);
    return 0;
  }
  VAR_6 = VAR_5->h_aliases;
  while (*VAR_6) {
    FUNC_1("xhost: compare alias %s==%s", *VAR_6, VAR_3);
    if (FUNC_0(*VAR_6, VAR_3)) {
      FUNC_4(VAR_1, "xhost(%s): matched alias %s", VAR_4, *VAR_6);
      return 1;
    }
    VAR_6++;
  }

  return 0;
}
