
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_5, const char *VAR_6)
{
 char VAR_7[VAR_4];
 int VAR_8;

 FUNC_2(VAR_7, VAR_4, "%s/%s", VAR_5, VAR_6);
 (void)FUNC_3(VAR_7);
 VAR_8 = FUNC_1(VAR_7, VAR_3 | VAR_1 | VAR_2, 0600);
 if (VAR_8 < 0)
  FUNC_0(VAR_0, "open: %s", VAR_6);
 return (VAR_8);
}
