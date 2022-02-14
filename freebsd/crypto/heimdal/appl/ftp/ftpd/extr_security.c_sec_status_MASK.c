
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_4 ;

void
FUNC_2(void)
{
    if(VAR_4){
 FUNC_1("Using %s for authentication.\n", VAR_3->name);
 FUNC_1("Using %s command channel.\n", FUNC_0(VAR_1));
 FUNC_1("Using %s data channel.\n", FUNC_0(VAR_2));
 if(VAR_0 > 0)
     FUNC_1("Protection buffer size: %lu.\n",
     (unsigned long)VAR_0);
    }else{
 FUNC_1("Not using any security mechanism.\n");
    }
}
