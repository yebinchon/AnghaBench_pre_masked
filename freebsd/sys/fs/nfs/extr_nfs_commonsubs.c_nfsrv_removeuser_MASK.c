
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsusrgrp {int * lug_cred; int lug_namelen; int lug_name; int lug_gid; int lug_uid; } ;
struct nfsrv_lughash {int lughead; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsrv_lughash* FUNC_0 (int ) ;
 struct nfsrv_lughash* FUNC_1 (int ,int ) ;
 struct nfsrv_lughash* FUNC_2 (int ) ;
 struct nfsrv_lughash* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,struct nfsusrgrp*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfsusrgrp*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(struct nfsusrgrp *VAR_5, int VAR_6)
{
 struct nfsrv_lughash *VAR_7;

 if (VAR_6 != 0) {
  VAR_7 = FUNC_2(VAR_5->lug_uid);
  FUNC_8(&VAR_7->mtx, VAR_0);
  FUNC_4(&VAR_7->lughead, VAR_5, VAR_3);
  VAR_7 = FUNC_3(VAR_5->lug_name, VAR_5->lug_namelen);
  FUNC_8(&VAR_7->mtx, VAR_0);
  FUNC_4(&VAR_7->lughead, VAR_5, VAR_2);
 } else {
  VAR_7 = FUNC_0(VAR_5->lug_gid);
  FUNC_8(&VAR_7->mtx, VAR_0);
  FUNC_4(&VAR_7->lughead, VAR_5, VAR_3);
  VAR_7 = FUNC_1(VAR_5->lug_name, VAR_5->lug_namelen);
  FUNC_8(&VAR_7->mtx, VAR_0);
  FUNC_4(&VAR_7->lughead, VAR_5, VAR_2);
 }
 FUNC_5(&VAR_4, -1);
 if (VAR_5->lug_cred != ((void*)0))
  FUNC_6(VAR_5->lug_cred);
 FUNC_7(VAR_5, VAR_1);
}
