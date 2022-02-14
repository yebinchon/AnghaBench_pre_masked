
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* atf_error_t ;
struct TYPE_9__ {int m_free; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,char const*,void*,size_t,void (*) (TYPE_1__* const,char*,size_t)) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;

atf_error_t
FUNC_7(const char *VAR_1, void *VAR_2, size_t VAR_3,
              void (*VAR_4)(const atf_error_t, char *, size_t))
{
    atf_error_t VAR_5;

    FUNC_2(!VAR_0);
    FUNC_2(VAR_2 != ((void*)0) || VAR_3 == 0);
    FUNC_2(VAR_3 != 0 || VAR_2 == ((void*)0));

    VAR_5 = FUNC_6(sizeof(*VAR_5));
    if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_3();
    else {
        if (!FUNC_4(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4)) {
            FUNC_5(VAR_5);
            VAR_5 = FUNC_3();
        } else {
            VAR_5->m_free = 1;
            VAR_0 = 1;
        }
    }

    FUNC_0(VAR_5 != ((void*)0));
    FUNC_1(VAR_0);
    return VAR_5;
}
