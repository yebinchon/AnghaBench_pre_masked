
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 long FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const char *VAR_2,
    int *VAR_3, int *VAR_4)
{
  long int VAR_5;
  char *VAR_6;

  VAR_0 = 0;
  VAR_5 = FUNC_1(VAR_1, &VAR_6, 0);

  if (VAR_0)
    {
      FUNC_2(VAR_2);
    }

  *VAR_3 = (int)VAR_5;

  if (VAR_5 > 256 || VAR_5 < 1)
    {
      FUNC_0("Alignment should be in the range [1, 256].\n");
      FUNC_2(VAR_2);
    }

  if (VAR_5 == 256)
    VAR_5 = 0;

  if (VAR_6 && *VAR_6 == ':')
    {
      VAR_0 = 0;
      VAR_5 = FUNC_1(VAR_6 + 1, ((void*)0), 0);

      if (VAR_0)
 {
   FUNC_2(VAR_2);
 }

      if (VAR_5 > 256 || VAR_5 < 1)
 {
   FUNC_0("Alignment should be in the range [1, 256].\n");
   FUNC_2(VAR_2);
 }

      if (VAR_5 == 256)
 VAR_5 = 0;
    }

  *VAR_4 = (int)VAR_5;
}
