
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* atf_error_t ;
struct TYPE_6__ {int m_free; char const* m_type; void (* m_format ) (TYPE_1__* const,char*,size_t) ;int * m_data; } ;


 int FUNC_0 (int) ;
 void FUNC_1 (TYPE_1__* const,char*,size_t) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,void*,size_t) ;

__attribute__((used)) static
bool
FUNC_4(atf_error_t VAR_0, const char *VAR_1, void *VAR_2, size_t VAR_3,
           void (*VAR_4)(const atf_error_t, char *, size_t))
{
    bool VAR_5;

    FUNC_0(VAR_2 != ((void*)0) || VAR_3 == 0);
    FUNC_0(VAR_3 != 0 || VAR_2 == ((void*)0));

    VAR_0->m_free = 0;
    VAR_0->m_type = VAR_1;
    VAR_0->m_format = (VAR_4 == ((void*)0)) ? FUNC_1 : VAR_4;

    VAR_5 = 1;
    if (VAR_2 == ((void*)0)) {
        VAR_0->m_data = ((void*)0);
    } else {
        VAR_0->m_data = FUNC_2(VAR_3);
        if (VAR_0->m_data == ((void*)0)) {
            VAR_5 = 0;
        } else
            FUNC_3(VAR_0->m_data, VAR_2, VAR_3);
    }

    return VAR_5;
}
