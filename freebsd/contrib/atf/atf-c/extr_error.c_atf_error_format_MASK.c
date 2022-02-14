
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* atf_error_t ;
struct TYPE_4__ {int (* m_format ) (TYPE_1__* const,char*,size_t) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__* const,char*,size_t) ;

void
FUNC_2(const atf_error_t VAR_0, char *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0 != ((void*)0));
    VAR_0->m_format(VAR_0, VAR_1, VAR_2);
}
