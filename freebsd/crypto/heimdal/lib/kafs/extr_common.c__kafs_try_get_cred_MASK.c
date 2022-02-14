
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct kafs_token {int dummy; } ;
struct kafs_data {int (* get_cred ) (struct kafs_data*,char const*,char const*,char const*,int ,struct kafs_token*) ;char* (* get_error ) (struct kafs_data*,int) ;int (* free_error ) (struct kafs_data*,char const*) ;int name; } ;


 int FUNC_0 (char**,char*,int ,char*,char const*,char const*,char const*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct kafs_data*,char const*,char const*,char const*,int ,struct kafs_token*) ;
 char* FUNC_4 (struct kafs_data*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct kafs_data*,char const*) ;

__attribute__((used)) static int
FUNC_7(struct kafs_data *VAR_1, const char *VAR_2, const char *VAR_3,
     const char *VAR_4, uid_t VAR_5, struct kafs_token *VAR_6)
{
    int VAR_7;

    VAR_7 = (*VAR_1->get_cred)(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    if (&FUNC_2) {
 const char *VAR_8 = (*VAR_1->get_error)(VAR_1, VAR_7);
 char *VAR_9;
 FUNC_0(&VAR_9, "%d tried afs%s%s@%s -> %s (%d)",
   VAR_1->name, VAR_3 ? "/" : "",
   VAR_3 ? VAR_3 : "", VAR_4, VAR_8 ? VAR_8 : "unknown", VAR_7);
 FUNC_2)(VAR_0, VAR_9);
 if (VAR_8)
     (*VAR_1->free_error)(VAR_1, VAR_8);
 FUNC_1(VAR_9);
    }

    return VAR_7;
}
