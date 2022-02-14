
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct kafs_data {int (* afslog_uid ) (struct kafs_data*,char*,int ,int ,char const*) ;} ;


 int FUNC_0 (struct kafs_data*,char*,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_1(struct kafs_data *VAR_0, char **VAR_1, int VAR_2, uid_t VAR_3,
      const char *VAR_4)
{
    int VAR_5 = 0;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        int VAR_7 = (*VAR_0->afslog_uid)(VAR_0, VAR_1[VAR_6], 0, VAR_3, VAR_4);
 if (VAR_7)
     VAR_5 = VAR_7;
    }
    return VAR_5;
}
