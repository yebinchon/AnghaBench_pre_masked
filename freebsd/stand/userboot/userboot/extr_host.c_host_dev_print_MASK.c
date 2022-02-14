
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int line ;
struct TYPE_2__ {char* dv_name; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_1)
{
 char VAR_2[80];

 FUNC_1("%s devices:", VAR_0.dv_name);
 if (FUNC_0("\n") != 0)
  return (1);

 FUNC_2(VAR_2, sizeof(VAR_2), "    host%d:   Host filesystem\n", 0);
 return (FUNC_0(VAR_2));
}
