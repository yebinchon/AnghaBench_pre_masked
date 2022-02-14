
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ heim_octet_string ;


 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(const heim_octet_string *VAR_0,
     const heim_octet_string *VAR_1)
{
    if (VAR_0->length != VAR_1->length)
 return VAR_0->length - VAR_1->length;
    return FUNC_0(VAR_0->data, VAR_1->data, VAR_0->length);
}
