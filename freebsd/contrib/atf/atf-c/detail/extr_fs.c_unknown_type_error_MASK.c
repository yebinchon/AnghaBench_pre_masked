
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* m_path; int m_type; } ;
typedef TYPE_1__ unknown_type_error_data_t ;
typedef int data ;
typedef int atf_error_t ;


 int FUNC_0 (char*,TYPE_1__*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static
atf_error_t
FUNC_1(const char *VAR_1, int VAR_2)
{
    atf_error_t VAR_3;
    unknown_type_error_data_t VAR_4;

    VAR_4.m_path = VAR_1;
    VAR_4.m_type = VAR_2;

    VAR_3 = FUNC_0("unknown_type", &VAR_4, sizeof(VAR_4),
                        VAR_0);

    return VAR_3;
}
