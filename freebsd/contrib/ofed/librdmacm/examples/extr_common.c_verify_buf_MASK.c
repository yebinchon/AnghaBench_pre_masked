
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (char*,long long) ;

int FUNC_1(void *VAR_0, int VAR_1)
{
 static long long VAR_2;
 uint8_t *VAR_3 = VAR_0;
 static uint8_t VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_2++) {
  if (VAR_3[VAR_5] != VAR_4++) {
   FUNC_0("data verification failed byte %lld\n", VAR_2);
   return -1;
  }
 }
 return 0;
}
