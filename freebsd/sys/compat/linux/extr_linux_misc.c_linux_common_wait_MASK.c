
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct __wrusage {int dummy; } ;
struct TYPE_3__ {int si_pid; } ;
typedef TYPE_1__ siginfo_t ;
typedef int idtype_t ;
typedef scalar_t__ id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (struct thread*,int ,scalar_t__,int*,int,struct __wrusage*,TYPE_1__*) ;
 int FUNC_8 (struct thread*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct thread *VAR_7, int VAR_8, int *VAR_9,
    int VAR_10, struct __wrusage *VAR_11)
{
 siginfo_t VAR_12;
 idtype_t VAR_13;
 id_t VAR_14;
 int VAR_15, VAR_16, VAR_17;

 if (VAR_8 == VAR_4) {
  VAR_13 = VAR_0;
  VAR_14 = 0;
 } else if (VAR_8 < 0) {
  VAR_13 = VAR_1;
  VAR_14 = (id_t)-VAR_8;
 } else {
  VAR_13 = VAR_2;
  VAR_14 = (id_t)VAR_8;
 }





 VAR_10 |= VAR_5 | VAR_6;
 VAR_15 = FUNC_7(VAR_7, VAR_13, VAR_14, &VAR_16, VAR_10, VAR_11, &VAR_12);
 if (VAR_15)
  return (VAR_15);

 if (VAR_9) {
  VAR_17 = VAR_16 & 0xffff;
  if (FUNC_1(VAR_17)) {
   VAR_17 = (VAR_17 & 0xffffff80) |
       FUNC_5(FUNC_4(VAR_17));
  } else if (FUNC_2(VAR_17)) {
   VAR_17 = (VAR_17 & 0xffff00ff) |
       (FUNC_5(FUNC_3(VAR_17)) << 8);

   if (FUNC_3(VAR_16) == VAR_3) {
    VAR_17 = FUNC_8(VAR_7,
        VAR_12.si_pid, VAR_17);
   }

  } else if (FUNC_0(VAR_17)) {
   VAR_17 = 0xffff;
  }
  VAR_15 = FUNC_6(&VAR_17, VAR_9, sizeof(int));
 }

 return (VAR_15);
}
