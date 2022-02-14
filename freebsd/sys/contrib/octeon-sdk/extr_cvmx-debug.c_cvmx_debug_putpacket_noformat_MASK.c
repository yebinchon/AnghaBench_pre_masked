
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* putpacket ) (char*) ;} ;
struct TYPE_3__ {size_t comm_type; } ;


 TYPE_2__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_2)
{
    if (VAR_0[VAR_1->comm_type]->putpacket == ((void*)0))
        return 0;
    FUNC_0("Reply: %s\n", VAR_2);
    return VAR_0[VAR_1->comm_type]->putpacket(VAR_2);
}
