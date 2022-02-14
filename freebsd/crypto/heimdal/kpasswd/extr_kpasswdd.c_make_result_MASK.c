
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {char* data; int length; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (char**,char*,int,int,char const*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3 (krb5_data *VAR_1,
      uint16_t VAR_2,
      const char *VAR_3)
{
    char *VAR_4;
    FUNC_1 (VAR_1);

    VAR_1->length = FUNC_0 (&VAR_4,
        "%c%c%s",
        (VAR_2 >> 8) & 0xFF,
        VAR_2 & 0xFF,
        VAR_3);

    if (VAR_4 == ((void*)0)) {
 FUNC_2 (VAR_0, "Out of memory generating error reply");
 return 1;
    }
    VAR_1->data = VAR_4;
    return 0;
}
