
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dtdda_msg; } ;
typedef TYPE_1__ dtrace_dropdata_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(const dtrace_dropdata_t *VAR_3, void *VAR_4)
{
 VAR_1++;
 (void) FUNC_0(VAR_2, "lockstat: warning: %s", VAR_3->dtdda_msg);
 return (VAR_0);
}
