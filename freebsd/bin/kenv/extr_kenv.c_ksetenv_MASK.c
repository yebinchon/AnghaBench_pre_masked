
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char const*,char*,scalar_t__) ;
 int FUNC_1 (char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, FUNC_2(VAR_2) + 1);
 if (VAR_3 == 0)
  FUNC_1("%s=\"%s\"\n", VAR_1, VAR_2);
 return (VAR_3);
}
