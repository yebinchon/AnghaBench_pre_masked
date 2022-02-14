
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static
void
FUNC_6(const char *VAR_3)
{
    atf_fs_path_t VAR_4;

    FUNC_1(FUNC_4(&VAR_4, "%s", VAR_3));
    FUNC_0(FUNC_5(FUNC_2(&VAR_4),
                   VAR_0 | VAR_2 | VAR_1, 0644) != -1);
    FUNC_3(&VAR_4);
}
