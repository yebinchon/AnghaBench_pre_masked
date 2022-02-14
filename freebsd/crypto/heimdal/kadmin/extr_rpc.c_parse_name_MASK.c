
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gss_OID ;
struct TYPE_3__ {size_t length; char* elements; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (unsigned char const*,char*,int) ;
 int FUNC_3 (char*,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_4(const unsigned char *VAR_0, size_t VAR_1,
    const gss_OID VAR_2, char **VAR_3)
{
    size_t VAR_4;

    if (VAR_1 < 4)
 return 1;


    if (FUNC_2(VAR_0, "\x04\x01", 2) != 0)
 return 1;
    VAR_1 -= 2;
    VAR_0 += 2;


    VAR_4 = (VAR_0[0] << 8) | VAR_0[1];
    VAR_1 -= 2;
    VAR_0 += 2;
    if (VAR_4 < 2 || VAR_1 < VAR_4)
 return 1;


    if (VAR_0[0] != 6 || VAR_0[1] != VAR_4 - 2)
 return 1;
    VAR_0 += 2;
    VAR_4 -= 2;
    VAR_1 -= 2;


    if (VAR_4 != VAR_2->length || FUNC_2(VAR_0, VAR_2->elements, VAR_2->length) != 0)
 return 1;
    VAR_1 -= VAR_4;
    VAR_0 += VAR_4;


    if (VAR_1 < 4)
 return 1;
    VAR_4 = VAR_0[0] << 24 | VAR_0[1] << 16 | VAR_0[2] << 8 | VAR_0[3];
    VAR_1 -= 4;
    VAR_0 += 4;


    if (VAR_1 != VAR_4)
 return 1;

    *VAR_3 = FUNC_1(VAR_4 + 1);
    FUNC_0(*VAR_3 != ((void*)0));
    FUNC_3(*VAR_3, VAR_0, VAR_4);
    (*VAR_3)[VAR_4] = '\0';

    return 0;
}
