
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,void*,size_t) ;
 int FUNC_4 (int,int*,size_t) ;
 int FUNC_5 (void*) ;
 int* FUNC_6 (int const*,size_t*) ;
 scalar_t__ FUNC_7 (int const*) ;
 void* FUNC_8 (int const*,scalar_t__*,size_t*) ;

int
FUNC_9(int VAR_0, const nvlist_t *VAR_1)
{
 size_t VAR_2, VAR_3;
 int *VAR_4;
 void *VAR_5;
 int64_t VAR_6;
 int VAR_7;

 if (FUNC_7(VAR_1) != 0) {
  FUNC_2(FUNC_7(VAR_1));
  return (-1);
 }

 VAR_4 = FUNC_6(VAR_1, &VAR_3);
 if (VAR_4 == ((void*)0))
  return (-1);

 VAR_7 = -1;
 VAR_6 = 0;

 VAR_5 = FUNC_8(VAR_1, &VAR_6, &VAR_2);
 if (VAR_5 == ((void*)0))
  goto out;

 if (FUNC_3(VAR_0, VAR_5, VAR_2) == -1)
  goto out;

 if (VAR_3 > 0) {
  if (FUNC_4(VAR_0, VAR_4, VAR_3) == -1)
   goto out;
 }

 VAR_7 = 0;
out:
 FUNC_1();
 FUNC_5(VAR_4);
 FUNC_5(VAR_5);
 FUNC_0();
 return (VAR_7);
}
