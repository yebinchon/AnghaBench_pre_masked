
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef size_t u_int ;
struct thread {int dummy; } ;
struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
struct proc {scalar_t__ p_cpulimit; int p_flag; TYPE_2__* p_vmspace; TYPE_1__* p_sysent; struct plimit* p_limit; int p_limco; } ;
struct plimit {struct rlimit* pl_rlimit; } ;
struct TYPE_4__ {int vm_map; } ;
struct TYPE_3__ {scalar_t__ sv_usrstack; int sv_stackprot; int (* sv_fixlimit ) (struct rlimit*,size_t) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int ,int ,int ,struct proc*,int ) ;
 struct thread* VAR_8 ;
 struct plimit* FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 (struct plimit*,struct plimit*) ;
 int FUNC_7 (struct plimit*) ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_8 (struct thread*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct rlimit*,int const) ;
 int FUNC_11 (struct rlimit*,size_t) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__,int ,int ) ;

int
FUNC_14(struct thread *VAR_14, struct proc *VAR_15, u_int VAR_16,
    struct rlimit *VAR_17)
{
 struct plimit *VAR_18, *VAR_19;
 struct rlimit *VAR_20;
 struct rlimit VAR_21;
 int VAR_22;

 if (VAR_16 >= VAR_5)
  return (VAR_0);




 if (VAR_17->rlim_cur < 0)
  VAR_17->rlim_cur = VAR_4;
 if (VAR_17->rlim_max < 0)
  VAR_17->rlim_max = VAR_4;

 VAR_21.rlim_cur = 0;
 VAR_18 = FUNC_5();
 FUNC_1(VAR_15);
 VAR_19 = VAR_15->p_limit;
 VAR_20 = &VAR_19->pl_rlimit[VAR_16];
 if (VAR_17->rlim_cur > VAR_20->rlim_max ||
     VAR_17->rlim_max > VAR_20->rlim_max)
  if ((VAR_22 = FUNC_8(VAR_14, VAR_2))) {
   FUNC_2(VAR_15);
   FUNC_7(VAR_18);
   return (VAR_22);
  }
 if (VAR_17->rlim_cur > VAR_17->rlim_max)
  VAR_17->rlim_cur = VAR_17->rlim_max;
 FUNC_6(VAR_18, VAR_19);
 VAR_20 = &VAR_18->pl_rlimit[VAR_16];

 switch (VAR_16) {

 case 132:
  if (VAR_17->rlim_cur != VAR_4 &&
      VAR_15->p_cpulimit == VAR_4)
   FUNC_4(&VAR_15->p_limco, VAR_6, 0,
       VAR_9, VAR_15, FUNC_0(1));
  VAR_15->p_cpulimit = VAR_17->rlim_cur;
  break;
 case 131:
  if (VAR_17->rlim_cur > VAR_10)
   VAR_17->rlim_cur = VAR_10;
  if (VAR_17->rlim_max > VAR_10)
   VAR_17->rlim_max = VAR_10;
  break;

 case 128:
  if (VAR_17->rlim_cur > VAR_13)
   VAR_17->rlim_cur = VAR_13;
  if (VAR_17->rlim_max > VAR_13)
   VAR_17->rlim_max = VAR_13;
  VAR_21 = *VAR_20;
  if (VAR_15->p_sysent->sv_fixlimit != ((void*)0))
   VAR_15->p_sysent->sv_fixlimit(&VAR_21,
       128);
  break;

 case 130:
  if (VAR_17->rlim_cur > VAR_11)
   VAR_17->rlim_cur = VAR_11;
  if (VAR_17->rlim_max > VAR_11)
   VAR_17->rlim_max = VAR_11;
  break;

 case 129:
  if (VAR_17->rlim_cur > VAR_12)
   VAR_17->rlim_cur = VAR_12;
  if (VAR_17->rlim_max > VAR_12)
   VAR_17->rlim_max = VAR_12;
  if (VAR_17->rlim_cur < 1)
   VAR_17->rlim_cur = 1;
  if (VAR_17->rlim_max < 1)
   VAR_17->rlim_max = 1;
  break;
 }
 if (VAR_15->p_sysent->sv_fixlimit != ((void*)0))
  VAR_15->p_sysent->sv_fixlimit(VAR_17, VAR_16);
 *VAR_20 = *VAR_17;
 VAR_15->p_limit = VAR_18;
 FUNC_3(VAR_15);
 FUNC_2(VAR_15);
 FUNC_7(VAR_19);

 if (VAR_16 == 128 &&




     (VAR_14 != VAR_8 || (VAR_15->p_flag & VAR_3) == 0)) {





  if (VAR_17->rlim_cur != VAR_21.rlim_cur) {
   vm_offset_t VAR_23;
   vm_size_t VAR_24;
   vm_prot_t VAR_25;

   if (VAR_17->rlim_cur > VAR_21.rlim_cur) {
    VAR_25 = VAR_15->p_sysent->sv_stackprot;
    VAR_24 = VAR_17->rlim_cur - VAR_21.rlim_cur;
    VAR_23 = VAR_15->p_sysent->sv_usrstack -
        VAR_17->rlim_cur;
   } else {
    VAR_25 = VAR_7;
    VAR_24 = VAR_21.rlim_cur - VAR_17->rlim_cur;
    VAR_23 = VAR_15->p_sysent->sv_usrstack -
        VAR_21.rlim_cur;
   }
   VAR_23 = FUNC_12(VAR_23);
   VAR_24 = FUNC_9(VAR_24);
   (void)FUNC_13(&VAR_15->p_vmspace->vm_map,
       VAR_23, VAR_23 + VAR_24, VAR_25, VAR_1);
  }
 }

 return (0);
}
