
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4 (const char * VAR_3, const char * VAR_4)
{
  char * VAR_5;

  VAR_5 = (char *) FUNC_0 (FUNC_3 (VAR_0) + FUNC_3 (VAR_1)
    + FUNC_3 (VAR_3) + FUNC_3 (VAR_4) + 50);

  FUNC_2 (VAR_5, "%s %s -o %s %s", VAR_0, VAR_1, VAR_4, VAR_3);

  FUNC_1 (VAR_2, VAR_5);
}
