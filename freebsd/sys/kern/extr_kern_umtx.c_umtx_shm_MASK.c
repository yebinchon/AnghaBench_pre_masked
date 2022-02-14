
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct umtx_shm_reg {int ushm_obj; } ;
struct umtx_key {int shared; } ;
struct thread {int* td_retval; int td_ucred; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct thread*,struct file**,int*,int ,int *) ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct file*,int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 int FUNC_9 (void*,int ,int ,struct umtx_key*) ;
 int FUNC_10 (struct umtx_key*) ;
 int FUNC_11 (struct thread*,void*) ;
 int FUNC_12 (struct thread*,struct umtx_key*,struct umtx_shm_reg**) ;
 struct umtx_shm_reg* FUNC_13 (struct umtx_key*) ;
 int FUNC_14 (struct umtx_shm_reg*,int) ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_12, void *VAR_13, u_int VAR_14)
{
 struct umtx_key VAR_15;
 struct umtx_shm_reg *VAR_16;
 struct file *VAR_17;
 int VAR_18, VAR_19;

 if (FUNC_2(VAR_14 & (VAR_8 | VAR_10 |
     VAR_9| VAR_7)) != 1)
  return (VAR_1);
 if ((VAR_14 & VAR_7) != 0)
  return (FUNC_11(VAR_12, VAR_13));
 VAR_18 = FUNC_9(VAR_13, VAR_6, VAR_5, &VAR_15);
 if (VAR_18 != 0)
  return (VAR_18);
 FUNC_1(VAR_15.shared == 1, ("non-shared key"));
 if ((VAR_14 & VAR_8) != 0) {
  VAR_18 = FUNC_12(VAR_12, &VAR_15, &VAR_16);
 } else {
  VAR_16 = FUNC_13(&VAR_15);
  if (VAR_16 == ((void*)0))
   VAR_18 = VAR_2;
 }
 FUNC_10(&VAR_15);
 if (VAR_18 != 0)
  return (VAR_18);
 FUNC_1(VAR_16 != ((void*)0), ("no reg"));
 if ((VAR_14 & VAR_9) != 0) {
  FUNC_14(VAR_16, 1);
 } else {
   VAR_18 = FUNC_3(VAR_12, &VAR_17, &VAR_19, VAR_3, ((void*)0));
  if (VAR_18 == 0) {
   FUNC_8(VAR_16->ushm_obj);
   FUNC_5(VAR_17, FUNC_0(VAR_4), VAR_0, VAR_16->ushm_obj,
       &VAR_11);
   VAR_12->td_retval[0] = VAR_19;
   FUNC_4(VAR_17, VAR_12);
  }
 }
 FUNC_14(VAR_16, 0);
 return (VAR_18);
}
