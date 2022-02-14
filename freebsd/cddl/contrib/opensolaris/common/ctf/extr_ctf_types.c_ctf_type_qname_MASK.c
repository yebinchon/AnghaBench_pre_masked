
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;


 size_t FUNC_0 (int *,int ,char*,size_t,char const*) ;

char *
FUNC_1(ctf_file_t *VAR_0, ctf_id_t VAR_1, char *VAR_2, size_t VAR_3,
    const char *VAR_4)
{
 ssize_t VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return (VAR_5 >= 0 && VAR_5 < VAR_3 ? VAR_2 : ((void*)0));
}
