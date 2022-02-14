
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* module_t ;
struct TYPE_3__ {int refs; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(module_t VAR_2)
{

 VAR_0;

 FUNC_0(VAR_1, ("module_reference: before, refs=%d\n", VAR_2->refs));
 VAR_2->refs++;
}
