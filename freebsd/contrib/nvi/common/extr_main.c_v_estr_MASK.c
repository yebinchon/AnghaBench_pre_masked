
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(
 char *VAR_2,
 int VAR_3,
 char *VAR_4)
{
 (void)FUNC_0(VAR_1, "%s", VAR_2);
 if (VAR_4 != ((void*)0))
  (void)FUNC_0(VAR_1, ": %s", VAR_4);
 if (VAR_3)
  (void)FUNC_0(VAR_1, ": %s", FUNC_1(VAR_0));
 (void)FUNC_0(VAR_1, "\n");
}
