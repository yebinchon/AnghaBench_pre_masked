
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_6)
{
 VAR_1 = FUNC_2(VAR_6, "r");
 if (VAR_1 == ((void*)0)) {
  FUNC_3(VAR_5, "could not open file '%s'\n", VAR_6);
  FUNC_1(VAR_0);
 }
 VAR_2 = -1;
 VAR_3 = 1;
 VAR_4 = FUNC_0();
}
