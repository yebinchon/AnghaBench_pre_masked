
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ub_randstate {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 long FUNC_5 (struct ub_randstate*) ;
 int FUNC_6 (scalar_t__,char*,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct ub_randstate* VAR_3, uint8_t* VAR_4, size_t VAR_5)
{
 uint8_t VAR_6;
 uint8_t* VAR_7 = VAR_4 + 10;
 long int VAR_8 = 0;
 int VAR_9 = 0;
 FUNC_2(VAR_5 >= 10 + 5 );
 (void)VAR_5;
 VAR_6 = *VAR_7++;
 while(VAR_6) {
  while(VAR_6--) {

   if(FUNC_1((unsigned char)*VAR_7)) {

    if(VAR_9 == 0) {
     VAR_8 = FUNC_5(VAR_3);
     VAR_9 = 30;
    }
    if(VAR_8 & 0x1) {
     *VAR_7 = (uint8_t)FUNC_4((unsigned char)*VAR_7);
    } else {
     *VAR_7 = (uint8_t)FUNC_3((unsigned char)*VAR_7);
    }
    VAR_8 >>= 1;
    VAR_9--;
   }
   VAR_7++;
  }
  VAR_6 = *VAR_7++;
 }
 if(VAR_2 >= VAR_1) {
  char VAR_10[VAR_0+1];
  FUNC_0(VAR_4+10, VAR_10);
  FUNC_6(VAR_1, "qname perturbed to %s", VAR_10);
 }
}
