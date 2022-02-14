
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct task_struct {int dummy; } ;
struct task_security_struct {scalar_t__ sid; scalar_t__ sockcreate_sid; scalar_t__ keycreate_sid; scalar_t__ create_sid; scalar_t__ exec_sid; } ;
struct cred {struct task_security_struct* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cred*) ;
 struct task_struct* VAR_13 ;
 int FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,struct task_struct*) ;
 struct cred* FUNC_7 () ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (void*,size_t,scalar_t__*) ;
 int FUNC_10 (void*,size_t,scalar_t__*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (struct task_struct*) ;
 scalar_t__ FUNC_13 (struct task_struct*) ;
 int FUNC_14 (struct task_struct*) ;
 struct task_struct* FUNC_15 (struct task_struct*) ;

__attribute__((used)) static int FUNC_16(struct task_struct *VAR_14,
          char *VAR_15, void *VAR_16, size_t VAR_17)
{
 struct task_security_struct *VAR_18;
 struct task_struct *VAR_19;
 struct cred *VAR_20;
 u32 VAR_21 = 0, VAR_22;
 int VAR_23;
 char *VAR_24 = VAR_16;

 if (VAR_13 != VAR_14) {


  return -VAR_1;
 }






 if (!FUNC_11(VAR_15, "exec"))
  VAR_23 = FUNC_4(VAR_14, VAR_8);
 else if (!FUNC_11(VAR_15, "fscreate"))
  VAR_23 = FUNC_4(VAR_14, VAR_9);
 else if (!FUNC_11(VAR_15, "keycreate"))
  VAR_23 = FUNC_4(VAR_14, VAR_10);
 else if (!FUNC_11(VAR_15, "sockcreate"))
  VAR_23 = FUNC_4(VAR_14, VAR_11);
 else if (!FUNC_11(VAR_15, "current"))
  VAR_23 = FUNC_4(VAR_14, VAR_7);
 else
  VAR_23 = -VAR_2;
 if (VAR_23)
  return VAR_23;


 if (VAR_17 && VAR_24[1] && VAR_24[1] != '\n') {
  if (VAR_24[VAR_17-1] == '\n') {
   VAR_24[VAR_17-1] = 0;
   VAR_17--;
  }
  VAR_23 = FUNC_9(VAR_16, VAR_17, &VAR_21);
  if (VAR_23 == -VAR_2 && !FUNC_11(VAR_15, "fscreate")) {
   if (!FUNC_2(VAR_0))
    return VAR_23;
   VAR_23 = FUNC_10(VAR_16, VAR_17,
             &VAR_21);
  }
  if (VAR_23)
   return VAR_23;
 }

 VAR_20 = FUNC_7();
 if (!VAR_20)
  return -VAR_3;







 VAR_18 = VAR_20->security;
 if (!FUNC_11(VAR_15, "exec")) {
  VAR_18->exec_sid = VAR_21;
 } else if (!FUNC_11(VAR_15, "fscreate")) {
  VAR_18->create_sid = VAR_21;
 } else if (!FUNC_11(VAR_15, "keycreate")) {
  VAR_23 = FUNC_6(VAR_21, VAR_14);
  if (VAR_23)
   goto abort_change;
  VAR_18->keycreate_sid = VAR_21;
 } else if (!FUNC_11(VAR_15, "sockcreate")) {
  VAR_18->sockcreate_sid = VAR_21;
 } else if (!FUNC_11(VAR_15, "current")) {
  VAR_23 = -VAR_2;
  if (VAR_21 == 0)
   goto abort_change;


  VAR_23 = -VAR_4;
  if (!FUNC_5()) {
   VAR_23 = FUNC_8(VAR_18->sid, VAR_21);
   if (VAR_23)
    goto abort_change;
  }


  VAR_23 = FUNC_1(VAR_18->sid, VAR_21, VAR_12,
         VAR_5, ((void*)0));
  if (VAR_23)
   goto abort_change;



  VAR_22 = 0;
  FUNC_12(VAR_14);
  VAR_19 = FUNC_15(VAR_14);
  if (VAR_19)
   VAR_22 = FUNC_13(VAR_19);
  FUNC_14(VAR_14);

  if (VAR_19) {
   VAR_23 = FUNC_1(VAR_22, VAR_21, VAR_12,
          VAR_6, ((void*)0));
   if (VAR_23)
    goto abort_change;
  }

  VAR_18->sid = VAR_21;
 } else {
  VAR_23 = -VAR_2;
  goto abort_change;
 }

 FUNC_3(VAR_20);
 return VAR_17;

abort_change:
 FUNC_0(VAR_20);
 return VAR_23;
}
