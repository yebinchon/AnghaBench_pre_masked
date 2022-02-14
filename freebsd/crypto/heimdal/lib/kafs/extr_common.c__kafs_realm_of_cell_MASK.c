
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kafs_data {char* (* get_realm ) (struct kafs_data*,char*) ;} ;
typedef int buf ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (struct kafs_data*,char const*,char**,int) ;
 char* FUNC_2 (struct kafs_data*,char*) ;

int
FUNC_3(struct kafs_data *VAR_0,
      const char *VAR_1, char **VAR_2)
{
    char VAR_3[1024];
    int VAR_4;

    VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, 1);
    if (VAR_4 == 0)
 return VAR_4;
    if (FUNC_0(VAR_1, VAR_3, sizeof(VAR_3)) == 0) {
 *VAR_2 = (*VAR_0->get_realm)(VAR_0, VAR_3);
 if(*VAR_2 != ((void*)0))
     return 0;
    }
    return FUNC_1(VAR_0, VAR_1, VAR_2, 0);
}
