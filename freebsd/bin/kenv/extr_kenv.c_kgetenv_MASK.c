
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char*,int) ;
 int FUNC_1 (char*,char const*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2)
{
 char VAR_3[1024];
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3, sizeof(VAR_3));
 if (VAR_4 == -1)
  return (VAR_4);
 if (VAR_1)
  FUNC_1("%s=\"%s\"\n", VAR_2, VAR_3);
 else
  FUNC_1("%s\n", VAR_3);
 return (0);
}
