
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2)
{
 if (FUNC_1(VAR_2) != VAR_1)
  FUNC_0("bad length %zd for \"%s\"\n", VAR_1, VAR_2);
 else if (FUNC_2(VAR_0, VAR_2, FUNC_1(VAR_2)) != 0)
  FUNC_0("bad buffer \"%s\" for \"%s\"\n", VAR_0, VAR_2);
}
