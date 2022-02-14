
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_br {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char const*,int,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct vmbus_br*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4(struct sysctl_ctx_list *VAR_7, struct sysctl_oid *VAR_8,
    struct vmbus_br *VAR_9, const char *VAR_10)
{
 struct sysctl_oid *VAR_11;
 char VAR_12[64];

 VAR_11 = FUNC_0(VAR_7, FUNC_2(VAR_8), VAR_4,
     VAR_10, VAR_1 | VAR_0, 0, "");
 if (VAR_11 == ((void*)0))
  return;

 FUNC_3(VAR_12, sizeof(VAR_12), "%s state", VAR_10);
 FUNC_1(VAR_7, FUNC_2(VAR_11), VAR_4, "state",
     VAR_3 | VAR_1 | VAR_0,
     VAR_9, 0, VAR_5, "A", VAR_12);

 FUNC_3(VAR_12, sizeof(VAR_12), "%s binary state", VAR_10);
 FUNC_1(VAR_7, FUNC_2(VAR_11), VAR_4, "state_bin",
     VAR_2 | VAR_1 | VAR_0,
     VAR_9, 0, VAR_6, "IU", VAR_12);
}
