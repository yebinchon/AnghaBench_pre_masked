
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct umtx_shm_reg {int ushm_refcnt; int ushm_flags; int ushm_obj; int ushm_cred; int ushm_key; } ;
struct TYPE_3__ {int object; } ;
struct TYPE_4__ {TYPE_1__ shared; } ;
struct umtx_key {size_t hash; TYPE_2__ info; } ;
struct ucred {int cr_ruidinfo; } ;
struct thread {struct ucred* td_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct umtx_shm_reg*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,struct umtx_shm_reg*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct umtx_key const*,int *,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct ucred*) ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ucred*,int ) ;
 int FUNC_10 (int ,int ) ;
 struct umtx_shm_reg* FUNC_11 (int ,int) ;
 struct umtx_shm_reg* FUNC_12 (struct umtx_key const*) ;
 struct umtx_shm_reg* FUNC_13 (struct umtx_key const*) ;
 int FUNC_14 (struct umtx_shm_reg*) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_13, const struct umtx_key *VAR_14,
    struct umtx_shm_reg **VAR_15)
{
 struct umtx_shm_reg *VAR_16, *VAR_17;
 struct ucred *VAR_18;
 int VAR_19;

 VAR_16 = FUNC_12(VAR_14);
 if (VAR_16 != ((void*)0)) {
  *VAR_15 = VAR_16;
  return (0);
 }
 VAR_18 = VAR_13->td_ucred;
 if (!FUNC_4(VAR_18->cr_ruidinfo, 1, FUNC_6(VAR_13, VAR_5)))
  return (VAR_0);
 VAR_16 = FUNC_11(VAR_9, VAR_1 | VAR_2);
 VAR_16->ushm_refcnt = 1;
 FUNC_3(VAR_14, &VAR_16->ushm_key, sizeof(*VAR_14));
 VAR_16->ushm_obj = FUNC_9(VAR_13->td_ucred, VAR_3);
 VAR_16->ushm_cred = FUNC_5(VAR_18);
 VAR_19 = FUNC_10(VAR_16->ushm_obj, VAR_4);
 if (VAR_19 != 0) {
  FUNC_14(VAR_16);
  return (VAR_19);
 }
 FUNC_7(&VAR_8);
 VAR_17 = FUNC_13(VAR_14);
 if (VAR_17 != ((void*)0)) {
  FUNC_8(&VAR_8);
  FUNC_14(VAR_16);
  *VAR_15 = VAR_17;
  return (0);
 }
 VAR_16->ushm_refcnt++;
 FUNC_1(&VAR_10[VAR_14->hash], VAR_16, VAR_12);
 FUNC_0(FUNC_2(VAR_14->info.shared.object), VAR_16,
     VAR_11);
 VAR_16->ushm_flags = VAR_7 | VAR_6;
 FUNC_8(&VAR_8);
 *VAR_15 = VAR_16;
 return (0);
}
