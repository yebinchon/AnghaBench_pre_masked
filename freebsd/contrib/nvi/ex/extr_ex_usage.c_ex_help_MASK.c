
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef int EXCMD ;


 int FUNC_0 (int *,char*) ;

int
FUNC_1(SCR *VAR_0, EXCMD *VAR_1)
{
 (void)FUNC_0(VAR_0,
     "To see the list of vi commands, enter \":viusage<CR>\"\n");
 (void)FUNC_0(VAR_0,
     "To see the list of ex commands, enter \":exusage<CR>\"\n");
 (void)FUNC_0(VAR_0,
     "For an ex command usage statement enter \":exusage [cmd]<CR>\"\n");
 (void)FUNC_0(VAR_0,
     "For a vi key usage statement enter \":viusage [key]<CR>\"\n");
 (void)FUNC_0(VAR_0, "To exit, enter \":q!\"\n");
 return (0);
}
