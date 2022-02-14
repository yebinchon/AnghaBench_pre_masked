
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int *) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int * FUNC_2 () ;

__attribute__((used)) static nvlist_t *
FUNC_3(void)
{
 nvlist_t *VAR_1;

 VAR_1 = FUNC_2();
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_1, "num_vfs", VAR_0, -1);
 FUNC_0(VAR_1, "device", VAR_0, ((void*)0));

 return (VAR_1);
}
