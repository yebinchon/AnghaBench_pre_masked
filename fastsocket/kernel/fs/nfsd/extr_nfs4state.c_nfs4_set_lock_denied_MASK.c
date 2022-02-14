
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cl_id; scalar_t__ cl_boot; } ;
struct nfsd4_lock_denied {scalar_t__ ld_start; scalar_t__ ld_length; int ld_type; TYPE_2__ ld_clientid; struct nfs4_stateowner* ld_sop; } ;
struct nfs4_stateowner {TYPE_1__* so_client; int so_ref; } ;
struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; scalar_t__ fl_type; scalar_t__ fl_owner; int * fl_lmops; } ;
struct TYPE_3__ {TYPE_2__ cl_clientid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;

__attribute__((used)) static inline void
FUNC_1(struct file_lock *VAR_5, struct nfsd4_lock_denied *VAR_6)
{
 struct nfs4_stateowner *VAR_7;

 if (VAR_5->fl_lmops == &VAR_4) {
  VAR_7 = (struct nfs4_stateowner *) VAR_5->fl_owner;
  FUNC_0(&VAR_7->so_ref);
  VAR_6->ld_sop = VAR_7;
  VAR_6->ld_clientid = VAR_7->so_client->cl_clientid;
 } else {
  VAR_6->ld_sop = ((void*)0);
  VAR_6->ld_clientid.cl_boot = 0;
  VAR_6->ld_clientid.cl_id = 0;
 }
 VAR_6->ld_start = VAR_5->fl_start;
 VAR_6->ld_length = VAR_1;
 if (VAR_5->fl_end != VAR_1)
  VAR_6->ld_length = VAR_5->fl_end - VAR_5->fl_start + 1;
 VAR_6->ld_type = VAR_2;
 if (VAR_5->fl_type != VAR_0)
  VAR_6->ld_type = VAR_3;
}
