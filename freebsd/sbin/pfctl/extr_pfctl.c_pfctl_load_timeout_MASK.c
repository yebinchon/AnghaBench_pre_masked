
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_tm {unsigned int timeout; unsigned int seconds; } ;
struct pfctl {int dev; } ;
typedef int pt ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct pfioc_tm*) ;
 int FUNC_1 (struct pfioc_tm*,int ,int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct pfctl *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct pfioc_tm VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.timeout = VAR_2;
 VAR_4.seconds = VAR_3;
 if (FUNC_0(VAR_1->dev, VAR_0, &VAR_4)) {
  FUNC_2("DIOCSETTIMEOUT");
  return (1);
 }
 return (0);
}
