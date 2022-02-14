
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct bintime {scalar_t__ sec; int frac; } ;


 int FUNC_0 (struct bintime*,struct bintime*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct bintime*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_3)
{
 static uint64_t VAR_4;
 uint64_t VAR_5, VAR_6;
 static struct bintime VAR_7;
 struct bintime VAR_8, VAR_9;
 uint32_t VAR_10;

 if (VAR_3) {

  VAR_7.sec = 0;
  return;
 }


 if (!VAR_2)
  return;

 FUNC_2(&VAR_8);
 VAR_5 = FUNC_1();
 if (VAR_7.sec != 0) {
  VAR_6 = VAR_5 - VAR_4;
  VAR_9 = VAR_8;
  FUNC_0(&VAR_9, &VAR_7);







  VAR_10 = VAR_9.sec << 20;
  VAR_10 |= VAR_9.frac >> (64 - 20);
  VAR_6 <<= 20;
  VAR_6 /= VAR_10;
  if (VAR_6 > VAR_1) {
   if (0 && VAR_0)
    FUNC_3("cpu_tick increased to %ju Hz\n",
        VAR_6);
   VAR_1 = VAR_6;
  }
 }
 VAR_4 = VAR_5;
 VAR_7 = VAR_8;
}
