
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rate ;
typedef int off_t ;
typedef int caddr_t ;
struct TYPE_2__ {scalar_t__ n_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,long,long) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (char*,long,long) ;
 long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (long) ;
 int VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int) ;

int
FUNC_7(
 long VAR_8
 )
{
 long VAR_9;

 if (FUNC_0(VAR_3, (off_t)VAR_4[0].n_value, 0) == -1L)
     return (-1);

 VAR_9 = FUNC_3(FUNC_4(VAR_1));

 if (FUNC_6(VAR_3, (caddr_t)&VAR_8, sizeof(VAR_8)) != sizeof(VAR_8)) {
  FUNC_5(VAR_9);
  return (-1);
 }

 FUNC_5(VAR_9);

 if (VAR_8 != VAR_2) {
  if (VAR_7 > 3) {
   FUNC_2("adjtimed: clock rate (%lu) %ldus/s\n", VAR_8,
          (VAR_8 - VAR_2) * VAR_6);
  }
  if (VAR_5 > 3) {
   FUNC_1(VAR_0, "clock rate (%lu) %ldus/s", VAR_8,
    (VAR_8 - VAR_2) * VAR_6);
  }
 }

 return (0);
}
