
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int name ;
typedef int longlong_t ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (int *,scalar_t__,char*,int,int,scalar_t__*) ;

int
FUNC_2(objset_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2, uint64_t *VAR_3)
{
 char VAR_4[20];

 (void) FUNC_0(VAR_4, sizeof (VAR_4), "%llx", (longlong_t)VAR_2);
 return (FUNC_1(VAR_0, VAR_1, VAR_4, 8, 1, VAR_3));
}
