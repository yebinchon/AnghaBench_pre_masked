
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(int VAR_1)
{
 int VAR_2 = -1;






 if (FUNC_1(VAR_1, 2) == 0)
  VAR_2 = 0;

 FUNC_1(VAR_1, 1);

 if (VAR_2 == 0)
  FUNC_0(VAR_0, "All identities removed.\n");
 else
  FUNC_0(VAR_0, "Failed to remove all identities.\n");

 return VAR_2;
}
