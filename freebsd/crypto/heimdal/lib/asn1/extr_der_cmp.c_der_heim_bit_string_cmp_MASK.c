
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ data; } ;
typedef TYPE_1__ heim_bit_string ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

int
FUNC_1(const heim_bit_string *VAR_0,
   const heim_bit_string *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    if (VAR_0->length != VAR_1->length)
 return VAR_0->length - VAR_1->length;
    VAR_2 = FUNC_0(VAR_0->data, VAR_1->data, VAR_0->length / 8);
    if (VAR_2)
 return VAR_2;
    if ((VAR_0->length % 8) == 0)
 return 0;
    VAR_2 = (VAR_0->length / 8);
    VAR_3 = ((unsigned char *)VAR_0->data)[VAR_2];
    VAR_4 = ((unsigned char *)VAR_1->data)[VAR_2];
    VAR_2 = 8 - (VAR_0->length % 8);
    VAR_3 = VAR_3 >> VAR_2;
    VAR_4 = VAR_4 >> VAR_2;
    return VAR_3 - VAR_4;
}
