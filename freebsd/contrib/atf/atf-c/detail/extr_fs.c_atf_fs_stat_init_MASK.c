
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; } ;
struct TYPE_4__ {int m_type; TYPE_2__ m_sb; } ;
typedef TYPE_1__ atf_fs_stat_t ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;







 int VAR_0 ;



 char* FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 () ;
 int VAR_9 ;
 int FUNC_3 (char const*,TYPE_2__*) ;
 int FUNC_4 (char const*,int) ;

atf_error_t
FUNC_5(atf_fs_stat_t *VAR_10, const atf_fs_path_t *VAR_11)
{
    atf_error_t VAR_12;
    const char *VAR_13 = FUNC_0(VAR_11);

    if (FUNC_3(VAR_13, &VAR_10->m_sb) == -1) {
        VAR_12 = FUNC_1(VAR_9, "Cannot get information of %s; "
                             "lstat(2) failed", VAR_13);
    } else {
        int VAR_14 = VAR_10->m_sb.st_mode & VAR_0;
        VAR_12 = FUNC_2();
        switch (VAR_14) {
            case 135: VAR_10->m_type = VAR_1; break;
            case 134: VAR_10->m_type = VAR_2; break;
            case 133: VAR_10->m_type = VAR_3; break;
            case 132: VAR_10->m_type = VAR_4; break;
            case 131: VAR_10->m_type = VAR_5; break;
            case 130: VAR_10->m_type = VAR_6; break;
            case 129: VAR_10->m_type = VAR_7; break;

            case 128: VAR_10->m_type = VAR_8; break;

            default:
                VAR_12 = FUNC_4(VAR_13, VAR_14);
        }
    }

    return VAR_12;
}
