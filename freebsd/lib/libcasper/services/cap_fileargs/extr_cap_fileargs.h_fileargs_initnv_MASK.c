
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int fileargs_t ;


 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int ,int *,int ,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static inline fileargs_t *
FUNC_4(nvlist_t *VAR_0)
{
 fileargs_t *VAR_1;

 VAR_1 = FUNC_1(0, ((void*)0),
     FUNC_3(VAR_0, "flags"),
     FUNC_0(VAR_0, "mode", 0),
     ((void*)0),
     FUNC_3(VAR_0, "operations"));
 FUNC_2(VAR_0);

 return (VAR_1);
}
