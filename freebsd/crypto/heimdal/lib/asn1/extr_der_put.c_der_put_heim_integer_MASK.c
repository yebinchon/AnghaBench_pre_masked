
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; size_t length; scalar_t__ negative; } ;
typedef TYPE_1__ heim_integer ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;

int
FUNC_1 (unsigned char *VAR_1, size_t VAR_2,
       const heim_integer *VAR_3, size_t *VAR_4)
{
    unsigned char *VAR_5 = VAR_3->data;
    int VAR_6 = 0;

    if (VAR_3->length == 0) {
 if (VAR_2 < 1)
     return VAR_0;
 *VAR_1-- = 0;
 if (VAR_4)
     *VAR_4 = 1;
 return 0;
    }
    if (VAR_2 < VAR_3->length)
 return VAR_0;

    VAR_2 -= VAR_3->length;

    if (VAR_3->negative) {
 int VAR_7, VAR_8;
 for (VAR_7 = VAR_3->length - 1, VAR_8 = 1; VAR_7 >= 0; VAR_7--) {
     *VAR_1 = VAR_5[VAR_7] ^ 0xff;
     if (VAR_8)
  VAR_8 = !++*VAR_1;
     VAR_1--;
 }
 if (VAR_1[1] < 128) {
     if (VAR_2 < 1)
  return VAR_0;
     *VAR_1-- = 0xff;
     VAR_2--;
     VAR_6 = 1;
 }
    } else {
 VAR_1 -= VAR_3->length;
 FUNC_0(VAR_1 + 1, VAR_5, VAR_3->length);

 if (VAR_1[1] >= 128) {
     if (VAR_2 < 1)
  return VAR_0;
     VAR_1[0] = 0;
     VAR_2--;
     VAR_6 = 1;
 }
    }
    if (VAR_4)
 *VAR_4 = VAR_3->length + VAR_6;
    return 0;
}
