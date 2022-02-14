
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heim_octet_string {scalar_t__ length; int data; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const struct heim_octet_string *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    int VAR_4;

    VAR_4 = FUNC_0(VAR_2->data, VAR_3->data,
   VAR_2->length < VAR_3->length ? VAR_2->length : VAR_3->length);
    if(VAR_4)
 return VAR_4;
    return VAR_2->length - VAR_3->length;
}
