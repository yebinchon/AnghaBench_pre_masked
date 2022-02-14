
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int* data; } ;
typedef TYPE_1__ heim_bmp_string ;


 int VAR_0 ;

int
FUNC_0 (unsigned char *VAR_1, size_t VAR_2,
      const heim_bmp_string *VAR_3, size_t *VAR_4)
{
    size_t VAR_5;
    if (VAR_2 / 2 < VAR_3->length)
 return VAR_0;
    VAR_1 -= VAR_3->length * 2;
    for (VAR_5 = 0; VAR_5 < VAR_3->length; VAR_5++) {
 VAR_1[1] = (VAR_3->data[VAR_5] >> 8) & 0xff;
 VAR_1[2] = VAR_3->data[VAR_5] & 0xff;
 VAR_1 += 2;
    }
    if (VAR_4) *VAR_4 = VAR_3->length * 2;
    return 0;
}
