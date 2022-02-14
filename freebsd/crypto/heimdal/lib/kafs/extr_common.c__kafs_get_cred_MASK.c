
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct kafs_token {int dummy; } ;
struct kafs_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (struct kafs_data*,char const*,char**) ;
 int FUNC_2 (struct kafs_data*,int ,char const*,char const*,int ,struct kafs_token*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

int
FUNC_5(struct kafs_data *VAR_1,
        const char *VAR_2,
        const char *VAR_3,
        const char *VAR_4,
        uid_t VAR_5,
        struct kafs_token *VAR_6)
{
    int VAR_7 = -1;
    char *VAR_8;
    char VAR_9[64];
    if (VAR_3) {
 VAR_7 = FUNC_2(VAR_1, VAR_0,
     VAR_2, VAR_3, VAR_5, VAR_6);
 if (VAR_7 == 0) return 0;
 VAR_7 = FUNC_2(VAR_1, VAR_0,
     ((void*)0), VAR_3, VAR_5, VAR_6);
 if (VAR_7 == 0) return 0;
    }

    FUNC_0(VAR_9, VAR_2);






    VAR_7 = FUNC_2(VAR_1, VAR_0,
        VAR_2, VAR_4, VAR_5, VAR_6);
    if (VAR_7 == 0) return 0;





    if (FUNC_4(VAR_9, VAR_4) == 0) {
        VAR_7 = FUNC_2(VAR_1, VAR_0,
     ((void*)0), VAR_4, VAR_5, VAR_6);
 if (VAR_7 == 0) return 0;
    }







    VAR_7 = FUNC_2(VAR_1, VAR_0,
        ((void*)0), VAR_9, VAR_5, VAR_6);
    if (VAR_7 == 0) return 0;
    VAR_7 = FUNC_2(VAR_1, VAR_0,
        VAR_2, VAR_9, VAR_5, VAR_6);
    if (VAR_7 == 0) return 0;







    if (FUNC_1(VAR_1, VAR_2, &VAR_8) == 0
 && FUNC_4(VAR_8, VAR_4) != 0
 && FUNC_4(VAR_8, VAR_9) != 0) {
 VAR_7 = FUNC_2(VAR_1, VAR_0,
     VAR_2, VAR_8, VAR_5, VAR_6);
 if (VAR_7)
     VAR_7 = FUNC_2(VAR_1, VAR_0,
         ((void*)0), VAR_8, VAR_5, VAR_6);
 FUNC_3(VAR_8);
 if (VAR_7 == 0) return 0;
    }

    return VAR_7;
}
