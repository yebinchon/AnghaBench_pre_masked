
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,int ) ;

atf_error_t
FUNC_4(atf_fs_path_t *VAR_2)
{
    atf_error_t VAR_3;
    char *VAR_4;




    VAR_4 = FUNC_3(((void*)0), VAR_0);

    if (VAR_4 == ((void*)0)) {
        VAR_3 = FUNC_1(VAR_1, "Cannot determine current directory");
        goto out;
    }

    VAR_3 = FUNC_0(VAR_2, "%s", VAR_4);
    FUNC_2(VAR_4);

out:
    return VAR_3;
}
