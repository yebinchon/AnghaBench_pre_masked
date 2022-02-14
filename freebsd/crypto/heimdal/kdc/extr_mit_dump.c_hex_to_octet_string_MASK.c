
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; scalar_t__ data; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (char const*,char*,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, krb5_data *VAR_1)
{
    size_t VAR_2;
    unsigned int VAR_3;
    for(VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++) {
 if(FUNC_0(VAR_0 + 2 * VAR_2, "%02x", &VAR_3) != 1)
     return -1;
 ((unsigned char*)VAR_1->data)[VAR_2] = VAR_3;
    }
    return 2 * VAR_2;
}
