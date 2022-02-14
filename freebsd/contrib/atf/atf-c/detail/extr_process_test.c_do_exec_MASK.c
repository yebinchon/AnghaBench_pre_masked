
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;
typedef int atf_process_status_t ;
typedef int atf_fs_path_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char const**,int *,int *,void (*) ()) ;
 int FUNC_4 (int const*,int,int *) ;
 int FUNC_5 (char*,char const*,char const*) ;

__attribute__((used)) static
void
FUNC_6(const atf_tc_t *VAR_0, const char *VAR_1, atf_process_status_t *VAR_2,
        void (*VAR_3)(void))
{
    atf_fs_path_t VAR_4;
    const char *VAR_5[3];

    FUNC_4(VAR_0, 1, &VAR_4);

    VAR_5[0] = FUNC_1(&VAR_4);
    VAR_5[1] = VAR_1;
    VAR_5[2] = ((void*)0);
    FUNC_5("Executing %s %s\n", VAR_5[0], VAR_5[1]);

    FUNC_0(FUNC_3(VAR_2, &VAR_4, VAR_5, ((void*)0), ((void*)0), VAR_3));
    FUNC_2(&VAR_4);
}
