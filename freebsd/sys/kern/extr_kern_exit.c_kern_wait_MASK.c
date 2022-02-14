
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rusage {int dummy; } ;
struct __wrusage {struct rusage wru_self; } ;
typedef scalar_t__ pid_t ;
typedef int idtype_t ;
typedef scalar_t__ id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thread*,int ,scalar_t__,int*,int,struct __wrusage*,int *) ;

int
FUNC_1(struct thread *VAR_6, pid_t VAR_7, int *VAR_8, int VAR_9,
    struct rusage *VAR_10)
{
 struct __wrusage VAR_11, *VAR_12;
 idtype_t VAR_13;
 id_t VAR_14;
 int VAR_15;






 if (VAR_7 == VAR_3) {
  VAR_13 = VAR_0;
  VAR_14 = 0;
 } else if (VAR_7 < 0) {
  VAR_13 = VAR_1;
  VAR_14 = (id_t)-VAR_7;
 } else {
  VAR_13 = VAR_2;
  VAR_14 = (id_t)VAR_7;
 }

 if (VAR_10 != ((void*)0))
  VAR_12 = &VAR_11;
 else
  VAR_12 = ((void*)0);





 VAR_9 |= VAR_4 | VAR_5;
 VAR_15 = FUNC_0(VAR_6, VAR_13, VAR_14, VAR_8, VAR_9, VAR_12, ((void*)0));
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_11.wru_self;
 return (VAR_15);
}
