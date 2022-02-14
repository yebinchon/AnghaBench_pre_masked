
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int fileargs_t ;
typedef int cap_channel_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

fileargs_t *
FUNC_5(nvlist_t *VAR_0)
{
        cap_channel_t *VAR_1;
 fileargs_t *VAR_2;

 if (VAR_0 == ((void*)0)) {
  return (FUNC_3(((void*)0), 0));
 }

        VAR_1 = FUNC_1();
        if (VAR_1 == ((void*)0)) {
  FUNC_4(VAR_0);
                return (((void*)0));
 }

        VAR_2 = FUNC_2(VAR_1, VAR_0);
        FUNC_0(VAR_1);

 return (VAR_2);
}
