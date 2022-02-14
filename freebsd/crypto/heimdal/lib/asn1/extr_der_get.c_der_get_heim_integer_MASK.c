
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int negative; int * data; } ;
typedef TYPE_1__ heim_integer ;


 int VAR_0 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;

int
FUNC_2 (const unsigned char *VAR_1, size_t VAR_2,
        heim_integer *VAR_3, size_t *VAR_4)
{
    VAR_3->length = 0;
    VAR_3->negative = 0;
    VAR_3->data = ((void*)0);

    if (VAR_2 == 0) {
 if (VAR_4)
     *VAR_4 = 0;
 return 0;
    }
    if (VAR_1[0] & 0x80) {
 unsigned char *VAR_5;
 int VAR_6 = 1;
 VAR_3->negative = 1;

 VAR_3->length = VAR_2;

 if (VAR_1[0] == 0xff) {
     VAR_1++;
     VAR_3->length--;
 }
 VAR_3->data = FUNC_0(VAR_3->length);
 if (VAR_3->data == ((void*)0)) {
     VAR_3->length = 0;
     if (VAR_4)
  *VAR_4 = 0;
     return VAR_0;
 }
 VAR_5 = &((unsigned char*)VAR_3->data)[VAR_3->length - 1];
 VAR_1 += VAR_3->length - 1;
 while (VAR_5 >= (unsigned char*)VAR_3->data) {
     *VAR_5 = *VAR_1 ^ 0xff;
     if (VAR_6)
  VAR_6 = !++*VAR_5;
     VAR_1--;
     VAR_5--;
 }
    } else {
 VAR_3->negative = 0;
 VAR_3->length = VAR_2;

 if (VAR_1[0] == 0) {
     VAR_1++;
     VAR_3->length--;
 }
 VAR_3->data = FUNC_0(VAR_3->length);
 if (VAR_3->data == ((void*)0) && VAR_3->length != 0) {
     VAR_3->length = 0;
     if (VAR_4)
  *VAR_4 = 0;
     return VAR_0;
 }
 FUNC_1(VAR_3->data, VAR_1, VAR_3->length);
    }
    if (VAR_4)
 *VAR_4 = VAR_2;
    return 0;
}
