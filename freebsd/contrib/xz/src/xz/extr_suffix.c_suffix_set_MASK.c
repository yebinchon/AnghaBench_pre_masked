
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*) ;

extern void
FUNC_5(const char *VAR_1)
{


 if (VAR_1[0] == '\0' || FUNC_2(VAR_1))
  FUNC_3(FUNC_0("%s: Invalid filename suffix"), VAR_1);


 FUNC_1(VAR_0);
 VAR_0 = FUNC_4(VAR_1);
 return;
}
