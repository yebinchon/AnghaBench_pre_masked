
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char const*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char const*,int ,int *,char const*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (struct sysctl_ctx_list*) ;

void
FUNC_4(struct sysctl_ctx_list *VAR_2,
    struct sysctl_oid_list *VAR_3, const char *VAR_4,
    const char **VAR_5, unsigned VAR_6, u64 * VAR_7)
{
 struct sysctl_oid *VAR_8;
 unsigned VAR_9;

 FUNC_3(VAR_2);

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_1,
     VAR_4, VAR_0, ((void*)0), "Statistics");
 if (VAR_8 == ((void*)0))
  return;
 for (VAR_9 = 0; VAR_9 != VAR_6; VAR_9++) {
  FUNC_1(VAR_2, FUNC_2(VAR_8), VAR_1,
      VAR_5[2 * VAR_9], VAR_0, VAR_7 + VAR_9, VAR_5[2 * VAR_9 + 1]);
 }
}
