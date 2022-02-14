
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int m_config; int m_srcdir; } ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;
typedef int atf_dynstr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int ) ;

__attribute__((used)) static
atf_error_t
FUNC_15(struct params *VAR_1)
{
    atf_error_t VAR_2;
    atf_dynstr_t VAR_3;
    atf_fs_path_t VAR_4, VAR_5;
    bool VAR_6;

    VAR_2 = FUNC_4(&VAR_5, &VAR_1->m_srcdir);
    if (FUNC_10(VAR_2))
        goto out;

    if (!FUNC_7(&VAR_5)) {
        atf_fs_path_t VAR_7;

        VAR_2 = FUNC_9(&VAR_5, &VAR_7);
        if (FUNC_10(VAR_2))
            goto out_srcdir;

        FUNC_6(&VAR_5);
        VAR_5 = VAR_7;
    }

    VAR_2 = FUNC_8(&VAR_5, &VAR_3);
    if (FUNC_10(VAR_2))
        goto out_srcdir;
    else {
        const bool VAR_8 = FUNC_1(&VAR_3, ".libs");
        FUNC_0(&VAR_3);

        if (VAR_8) {
            VAR_2 = FUNC_12(&VAR_5);
            if (FUNC_10(VAR_2))
                goto out;
        }
    }

    VAR_2 = FUNC_4(&VAR_4, &VAR_5);
    if (FUNC_10(VAR_2))
        goto out_srcdir;

    VAR_2 = FUNC_3(&VAR_4, "%s", VAR_0);
    if (FUNC_10(VAR_2))
        goto out_exe;

    VAR_2 = FUNC_2(&VAR_4, &VAR_6);
    if (!FUNC_10(VAR_2)) {
        if (VAR_6) {
            VAR_2 = FUNC_11(&VAR_1->m_config, "srcdir",
                                 FUNC_13(FUNC_5(&VAR_5)), 1);
        } else {
            VAR_2 = FUNC_14("Cannot find the test program in the source "
                             "directory `%s'", FUNC_5(&VAR_5));
        }
    }

out_exe:
    FUNC_6(&VAR_4);
out_srcdir:
    FUNC_6(&VAR_5);
out:
    return VAR_2;
}
