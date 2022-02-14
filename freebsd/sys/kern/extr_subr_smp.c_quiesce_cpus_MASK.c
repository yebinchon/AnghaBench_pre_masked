
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct pcpu {TYPE_1__* pc_idlethread; } ;
typedef int cpuset_t ;
struct TYPE_2__ {scalar_t__ td_generation; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcpu* FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int (*) (int ,char const*,int),int,char const*,int) ;

int
FUNC_8(cpuset_t VAR_4, const char *VAR_5, int VAR_6)
{
 struct pcpu *VAR_7;
 u_int VAR_8[VAR_1];
 int VAR_9;
 int VAR_10;

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 <= VAR_3; VAR_10++) {
  if (!FUNC_1(VAR_10, &VAR_4) || FUNC_0(VAR_10))
   continue;
  VAR_7 = FUNC_2(VAR_10);
  VAR_8[VAR_10] = VAR_7->pc_idlethread->td_generation;
 }
 for (VAR_10 = 0; VAR_10 <= VAR_3; VAR_10++) {
  if (!FUNC_1(VAR_10, &VAR_4) || FUNC_0(VAR_10))
   continue;
  VAR_7 = FUNC_2(VAR_10);
  FUNC_5(VAR_2);
  FUNC_3(VAR_2, VAR_10);
  FUNC_6(VAR_2);
  while (VAR_8[VAR_10] == VAR_7->pc_idlethread->td_generation) {
   VAR_9 = FUNC_7(FUNC_8, VAR_6, VAR_5, 1);
   if (VAR_9 != VAR_0)
    goto out;
   VAR_9 = 0;
  }
 }
out:
 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 FUNC_6(VAR_2);

 return (VAR_9);
}
