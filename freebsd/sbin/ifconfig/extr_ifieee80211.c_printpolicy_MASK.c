
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_0)
{
 switch (VAR_0) {
 case 129:
  FUNC_0("policy: open\n");
  break;
 case 131:
  FUNC_0("policy: allow\n");
  break;
 case 130:
  FUNC_0("policy: deny\n");
  break;
 case 128:
  FUNC_0("policy: radius\n");
  break;
 default:
  FUNC_0("policy: unknown (%u)\n", VAR_0);
  break;
 }
}
