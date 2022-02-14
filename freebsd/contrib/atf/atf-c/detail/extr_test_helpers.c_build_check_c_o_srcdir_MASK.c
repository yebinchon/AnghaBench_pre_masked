
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;
typedef int atf_fs_path_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,char const*) ;
 int FUNC_4 (int const*,char*) ;
 int FUNC_5 (int ) ;

bool
FUNC_6(const atf_tc_t *VAR_0, const char *VAR_1)
{
    atf_fs_path_t VAR_2;

    FUNC_0(FUNC_3(&VAR_2, "%s/%s",
                            FUNC_4(VAR_0, "srcdir"), VAR_1));
    const bool VAR_3 = FUNC_5(FUNC_1(&VAR_2));
    FUNC_2(&VAR_2);
    return VAR_3;
}
