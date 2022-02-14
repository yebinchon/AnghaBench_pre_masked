
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* components; size_t length; } ;
typedef TYPE_1__ heim_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned char* FUNC_1 (size_t) ;

int
FUNC_2 (const unsigned char *VAR_5, size_t VAR_6,
      heim_oid *VAR_7, size_t *VAR_8)
{
    size_t VAR_9;
    size_t VAR_10 = VAR_6;

    if (VAR_6 < 1)
 return VAR_1;

    if (VAR_6 > VAR_6 + 1)
 return VAR_0;

    if (VAR_6 + 1 > VAR_4/sizeof(VAR_7->components[0]))
 return VAR_3;

    VAR_7->components = FUNC_1((VAR_6 + 1) * sizeof(VAR_7->components[0]));
    if (VAR_7->components == ((void*)0))
 return VAR_2;
    VAR_7->components[0] = (*VAR_5) / 40;
    VAR_7->components[1] = (*VAR_5) % 40;
    --VAR_6;
    ++VAR_5;
    for (VAR_9 = 2; VAR_6 > 0; ++VAR_9) {
 unsigned VAR_11 = 0, VAR_12;

 do {
     --VAR_6;
     VAR_12 = VAR_11 * 128 + (*VAR_5++ % 128);

     if (VAR_12 < VAR_11) {
  FUNC_0(VAR_7);
  return VAR_1;
     }
     VAR_11 = VAR_12;
 } while (VAR_6 > 0 && VAR_5[-1] & 0x80);
 VAR_7->components[VAR_9] = VAR_11;
    }
    if (VAR_9 > 2 && VAR_5[-1] & 0x80) {
 FUNC_0 (VAR_7);
 return VAR_1;
    }
    VAR_7->length = VAR_9;
    if (VAR_8)
 *VAR_8 = VAR_10;
    return 0;
}
