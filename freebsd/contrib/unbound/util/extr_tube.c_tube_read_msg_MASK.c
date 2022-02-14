
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct tube {int sr; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,...) ;
 int FUNC_7 (scalar_t__) ;

int FUNC_8(struct tube* VAR_3, uint8_t** VAR_4, uint32_t* VAR_5,
        int VAR_6)
{
 ssize_t VAR_7, VAR_8;
 int VAR_9 = VAR_3->sr;


 *VAR_5 = 0;
 if(VAR_6) {
  VAR_7 = FUNC_6(VAR_9, VAR_5, sizeof(*VAR_5));
  if(VAR_7 == -1) {
   if(VAR_2==VAR_1 || VAR_2==VAR_0)
    return -1;
   FUNC_4("tube msg read failed: %s", FUNC_7(VAR_2));
   return -1;
  }
  if(VAR_7 == 0)
   return 0;
 } else VAR_7 = 0;
 if(!FUNC_0(VAR_9))
  return 0;

 VAR_8 = VAR_7;
 while(VAR_8 != (ssize_t)sizeof(*VAR_5)) {
  if((VAR_7=FUNC_6(VAR_9, ((char*)VAR_5)+VAR_8, sizeof(*VAR_5)-VAR_8)) == -1) {
   FUNC_4("tube msg read failed: %s", FUNC_7(VAR_2));
   (void)FUNC_1(VAR_9);
   return 0;
  }
  if(VAR_7 == 0) {
   (void)FUNC_1(VAR_9);
   return 0;
  }
  VAR_8 += VAR_7;
 }
 FUNC_3(*VAR_5 < 65536*2);
 *VAR_4 = (uint8_t*)FUNC_5(*VAR_5);
 if(!*VAR_4) {
  FUNC_4("tube read out of memory");
  (void)FUNC_1(VAR_9);
  return 0;
 }
 VAR_8 = 0;
 while(VAR_8 < (ssize_t)*VAR_5) {
  if((VAR_7=FUNC_6(VAR_9, (*VAR_4)+VAR_8, (size_t)((ssize_t)*VAR_5)-VAR_8)) == -1) {
   FUNC_4("tube msg read failed: %s", FUNC_7(VAR_2));
   (void)FUNC_1(VAR_9);
   FUNC_2(*VAR_4);
   return 0;
  }
  if(VAR_7 == 0) {
   (void)FUNC_1(VAR_9);
   FUNC_2(*VAR_4);
   return 0;
  }
  VAR_8 += VAR_7;
 }
 if(!FUNC_1(VAR_9)) {
  FUNC_2(*VAR_4);
  return 0;
 }
 return 1;
}
