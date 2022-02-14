
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_t2rq {int* ioc_setup; int ioc_setupcnt; char* ioc_name; int ioc_tparamcnt; int ioc_tdatacnt; int ioc_rparamcnt; int ioc_rdatacnt; void* ioc_rdata; void* ioc_rparam; void* ioc_tdata; void* ioc_tparam; } ;
struct smb_ctx {int ct_fd; } ;
typedef int krq ;


 int VAR_0 ;
 int FUNC_0 (struct smbioc_t2rq*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct smbioc_t2rq*) ;

int
FUNC_2(struct smb_ctx *VAR_2, int VAR_3, int VAR_4,
 const char *VAR_5,
 int VAR_6, void *VAR_7,
 int VAR_8, void *VAR_9,
 int *VAR_10, void *VAR_11,
 int *VAR_12, void *VAR_13)
{
 struct smbioc_t2rq VAR_14;

 FUNC_0(&VAR_14, sizeof(VAR_14));
 VAR_14.ioc_setup[0] = VAR_3;
 VAR_14.ioc_setupcnt = VAR_4;
 VAR_14.ioc_name = (char *)VAR_5;
 VAR_14.ioc_tparamcnt = VAR_6;
 VAR_14.ioc_tparam = VAR_7;
 VAR_14.ioc_tdatacnt = VAR_8;
 VAR_14.ioc_tdata = VAR_9;
 VAR_14.ioc_rparamcnt = *VAR_10;
 VAR_14.ioc_rparam = VAR_11;
 VAR_14.ioc_rdatacnt = *VAR_12;
 VAR_14.ioc_rdata = VAR_13;
 if (FUNC_1(VAR_2->ct_fd, VAR_0, &VAR_14) == -1)
  return VAR_1;
 *VAR_10 = VAR_14.ioc_rparamcnt;
 *VAR_12 = VAR_14.ioc_rdatacnt;
 return 0;
}
