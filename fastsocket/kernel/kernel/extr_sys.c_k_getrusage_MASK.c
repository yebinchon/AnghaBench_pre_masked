
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct rusage {unsigned long ru_maxrss; int ru_stime; int ru_utime; int ru_oublock; int ru_inblock; int ru_majflt; int ru_minflt; int ru_nivcsw; int ru_nvcsw; } ;
struct mm_struct {int dummy; } ;
typedef int cputime_t ;
struct TYPE_2__ {unsigned long maxrss; unsigned long cmaxrss; int oublock; int inblock; int maj_flt; int min_flt; int nivcsw; int nvcsw; int coublock; int cinblock; int cmaj_flt; int cmin_flt; int cnivcsw; int cnvcsw; int cstime; int cutime; } ;


 int FUNC_0 () ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (struct task_struct*,struct rusage*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mm_struct* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*,unsigned long*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct mm_struct*) ;
 struct task_struct* FUNC_8 (struct task_struct*) ;
 int FUNC_9 (unsigned long*,struct mm_struct*) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (struct task_struct*,int *,int *) ;
 int FUNC_12 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static void FUNC_13(struct task_struct *VAR_4, int VAR_5, struct rusage *VAR_6)
{
 struct task_struct *VAR_7;
 unsigned long VAR_8;
 cputime_t VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = 0;

 FUNC_6((char *) VAR_6, 0, sizeof *VAR_6);
 VAR_11 = VAR_12 = VAR_2;

 if (VAR_5 == VAR_1) {
  FUNC_10(VAR_3, &VAR_11, &VAR_12);
  FUNC_1(VAR_4, VAR_6);
  VAR_13 = VAR_4->signal->maxrss;
  goto out;
 }

 if (!FUNC_5(VAR_4, &VAR_8))
  return;

 switch (VAR_5) {
  case 130:
  case 129:
   VAR_11 = VAR_4->signal->cutime;
   VAR_12 = VAR_4->signal->cstime;
   VAR_6->ru_nvcsw = VAR_4->signal->cnvcsw;
   VAR_6->ru_nivcsw = VAR_4->signal->cnivcsw;
   VAR_6->ru_minflt = VAR_4->signal->cmin_flt;
   VAR_6->ru_majflt = VAR_4->signal->cmaj_flt;
   VAR_6->ru_inblock = VAR_4->signal->cinblock;
   VAR_6->ru_oublock = VAR_4->signal->coublock;
   VAR_13 = VAR_4->signal->cmaxrss;

   if (VAR_5 == 129)
    break;

  case 128:
   FUNC_11(VAR_4, &VAR_9, &VAR_10);
   VAR_11 = FUNC_2(VAR_11, VAR_9);
   VAR_12 = FUNC_2(VAR_12, VAR_10);
   VAR_6->ru_nvcsw += VAR_4->signal->nvcsw;
   VAR_6->ru_nivcsw += VAR_4->signal->nivcsw;
   VAR_6->ru_minflt += VAR_4->signal->min_flt;
   VAR_6->ru_majflt += VAR_4->signal->maj_flt;
   VAR_6->ru_inblock += VAR_4->signal->inblock;
   VAR_6->ru_oublock += VAR_4->signal->oublock;
   if (VAR_13 < VAR_4->signal->maxrss)
    VAR_13 = VAR_4->signal->maxrss;
   VAR_7 = VAR_4;
   do {
    FUNC_1(VAR_7, VAR_6);
    VAR_7 = FUNC_8(VAR_7);
   } while (VAR_7 != VAR_4);
   break;

  default:
   FUNC_0();
 }
 FUNC_12(VAR_4, &VAR_8);

out:
 FUNC_3(VAR_11, &VAR_6->ru_utime);
 FUNC_3(VAR_12, &VAR_6->ru_stime);

 if (VAR_5 != 129) {
  struct mm_struct *VAR_14 = FUNC_4(VAR_4);
  if (VAR_14) {
   FUNC_9(&VAR_13, VAR_14);
   FUNC_7(VAR_14);
  }
 }
 VAR_6->ru_maxrss = VAR_13 * (VAR_0 / 1024);
}
