
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int dummy; } ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_1, int VAR_2)
{
 char VAR_3;

 if (VAR_2 == '\n')
  FUNC_1(VAR_1, '\r');

 VAR_3 = VAR_2;
 while (FUNC_0(VAR_0, &VAR_3, 1) == 0)
  continue;
}
