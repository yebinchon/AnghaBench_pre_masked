
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sge_iq {int qsize; int cidx; int cntxt_id; int abs_id; int ba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct sysctl_ctx_list *VAR_5, struct sysctl_oid *VAR_6,
    struct sge_iq *VAR_7)
{
 struct sysctl_oid_list *VAR_8 = FUNC_3(VAR_6);

 FUNC_2(VAR_5, VAR_8, VAR_3, "ba", VAR_0, &VAR_7->ba,
     "bus address of descriptor ring");
 FUNC_0(VAR_5, VAR_8, VAR_3, "dmalen", VAR_0, ((void*)0),
     VAR_7->qsize * VAR_2, "descriptor ring size in bytes");
 FUNC_1(VAR_5, VAR_8, VAR_3, "abs_id",
     VAR_1 | VAR_0, &VAR_7->abs_id, 0, VAR_4, "I",
     "absolute id of the queue");
 FUNC_1(VAR_5, VAR_8, VAR_3, "cntxt_id",
     VAR_1 | VAR_0, &VAR_7->cntxt_id, 0, VAR_4, "I",
     "SGE context id of the queue");
 FUNC_1(VAR_5, VAR_8, VAR_3, "cidx",
     VAR_1 | VAR_0, &VAR_7->cidx, 0, VAR_4, "I",
     "consumer index");
}
