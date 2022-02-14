
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfctl {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct pfctl *VAR_1, unsigned int VAR_2)
{
 if (FUNC_0(VAR_1->dev, VAR_0, &VAR_2)) {
  FUNC_1("DIOCSETDEBUG");
  return (1);
 }
 return (0);
}
