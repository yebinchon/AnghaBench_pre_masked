
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 () ;

void
FUNC_1(void *VAR_1, int VAR_2)
{
 off_t VAR_3, VAR_4;
 char *VAR_5;


 if (!VAR_0)
  FUNC_0();


 VAR_4 = (uintptr_t)VAR_1 & (VAR_0 - 1);
 VAR_3 = VAR_2 += VAR_4;
 VAR_5 = (char *)VAR_1 - VAR_4;

 do {
  __asm __volatile ("dcbst 0,%0" :: "r"(VAR_5));
  VAR_5 += VAR_0;
 } while ((VAR_3 -= VAR_0) > 0);
 __asm __volatile ("sync");
 VAR_5 = (char *)VAR_1 - VAR_4;
 do {
  __asm __volatile ("icbi 0,%0" :: "r"(VAR_5));
  VAR_5 += VAR_0;
 } while ((VAR_2 -= VAR_0) > 0);
 __asm __volatile ("sync; isync");
}
