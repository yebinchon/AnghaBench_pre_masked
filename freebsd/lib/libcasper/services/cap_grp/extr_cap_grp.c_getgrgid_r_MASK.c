
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;
typedef int gid_t ;
typedef int cap_channel_t ;


 int FUNC_0 (int *,char*,int *,int ,struct group*,char*,size_t,struct group**) ;

int
FUNC_1(cap_channel_t *VAR_0, gid_t VAR_1, struct group *VAR_2, char *VAR_3,
    size_t VAR_4, struct group **VAR_5)
{

 return (FUNC_0(VAR_0, "getgrgid_r", ((void*)0), VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5));
}
