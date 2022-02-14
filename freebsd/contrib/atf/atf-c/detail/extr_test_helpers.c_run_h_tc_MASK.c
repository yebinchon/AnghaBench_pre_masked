
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_h_tc_data {char const* member_1; int * member_0; } ;
typedef int atf_tc_t ;
typedef int atf_process_stream_t ;
typedef int atf_process_status_t ;
typedef int atf_process_child_t ;
typedef int atf_fs_path_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int *,int *,struct run_h_tc_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_0 ;

void
FUNC_10(atf_tc_t *VAR_1, const char *VAR_2, const char *VAR_3,
         const char *VAR_4)
{
    atf_fs_path_t VAR_5, VAR_6;
    atf_process_stream_t VAR_7, VAR_8;
    atf_process_child_t VAR_9;
    atf_process_status_t VAR_10;

    FUNC_1(FUNC_3(&VAR_5, VAR_2));
    FUNC_1(FUNC_3(&VAR_6, VAR_3));

    struct run_h_tc_data VAR_11 = { VAR_1, VAR_4 };

    FUNC_1(FUNC_9(&VAR_7, &VAR_5));
    FUNC_1(FUNC_9(&VAR_8, &VAR_6));
    FUNC_1(FUNC_5(&VAR_9, VAR_0, &VAR_7, &VAR_8, &VAR_11));
    FUNC_8(&VAR_8);
    FUNC_8(&VAR_7);

    FUNC_1(FUNC_4(&VAR_9, &VAR_10));
    FUNC_0(FUNC_6(&VAR_10));
    FUNC_7(&VAR_10);

    FUNC_2(&VAR_6);
    FUNC_2(&VAR_5);
}
