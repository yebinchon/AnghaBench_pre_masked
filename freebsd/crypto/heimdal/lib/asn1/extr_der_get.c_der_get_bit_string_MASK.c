
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int len ;
struct TYPE_3__ {size_t length; int * data; } ;
typedef TYPE_1__ heim_bit_string ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;

int
FUNC_2 (const unsigned char *VAR_3, size_t VAR_4,
      heim_bit_string *VAR_5, size_t *VAR_6)
{
    if (VAR_4 < 1)
 return VAR_1;
    if (VAR_3[0] > 7)
 return VAR_0;
    if (VAR_4 - 1 == 0 && VAR_3[0] != 0)
 return VAR_0;


    if ((VAR_4 - 1) >> (sizeof(VAR_4) * 8 - 3))
 return VAR_1;
    VAR_5->length = (VAR_4 - 1) * 8;
    VAR_5->data = FUNC_0(VAR_4 - 1);
    if (VAR_5->data == ((void*)0) && (VAR_4 - 1) != 0)
 return VAR_2;

    if (VAR_4 - 1 != 0) {
      FUNC_1 (VAR_5->data, VAR_3 + 1, VAR_4 - 1);
      VAR_5->length -= VAR_3[0];
    }
    if(VAR_6) *VAR_6 = VAR_4;
    return 0;
}
