
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_kstack {int dummy; } ;
typedef size_t pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct kinfo_kstack*) ;
 struct kinfo_kstack* FUNC_1 (size_t) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int ,struct kinfo_kstack*,size_t*,int *,int ) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct kinfo_kstack *
FUNC_6(pid_t VAR_7, int *VAR_8)
{
 struct kinfo_kstack *VAR_9;
 int VAR_10, VAR_11[4];
 size_t VAR_12;

 VAR_11[0] = VAR_0;
 VAR_11[1] = VAR_4;
 VAR_11[2] = VAR_5;
 VAR_11[3] = VAR_7;

 VAR_12 = 0;
 VAR_10 = FUNC_3(VAR_11, FUNC_2(VAR_11), ((void*)0), &VAR_12, ((void*)0), 0);
 if (VAR_10 < 0 && VAR_6 != VAR_3 && VAR_6 != VAR_2 && VAR_6 != VAR_1) {
  FUNC_4("sysctl: kern.proc.kstack: %d", VAR_7);
  return (((void*)0));
 }
 if (VAR_10 == -1 && VAR_6 == VAR_1) {
  FUNC_5("sysctl: kern.proc.kstack unavailable"
      " (options DDB or options STACK required in kernel)");
  return (((void*)0));
 }
 if (VAR_10 == -1)
  return (((void*)0));
 VAR_9 = FUNC_1(VAR_12);
 if (VAR_9 == ((void*)0)) {
  FUNC_4("malloc(%zu)", VAR_12);
  return (((void*)0));
 }
 if (FUNC_3(VAR_11, FUNC_2(VAR_11), VAR_9, &VAR_12, ((void*)0), 0) == -1) {
  FUNC_4("sysctl: kern.proc.pid: %d", VAR_7);
  FUNC_0(VAR_9);
  return (((void*)0));
 }
 *VAR_8 = VAR_12 / sizeof(*VAR_9);

 return (VAR_9);
}
