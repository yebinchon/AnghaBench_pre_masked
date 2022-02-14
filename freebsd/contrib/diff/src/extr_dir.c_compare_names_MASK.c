
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__,char*,char const*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_7 (char const *VAR_4, char const *VAR_5)
{
  if (VAR_3)
    {
      int VAR_6;
      VAR_0 = 0;
      if (VAR_2)
 VAR_6 = FUNC_5 (VAR_4, VAR_5);
      else
 VAR_6 = FUNC_6 (VAR_4, VAR_5);
      if (VAR_0)
 {
   FUNC_1 (0, VAR_0, FUNC_0("cannot compare file names `%s' and `%s'"),
   VAR_4, VAR_5);
   FUNC_3 (VAR_1, 1);
 }
      return VAR_6;
    }

  return (VAR_2
   ? FUNC_4 (VAR_4, VAR_5)
   : FUNC_2 (VAR_4, VAR_5));
}
