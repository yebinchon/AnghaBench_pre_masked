
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsproxy {int dummy; } ;
struct ctl_table {int dummy; } ;


 int FUNC_0 (char const**,struct ctl_table*,char*) ;
 struct ctl_table* FUNC_1 (struct nsproxy*,struct ctl_table*) ;

__attribute__((used)) static void FUNC_2(struct nsproxy *VAR_0,
    struct ctl_table *VAR_1, const char **VAR_2)
{
 struct ctl_table *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 && (VAR_3 != VAR_1))
  FUNC_0(VAR_2, VAR_1, "Sysctl already exists");
}
