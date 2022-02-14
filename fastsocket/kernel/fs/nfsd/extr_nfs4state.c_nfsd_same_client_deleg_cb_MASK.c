
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_delegation {scalar_t__ dl_client; } ;
struct file_lock {scalar_t__ fl_lmops; scalar_t__ fl_owner; } ;



__attribute__((used)) static
int FUNC_0(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 struct nfs4_delegation *VAR_2 =
  (struct nfs4_delegation *)VAR_0->fl_owner;
 struct nfs4_delegation *VAR_3 =
  (struct nfs4_delegation *)VAR_1->fl_owner;

 if (VAR_0->fl_lmops != VAR_1->fl_lmops)
  return 0;

 return VAR_2->dl_client == VAR_3->dl_client;
}
