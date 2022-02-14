
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; unsigned int* components; } ;
typedef TYPE_1__ heim_oid ;


 int VAR_0 ;

int
FUNC_0 (unsigned char *VAR_1, size_t VAR_2,
      const heim_oid *VAR_3, size_t *VAR_4)
{
    unsigned char *VAR_5 = VAR_1;
    int VAR_6;

    for (VAR_6 = VAR_3->length - 1; VAR_6 >= 2; --VAR_6) {
 unsigned VAR_7 = VAR_3->components[VAR_6];

 if (VAR_2 < 1)
     return VAR_0;
 *VAR_1-- = VAR_7 % 128;
 VAR_7 /= 128;
 --VAR_2;
 while (VAR_7 > 0) {
     if (VAR_2 < 1)
  return VAR_0;
     *VAR_1-- = 128 + VAR_7 % 128;
     VAR_7 /= 128;
     --VAR_2;
 }
    }
    if (VAR_2 < 1)
 return VAR_0;
    *VAR_1-- = 40 * VAR_3->components[0] + VAR_3->components[1];
    *VAR_4 = VAR_5 - VAR_1;
    return 0;
}
