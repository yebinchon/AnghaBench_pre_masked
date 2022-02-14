
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Buf {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct Buf*,char**,int) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,size_t,char const*,char const*) ;
 int FUNC_5 (char const*) ;

struct Buf *FUNC_6 (struct Buf *VAR_0, const char* VAR_1)
{
    const char * VAR_2 = "m4_undefine( [[%s]])m4_dnl\n";
    char * VAR_3;
    size_t VAR_4;

    VAR_3 = (char*)FUNC_2(VAR_4 = FUNC_5(VAR_2) + FUNC_5(VAR_1) + 2);
    if (!VAR_3)
        FUNC_3 (FUNC_0("Allocation of buffer for m4 undef failed"));

    FUNC_4(VAR_3, VAR_4, VAR_2, VAR_1);
    FUNC_1(VAR_0, &VAR_3, 1);
    return VAR_0;
}
