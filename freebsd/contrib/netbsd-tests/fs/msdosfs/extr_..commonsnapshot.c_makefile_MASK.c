
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0 | VAR_1, 0777);
 if (VAR_3 == -1)
  FUNC_0("create %s", VAR_2);
 FUNC_1(VAR_3);
}
