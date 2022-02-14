
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfioc_tm {scalar_t__ timeout; int seconds; } ;
typedef int pt ;
struct TYPE_2__ {char* name; scalar_t__ timeout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,struct pfioc_tm*) ;
 int FUNC_2 (struct pfioc_tm*,int ,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;

int
FUNC_5(int VAR_5, int VAR_6)
{
 struct pfioc_tm VAR_7;
 int VAR_8;

 if (VAR_6 & VAR_3)
  FUNC_3("TIMEOUTS:");
 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 for (VAR_8 = 0; VAR_4[VAR_8].name; VAR_8++) {
  VAR_7.timeout = VAR_4[VAR_8].timeout;
  if (FUNC_1(VAR_5, VAR_0, &VAR_7))
   FUNC_0(1, "DIOCGETTIMEOUT");
  FUNC_4("%-20s %10d", VAR_4[VAR_8].name, VAR_7.seconds);
  if (VAR_4[VAR_8].timeout >= VAR_2 &&
      VAR_4[VAR_8].timeout <= VAR_1)
   FUNC_4(" states");
  else
   FUNC_4("s");
  FUNC_4("\n");
 }
 return (0);

}
