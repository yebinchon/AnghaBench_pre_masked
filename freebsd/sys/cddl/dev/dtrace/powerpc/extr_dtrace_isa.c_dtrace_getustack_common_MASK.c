
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int proc_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * VAR_3 ;
 uintptr_t FUNC_2 (void*) ;
 uintptr_t FUNC_3 (void*) ;

__attribute__((used)) static int
FUNC_4(uint64_t *VAR_4, int VAR_5, uintptr_t VAR_6,
    uintptr_t VAR_7)
{
 proc_t *VAR_8 = VAR_3;
 int VAR_9 = 0;

 FUNC_0(VAR_4 == ((void*)0) || VAR_5 > 0);

 while (VAR_6 != 0) {
  VAR_9++;
  if (VAR_4 != ((void*)0)) {
   *VAR_4++ = (uint64_t)VAR_6;
   VAR_5--;
   if (VAR_5 <= 0)
    break;
  }

  if (VAR_7 == 0)
   break;

  if (FUNC_1(VAR_8, VAR_2)) {
   VAR_6 = FUNC_2((void *)(VAR_7 + VAR_0));
   VAR_7 = FUNC_2((void *)VAR_7);
  }
  else {
   VAR_6 = FUNC_3((void *)(VAR_7 + VAR_1));
   VAR_7 = FUNC_3((void *)VAR_7);
  }
 }

 return (VAR_9);
}
