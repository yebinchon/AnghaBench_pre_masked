
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_uid; int st_gid; } ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int VAR_14 ;
 int FUNC_7 (int ,struct stat*) ;

atf_error_t
FUNC_8(const atf_fs_path_t *VAR_15, int VAR_16)
{
    atf_error_t VAR_17;
    struct stat VAR_18;
    bool VAR_19;

    FUNC_0(VAR_16 & VAR_10 || VAR_16 & VAR_11 ||
        VAR_16 & VAR_12 || VAR_16 & VAR_13);

    if (FUNC_7(FUNC_1(VAR_15), &VAR_18) == -1) {
        VAR_17 = FUNC_2(VAR_14, "Cannot get information from file %s",
                             FUNC_1(VAR_15));
        goto out;
    }

    VAR_17 = FUNC_3();



    if (VAR_16 & VAR_10)
        goto out;

    VAR_19 = 0;
    if (FUNC_6()) {
        if (!VAR_19 && !(VAR_16 & VAR_13)) {

            VAR_19 = 1;
        }

        if (!VAR_19 && (VAR_18.st_mode & (VAR_9 | VAR_7 | VAR_8))) {


            VAR_19 = 1;
        }
    } else {
        if (!VAR_19 && (FUNC_4() == VAR_18.st_uid)) {
            VAR_19 = ((VAR_16 & VAR_11) && (VAR_18.st_mode & VAR_3)) ||
                 ((VAR_16 & VAR_12) && (VAR_18.st_mode & VAR_6)) ||
                 ((VAR_16 & VAR_13) && (VAR_18.st_mode & VAR_9));
        }
        if (!VAR_19 && FUNC_5(VAR_18.st_gid)) {
            VAR_19 = ((VAR_16 & VAR_11) && (VAR_18.st_mode & VAR_1)) ||
                 ((VAR_16 & VAR_12) && (VAR_18.st_mode & VAR_4)) ||
                 ((VAR_16 & VAR_13) && (VAR_18.st_mode & VAR_7));
        }
        if (!VAR_19 && ((FUNC_4() != VAR_18.st_uid) &&
                    !FUNC_5(VAR_18.st_gid))) {
            VAR_19 = ((VAR_16 & VAR_11) && (VAR_18.st_mode & VAR_2)) ||
                 ((VAR_16 & VAR_12) && (VAR_18.st_mode & VAR_5)) ||
                 ((VAR_16 & VAR_13) && (VAR_18.st_mode & VAR_8));
        }
    }

    if (!VAR_19)
        VAR_17 = FUNC_2(VAR_0, "Access check failed");

out:
    return VAR_17;
}
