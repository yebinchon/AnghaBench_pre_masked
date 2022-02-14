
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 int FUNC_1 (int,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(int VAR_1, const char *VAR_2)
{
 if (&FUNC_1)
  FUNC_1(VAR_1, VAR_2);
 else {
  const char *VAR_3;
  switch (VAR_1) {
  case 131:
   VAR_3 = "debug";
   break;
  case 129:
   VAR_3 = "msg";
   break;
  case 128:
   VAR_3 = "warn";
   break;
  case 130:
   VAR_3 = "err";
   break;
  default:
   VAR_3 = "???";
   break;
  }
  (void)FUNC_0(VAR_0, "[%s] %s\n", VAR_3, VAR_2);
 }
}
