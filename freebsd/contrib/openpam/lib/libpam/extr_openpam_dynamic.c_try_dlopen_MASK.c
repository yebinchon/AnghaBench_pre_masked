
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 void* FUNC_1 (char const*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,char*,char const*,...) ;

__attribute__((used)) static void *
FUNC_5(const char *VAR_5)
{
 int VAR_6;
 void *VAR_7;

 FUNC_4(VAR_2, "dlopen(%s)", VAR_5);
 FUNC_3(VAR_0,
     &VAR_6);
 if (VAR_6 &&
     FUNC_2(VAR_5) != 0)
  return (((void*)0));
 if ((VAR_7 = FUNC_1(VAR_5, VAR_3)) == ((void*)0)) {
  FUNC_4(VAR_1, "%s: %s", VAR_5, FUNC_0());
  VAR_4 = 0;
  return (((void*)0));
 }
 return (VAR_7);
}
