
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cvmx_debug_command_t ;
struct TYPE_4__ {scalar_t__ (* getpacket ) (char*,int) ;} ;
struct TYPE_3__ {size_t comm_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;

__attribute__((used)) static cvmx_debug_command_t FUNC_3(void)
{
    char VAR_4[VAR_1];
    if (VAR_2[VAR_3->comm_type]->getpacket(VAR_4, VAR_1))
    {
        FUNC_0("Request: %s\n", VAR_4);
        return FUNC_1(VAR_4);
    }
    return VAR_0;
}
