
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int length; int negative; unsigned char* data; } ;
typedef TYPE_1__ heim_integer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char const*,unsigned char*,int) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (char const*) ;

int
FUNC_5 (const char *VAR_2, heim_integer *VAR_3)
{
    ssize_t VAR_4;

    VAR_3->length = 0;
    VAR_3->negative = 0;
    VAR_3->data = ((void*)0);

    if (*VAR_2 == '-') {
 VAR_2++;
 VAR_3->negative = 1;
    }

    VAR_4 = FUNC_4(VAR_2);
    if (VAR_4 <= 0) {
 VAR_3->data = ((void*)0);
 VAR_3->length = 0;
 return VAR_0;
    }

    VAR_3->length = (VAR_4 / 2) + 1;
    VAR_3->data = FUNC_2(VAR_3->length);
    if (VAR_3->data == ((void*)0)) {
 VAR_3->length = 0;
 return VAR_1;
    }

    VAR_4 = FUNC_1(VAR_2, VAR_3->data, VAR_3->length);
    if (VAR_4 < 0) {
 FUNC_0(VAR_3->data);
 VAR_3->data = ((void*)0);
 VAR_3->length = 0;
 return VAR_0;
    }

    {
 unsigned char *VAR_5 = VAR_3->data;
 while(VAR_4 > 0 && *VAR_5 == 0) {
     VAR_5++;
     VAR_4--;
 }
 VAR_3->length = VAR_4;
 FUNC_3(VAR_3->data, VAR_5, VAR_4);
    }
    return 0;
}
