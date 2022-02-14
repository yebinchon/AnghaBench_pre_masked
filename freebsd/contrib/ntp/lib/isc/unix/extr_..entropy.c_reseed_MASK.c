
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int t ;
typedef int pid_t ;
typedef int pid ;
typedef int isc_time_t ;
struct TYPE_4__ {int initcount; } ;
typedef TYPE_1__ isc_entropy_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(isc_entropy_t *VAR_0) {
 isc_time_t VAR_1;
 pid_t VAR_2;

 if (VAR_0->initcount == 0) {
  VAR_2 = FUNC_2();
  FUNC_1(VAR_0, &VAR_2, sizeof(VAR_2), 0);
  VAR_2 = FUNC_3();
  FUNC_1(VAR_0, &VAR_2, sizeof(VAR_2), 0);
 }






 if (VAR_0->initcount > 100)
  if ((VAR_0->initcount % 50) != 0)
   return;

 FUNC_0(&VAR_1);
 FUNC_1(VAR_0, &VAR_1, sizeof(VAR_1), 0);
 VAR_0->initcount++;
}
