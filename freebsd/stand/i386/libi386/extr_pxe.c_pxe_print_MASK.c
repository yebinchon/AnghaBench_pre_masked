
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* dv_name; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,...) ;
 int * VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static int
FUNC_3(int VAR_4)
{
 if (VAR_0 == ((void*)0))
  return (0);

 FUNC_2("%s devices:", VAR_1.dv_name);
 if (FUNC_1("\n") != 0)
  return (1);
 FUNC_2("    %s0:", VAR_1.dv_name);
 if (VAR_4) {
  FUNC_2("    %s:%s", FUNC_0(VAR_2), VAR_3);
 }
 return (FUNC_1("\n"));
}
