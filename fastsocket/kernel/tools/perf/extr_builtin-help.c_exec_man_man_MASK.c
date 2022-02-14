
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*,char const*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const char *VAR_2)
{
 if (!VAR_1)
  VAR_1 = "man";
 FUNC_0(VAR_1, "man", VAR_2, ((void*)0));
 FUNC_2("failed to exec '%s': %s", VAR_1, FUNC_1(VAR_0));
}
