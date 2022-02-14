
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* m_pipefds; TYPE_3__* m_sb; } ;
typedef TYPE_1__ stream_prepare_t ;
typedef int atf_error_t ;
struct TYPE_5__ {int m_fd; int m_path; int m_src_fd; int m_tgt_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_9 ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static
atf_error_t
FUNC_9(const stream_prepare_t *VAR_10, int VAR_11)
{
    atf_error_t VAR_12;
    const int VAR_13 = FUNC_4(VAR_10->m_sb);

    if (VAR_13 == VAR_4) {
        FUNC_5(VAR_10->m_pipefds[0]);
        VAR_12 = FUNC_8(VAR_10->m_pipefds[1], VAR_11);
    } else if (VAR_13 == VAR_5) {
        if (FUNC_6(VAR_10->m_sb->m_tgt_fd, VAR_10->m_sb->m_src_fd) == -1)
            VAR_12 = FUNC_2(VAR_9, "Cannot connect descriptor %d to %d",
                                 VAR_10->m_sb->m_tgt_fd, VAR_10->m_sb->m_src_fd);
        else
            VAR_12 = FUNC_3();
    } else if (VAR_13 == VAR_6) {
        VAR_12 = FUNC_3();
    } else if (VAR_13 == VAR_7) {
        VAR_12 = FUNC_8(VAR_10->m_sb->m_fd, VAR_11);
    } else if (VAR_13 == VAR_8) {
        int VAR_14 = FUNC_7(FUNC_0(VAR_10->m_sb->m_path),
                       VAR_2 | VAR_0 | VAR_1, 0644);
        if (VAR_14 == -1)
            VAR_12 = FUNC_2(VAR_9, "Could not create %s",
                                 FUNC_0(VAR_10->m_sb->m_path));
        else {
            VAR_12 = FUNC_8(VAR_14, VAR_11);
            if (FUNC_1(VAR_12))
                FUNC_5(VAR_14);
        }
    } else {
        VAR_3;
        VAR_12 = FUNC_3();
    }

    return VAR_12;
}
