
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {scalar_t__ type; int ki_pid; int core; int envv; int argv; } ;
struct kinfo_proc {scalar_t__ type; int ki_pid; int core; int envv; int argv; } ;
struct argvec {size_t bufsize; char* buf; char** argv; int argc; } ;
typedef enum psc_type { ____Placeholder_psc_type } psc_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct argvec* FUNC_0 (size_t) ;
 int FUNC_1 (struct procstat*) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int*) ;
 int * FUNC_3 (int ,int,char*,size_t*) ;
 char** FUNC_4 (char**,int) ;
 char* FUNC_5 (char*,size_t) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int*,int ,char*,size_t*,int *,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static char **
FUNC_10(struct procstat *VAR_13, struct kinfo_proc *VAR_14, size_t VAR_15, int VAR_16)
{
 int VAR_17, VAR_18[4], VAR_19, VAR_20;
 struct argvec *VAR_21, **VAR_22;
 enum psc_type VAR_23;
 size_t VAR_24;
 char *VAR_25, **VAR_26;

 FUNC_1(VAR_13);
 FUNC_1(VAR_14);
 if (VAR_13->type == VAR_8) {
  FUNC_9("can't use kvm access method");
  return (((void*)0));
 }
 if (VAR_13->type != VAR_9 &&
     VAR_13->type != VAR_7) {
  FUNC_9("unknown access method: %d", VAR_13->type);
  return (((void*)0));
 }

 if (VAR_15 == 0 || VAR_15 > VAR_0)
  VAR_15 = VAR_0;

 VAR_22 = (struct argvec **)(VAR_16 ? &VAR_13->argv : &VAR_13->envv);
 VAR_21 = *VAR_22;

 if (VAR_21 == ((void*)0))
 {
  VAR_21 = FUNC_0(VAR_15);
  if (VAR_21 == ((void*)0))
  {
   FUNC_8("malloc(%zu)", VAR_15);
   return (((void*)0));
  }
  *VAR_22 = VAR_21;
 } else if (VAR_21->bufsize < VAR_15) {
  VAR_21->buf = FUNC_5(VAR_21->buf, VAR_15);
  if (VAR_21->buf == ((void*)0)) {
   FUNC_8("malloc(%zu)", VAR_15);
   return (((void*)0));
  }
 }
 if (VAR_13->type == VAR_9) {
  VAR_18[0] = VAR_1;
  VAR_18[1] = VAR_4;
  VAR_18[2] = VAR_16 ? VAR_6 : VAR_5;
  VAR_18[3] = VAR_14->ki_pid;
  VAR_24 = VAR_15;
  VAR_17 = FUNC_7(VAR_18, FUNC_2(VAR_18), VAR_21->buf, &VAR_24, ((void*)0), 0);
  if (VAR_17 != 0 && VAR_12 != VAR_3 && VAR_12 != VAR_2)
   FUNC_8("sysctl(kern.proc.%s)", VAR_16 ? "env" : "args");
  if (VAR_17 != 0 || VAR_24 == 0)
   return (((void*)0));
 } else {
  VAR_23 = VAR_16 ? VAR_11 : VAR_10;
  VAR_24 = VAR_15;
  if (FUNC_3(VAR_13->core, VAR_23, VAR_21->buf, &VAR_24)
      == ((void*)0)) {
   return (((void*)0));
  }
 }

 VAR_26 = VAR_21->argv;
 VAR_19 = VAR_21->argc;
 VAR_20 = 0;
 for (VAR_25 = VAR_21->buf; VAR_25 < VAR_21->buf + VAR_24; VAR_25 += FUNC_6(VAR_25) + 1) {
  VAR_26[VAR_20++] = VAR_25;
  if (VAR_20 < VAR_19)
   continue;

  VAR_19 += VAR_19;
  VAR_26 = FUNC_4(VAR_26, sizeof(char *) * VAR_19);
  if (VAR_26 == ((void*)0)) {
   FUNC_8("malloc(%zu)", sizeof(char *) * VAR_19);
   return (((void*)0));
  }
  VAR_21->argv = VAR_26;
  VAR_21->argc = VAR_19;
 }
 VAR_26[VAR_20] = ((void*)0);

 return (VAR_26);
}
