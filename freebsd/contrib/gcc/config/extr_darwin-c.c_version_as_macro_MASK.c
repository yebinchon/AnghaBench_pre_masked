
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_3 (void)
{
  static char VAR_1[] = "1000";

  if (FUNC_2 (VAR_0, "10.", 3) != 0)
    goto fail;
  if (! FUNC_0 (VAR_0[3]))
    goto fail;
  VAR_1[2] = VAR_0[3];
  if (VAR_0[4] != '\0')
    {
      if (VAR_0[4] != '.')
 goto fail;
      if (! FUNC_0 (VAR_0[5]))
 goto fail;
      if (VAR_0[6] != '\0')
 goto fail;
      VAR_1[3] = VAR_0[5];
    }
  else
    VAR_1[3] = '0';

  return VAR_1;

 fail:
  FUNC_1 ("Unknown value %qs of -mmacosx-version-min",
  VAR_0);
  return "1000";
}
