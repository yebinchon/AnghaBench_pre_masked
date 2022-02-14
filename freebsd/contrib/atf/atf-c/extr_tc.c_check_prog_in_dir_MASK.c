
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prog_found_pair {int found; int prog; } ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static atf_error_t
FUNC_7(const char *VAR_1, void *VAR_2)
{
    struct prog_found_pair *VAR_3 = VAR_2;
    atf_error_t VAR_4;

    if (VAR_3->found)
        VAR_4 = FUNC_6();
    else {
        atf_fs_path_t VAR_5;

        VAR_4 = FUNC_4(&VAR_5, "%s/%s", VAR_1, VAR_3->prog);
        if (FUNC_5(VAR_4))
            goto out_p;

        VAR_4 = FUNC_2(&VAR_5, VAR_0);
        if (!FUNC_5(VAR_4))
            VAR_3->found = 1;
        else {
            FUNC_1(VAR_4);
            FUNC_0(!VAR_3->found);
            VAR_4 = FUNC_6();
        }

out_p:
        FUNC_3(&VAR_5);
    }

    return VAR_4;
}
