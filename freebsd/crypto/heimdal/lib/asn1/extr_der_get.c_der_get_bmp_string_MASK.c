
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; unsigned char* data; } ;
typedef TYPE_1__ heim_bmp_string ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int) ;

int
FUNC_2 (const unsigned char *VAR_5, size_t VAR_6,
      heim_bmp_string *VAR_7, size_t *VAR_8)
{
    size_t VAR_9;

    if (VAR_6 & 1)
 return VAR_1;
    VAR_7->length = VAR_6 / 2;
    if (VAR_7->length > VAR_4/sizeof(VAR_7->data[0]))
 return VAR_3;
    VAR_7->data = FUNC_1(VAR_7->length * sizeof(VAR_7->data[0]));
    if (VAR_7->data == ((void*)0) && VAR_7->length != 0)
 return VAR_2;

    for (VAR_9 = 0; VAR_9 < VAR_7->length; VAR_9++) {
 VAR_7->data[VAR_9] = (VAR_5[0] << 8) | VAR_5[1];
 VAR_5 += 2;

 if (VAR_7->data[VAR_9] == 0 && VAR_9 != (VAR_7->length - 1)) {
     FUNC_0(VAR_7->data);
     VAR_7->data = ((void*)0);
     VAR_7->length = 0;
     return VAR_0;
 }
    }
    if (VAR_8) *VAR_8 = VAR_6;

    return 0;
}
