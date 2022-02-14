
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char volatile* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (uintptr_t volatile*,uintptr_t,uintptr_t) ;
 scalar_t__ FUNC_3 (unsigned int*) ;
 char** VAR_5 ;
 char* FUNC_4 (int *,int ,int ,int ,int,int ) ;
 int FUNC_5 (void*,int ) ;
 char* FUNC_6 (char*,char const*) ;

__attribute__((used)) static void
FUNC_7(uint32_t VAR_6)
{
 static const char VAR_7[] = "/dev/hpet";
 char VAR_8[64], *VAR_9, *VAR_10, VAR_11;
 volatile char *VAR_12, *VAR_13;
 unsigned int VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 VAR_10 = VAR_9 = FUNC_6(VAR_8, VAR_7);
 VAR_15 = VAR_6;
 do {
  *VAR_9++ = VAR_15 % 10 + '0';
  VAR_15 /= 10;
 } while (VAR_15 != 0);
 *VAR_9 = '\0';
 for (VAR_9--; VAR_10 != VAR_9; VAR_10++, VAR_9--) {
  VAR_11 = *VAR_10;
  *VAR_10 = *VAR_9;
  *VAR_9 = VAR_11;
 }

 VAR_13 = VAR_5[VAR_6];
 if (VAR_13 != ((void*)0))
  return;





 if ((FUNC_3(&VAR_14) == 0 && VAR_14 != 0) ||
     (VAR_16 = FUNC_1(VAR_8, VAR_2)) == -1) {

  FUNC_2((volatile uintptr_t *)&VAR_5[VAR_6],
      (uintptr_t)VAR_13, (uintptr_t)VAR_0);
  return;
 }

 VAR_12 = FUNC_4(((void*)0), VAR_3, VAR_4, VAR_1, VAR_16, 0);
 FUNC_0(VAR_16);
 if (FUNC_2((volatile uintptr_t *)&VAR_5[VAR_6],
     (uintptr_t)VAR_13, (uintptr_t)VAR_12) == 0 &&
     VAR_12 != VAR_0)
  FUNC_5((void *)VAR_12, VAR_3);
}
