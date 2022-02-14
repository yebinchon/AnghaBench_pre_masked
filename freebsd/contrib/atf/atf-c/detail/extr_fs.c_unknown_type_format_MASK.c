
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_type; char* m_path; } ;
typedef TYPE_1__ unknown_type_error_data_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int const) ;
 int FUNC_2 (int const,char*) ;
 int FUNC_3 (char*,size_t,char*,int,char*) ;

__attribute__((used)) static
void
FUNC_4(const atf_error_t VAR_0, char *VAR_1, size_t VAR_2)
{
    const unknown_type_error_data_t *VAR_3;

    FUNC_0(FUNC_2(VAR_0, "unknown_type"));

    VAR_3 = FUNC_1(VAR_0);
    FUNC_3(VAR_1, VAR_2, "Unknown file type %d of %s", VAR_3->m_type,
             VAR_3->m_path);
}
