
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* m_path; scalar_t__ m_umask; int m_type; } ;
typedef TYPE_1__ invalid_umask_error_data_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int const) ;
 int FUNC_2 (int const,char*) ;
 int FUNC_3 (char*,size_t,char*,char*,char*,unsigned int) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static
void
FUNC_5(const atf_error_t VAR_0, char *VAR_1, size_t VAR_2)
{
    const invalid_umask_error_data_t *VAR_3;

    FUNC_0(FUNC_2(VAR_0, "invalid_umask"));

    VAR_3 = FUNC_1(VAR_0);
    FUNC_3(VAR_1, VAR_2, "Could not create the temporary %s %s because "
             "it will not have enough access rights due to the current "
             "umask %05o", FUNC_4(VAR_3->m_type),
             VAR_3->m_path, (unsigned int)VAR_3->m_umask);
}
