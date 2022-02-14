
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7 (const char *VAR_1)
{
  char *VAR_2;
  int VAR_3;
  int VAR_4;

  if (FUNC_0 (VAR_0))
    {
      VAR_2 = FUNC_6 (FUNC_3 (VAR_0) + FUNC_3 (VAR_1) + 2);
      FUNC_2 (VAR_2, VAR_0);
      FUNC_1 (VAR_2, " ");
      FUNC_1 (VAR_2, VAR_1);

      FUNC_5 ("File not processed by pxdb--about to process now.\n");
      VAR_3 = FUNC_4 (VAR_2);

      VAR_4 = (VAR_3 == 0);
    }
  else
    {
      FUNC_5 ("pxdb not found at standard location: /opt/langtools/bin\ngdb will not be able to debug %s.\nPlease install pxdb at the above location and then restart gdb.\nYou can also run pxdb on %s with the command\n\"pxdb %s\" and then restart gdb.", VAR_1, VAR_1, VAR_1);

      VAR_4 = 0;
    }
  return VAR_4;
}
