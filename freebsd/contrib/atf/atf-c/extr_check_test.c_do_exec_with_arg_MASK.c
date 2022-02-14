
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;
typedef int atf_fs_path_t ;
typedef int atf_check_result_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*,int,int *) ;
 int FUNC_5 (char*,char const*,char const*,char const*) ;

__attribute__((used)) static
void
FUNC_6(const atf_tc_t *VAR_0, const char *VAR_1, const char *VAR_2,
                 atf_check_result_t *VAR_3)
{
    atf_fs_path_t VAR_4;
    const char *VAR_5[4];

    FUNC_4(VAR_0, 0, &VAR_4);

    VAR_5[0] = FUNC_2(&VAR_4);
    VAR_5[1] = VAR_1;
    VAR_5[2] = VAR_2;
    VAR_5[3] = ((void*)0);
    FUNC_5("Executing %s %s %s\n", VAR_5[0], VAR_5[1], VAR_5[2]);
    FUNC_0(FUNC_1(VAR_5, VAR_3));

    FUNC_3(&VAR_4);
}
