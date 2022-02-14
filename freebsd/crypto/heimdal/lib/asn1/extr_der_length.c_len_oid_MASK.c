
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; unsigned int* components; } ;
typedef TYPE_1__ heim_oid ;



__attribute__((used)) static size_t
FUNC_0 (const heim_oid *VAR_0)
{
    size_t VAR_1 = 1;
    size_t VAR_2;

    for (VAR_2 = 2; VAR_2 < VAR_0->length; ++VAR_2) {
 unsigned VAR_3 = VAR_0->components[VAR_2];

 do {
     ++VAR_1;
     VAR_3 /= 128;
 } while(VAR_3 > 0);
    }
    return VAR_1;
}
