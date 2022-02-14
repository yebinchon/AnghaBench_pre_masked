
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_int16_t VAR_0)
{

 if (VAR_0 == 0)
  FUNC_0("unspecified");
 else if (VAR_0 >= 255)
  FUNC_0("> 508 min");
 else
  FUNC_0("%i min", 2 * VAR_0);
}
