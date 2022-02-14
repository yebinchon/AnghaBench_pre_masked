
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct proc {int p_flag2; } ;
struct nfsd_nfsd_args {int maxthreads; int minthreads; int principal; } ;
typedef int principal ;
typedef int bool_t ;
struct TYPE_5__ {int modifyfs; } ;
struct TYPE_4__ {int sp_maxthreads; int sp_minthreads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (int ,char*,int,int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct nfsd_nfsd_args*,struct thread*) ;
 scalar_t__ VAR_11 ;
 int* VAR_12 ;
 int FUNC_7 (int) ;
 TYPE_1__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,char*,int ,int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_15 ;

int
FUNC_12(struct thread *VAR_16, struct nfsd_nfsd_args *VAR_17)
{
 char VAR_18[VAR_1 + 5];
 struct proc *VAR_19;
 int VAR_20 = 0;
 bool_t VAR_21, VAR_22, VAR_23;

 VAR_20 = FUNC_5(VAR_17->principal, VAR_18, sizeof (VAR_18),
     ((void*)0));
 if (VAR_20)
  goto out;
 FUNC_0();
 if (VAR_9 == 0) {
  VAR_10 = VAR_15;
  VAR_19 = VAR_16->td_proc;
  FUNC_3(VAR_19);
  VAR_19->p_flag2 |= VAR_8;
  FUNC_4(VAR_19);
  VAR_9++;

  FUNC_1();
  VAR_20 = FUNC_6(VAR_17, VAR_16);
  if (VAR_20 == 0) {

   if (VAR_18[0] != '\0') {
    VAR_21 = FUNC_10(VAR_18,
        "kerberosv5", VAR_0, VAR_4,
        VAR_5);
    VAR_22 = FUNC_10(VAR_18,
        "kerberosv5", VAR_0, VAR_4,
        VAR_6);
    VAR_23 = FUNC_10(VAR_18,
        "kerberosv5", VAR_0, VAR_4,
        VAR_7);

    if (!VAR_21 || !VAR_22 || !VAR_23)
     FUNC_8(
         "nfsd: can't register svc name\n");
   }

   VAR_13->sp_minthreads = VAR_17->minthreads;
   VAR_13->sp_maxthreads = VAR_17->maxthreads;





   if (VAR_11 > 0) {
    VAR_12[VAR_2] = 1;
    VAR_14[VAR_3].modifyfs = 1;
   }

   FUNC_11(VAR_13);


   VAR_12[VAR_2] = 0;
   VAR_14[VAR_3].modifyfs = 0;

   if (VAR_18[0] != '\0') {
    FUNC_9(VAR_4, VAR_5);
    FUNC_9(VAR_4, VAR_6);
    FUNC_9(VAR_4, VAR_7);
   }
  }
  FUNC_0();
  VAR_9--;
  FUNC_7(1);
  FUNC_3(VAR_19);
  VAR_19->p_flag2 &= ~VAR_8;
  FUNC_4(VAR_19);
 }
 FUNC_1();

out:
 FUNC_2(VAR_20);
 return (VAR_20);
}
