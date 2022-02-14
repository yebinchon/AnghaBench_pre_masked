
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SMDB_DATABASE ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char,int) ;

SMDB_DATABASE *
FUNC_2()
{
 SMDB_DATABASE *VAR_0;

 VAR_0 = (SMDB_DATABASE *) FUNC_0(sizeof(SMDB_DATABASE));

 if (VAR_0 != ((void*)0))
  (void) FUNC_1(VAR_0, '\0', sizeof(SMDB_DATABASE));

 return VAR_0;
}
