
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;
typedef int atf_fs_path_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,char*) ;
 int FUNC_2 (int const*,char*) ;

void
FUNC_3(const atf_tc_t *VAR_0, const bool VAR_1,
                         atf_fs_path_t *VAR_2)
{
    FUNC_0(FUNC_1(VAR_2, "%s/%sprocess_helpers",
                            FUNC_2(VAR_0, "srcdir"),
                            VAR_1 ? "" : "detail/"));
}
