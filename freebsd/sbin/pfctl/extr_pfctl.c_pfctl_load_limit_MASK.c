
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_limit {unsigned int index; unsigned int limit; } ;
struct pfctl {int dev; } ;
typedef int pl ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct pfioc_limit*) ;
 int FUNC_1 (struct pfioc_limit*,int ,int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct pfctl *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 struct pfioc_limit VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.index = VAR_4;
 VAR_6.limit = VAR_5;
 if (FUNC_0(VAR_3->dev, VAR_0, &VAR_6)) {
  if (VAR_2 == VAR_1)
   FUNC_2("Current pool size exceeds requested hard limit");
  else
   FUNC_2("DIOCSETLIMIT");
  return (1);
 }
 return (0);
}
