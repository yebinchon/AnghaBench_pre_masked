
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ heim_octet_string ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_0, void *VAR_1)
{
    heim_octet_string *VAR_2 = (heim_octet_string *)VAR_0;
    heim_octet_string *VAR_3 = (heim_octet_string *)VAR_1;

    if (VAR_2->length != VAR_3->length)
 return VAR_3->length - VAR_2->length;

    return (FUNC_0 (VAR_2->data, VAR_3->data, VAR_2->length));
}
