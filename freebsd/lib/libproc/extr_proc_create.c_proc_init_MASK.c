
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; } ;
struct proc_handle {int flags; int status; int model; int execpath; int * procstat; TYPE_1__ public; } ;
struct kinfo_proc {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 struct proc_handle* FUNC_2 (int) ;
 int FUNC_3 (struct proc_handle*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,struct kinfo_proc*) ;
 int FUNC_6 (int *,struct kinfo_proc*,int ,int) ;
 struct kinfo_proc* FUNC_7 (int *,int ,int ,int*) ;
 int * FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(pid_t VAR_7, int VAR_8, int VAR_9, struct proc_handle **VAR_10)
{
 struct kinfo_proc *VAR_11;
 struct proc_handle *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = VAR_1;
 if ((VAR_12 = FUNC_2(sizeof(*VAR_12))) == ((void*)0))
  goto out;

 FUNC_3(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->public.pid = VAR_7;
 VAR_12->flags = VAR_8;
 VAR_12->status = VAR_9;
 VAR_12->procstat = FUNC_8();
 if (VAR_12->procstat == ((void*)0))
  goto out;


 if ((VAR_11 = FUNC_7(VAR_12->procstat, VAR_2, VAR_7,
     &VAR_15)) == ((void*)0))
  goto out;
 VAR_13 = FUNC_6(VAR_12->procstat, VAR_11, VAR_12->execpath,
     sizeof(VAR_12->execpath));
 FUNC_5(VAR_12->procstat, VAR_11);
 if (VAR_13 != 0)
  goto out;


 if ((VAR_16 = FUNC_4(VAR_12->execpath, VAR_3)) < 0) {
  VAR_13 = VAR_6;
  goto out;
 }
 VAR_14 = FUNC_1(VAR_16);
 switch (VAR_14) {
 case 129:
  VAR_12->model = VAR_5;
  break;
 case 130:
  VAR_12->model = VAR_4;
  break;
 case 128:
 default:
  VAR_13 = VAR_0;
  break;
 }
 (void)FUNC_0(VAR_16);

out:
 *VAR_10 = VAR_12;
 return (VAR_13);
}
