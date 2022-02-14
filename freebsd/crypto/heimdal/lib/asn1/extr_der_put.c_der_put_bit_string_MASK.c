
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int data; } ;
typedef TYPE_1__ heim_bit_string ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,size_t) ;

int
FUNC_1 (unsigned char *VAR_1, size_t VAR_2,
      const heim_bit_string *VAR_3, size_t *VAR_4)
{
    size_t VAR_5 = (VAR_3->length + 7) / 8;
    if (VAR_2 < VAR_5 + 1)
 return VAR_0;
    VAR_1 -= VAR_5 + 1;

    FUNC_0 (VAR_1+2, VAR_3->data, VAR_5);
    if (VAR_3->length && (VAR_3->length % 8) != 0)
 VAR_1[1] = 8 - (VAR_3->length % 8);
    else
 VAR_1[1] = 0;
    *VAR_4 = VAR_5 + 1;
    return 0;
}
