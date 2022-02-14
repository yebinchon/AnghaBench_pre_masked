
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char**,char*,int) ;
 char* FUNC_3 (int ,int) ;
 int VAR_1 ;

char *
FUNC_4 (int VAR_2)
{
  char *VAR_3;
  char *VAR_4;

  FUNC_2 (&VAR_3, "/proc/%d/file", VAR_2);
  VAR_4 = FUNC_3 (VAR_0, sizeof (char));
  FUNC_0 (VAR_1, VAR_3);
  FUNC_0 (VAR_1, VAR_4);

  if (FUNC_1 (VAR_3, VAR_4, VAR_0) > 0)
    return VAR_4;

  return ((void*)0);
}
