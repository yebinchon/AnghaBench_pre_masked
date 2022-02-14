
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4 == -1)
  FUNC_1(VAR_0, "open %s", VAR_3);
 if (FUNC_2(VAR_4) == -1)
  FUNC_1(VAR_0, "fchdir %s", VAR_3);
 FUNC_0(VAR_4);
}
