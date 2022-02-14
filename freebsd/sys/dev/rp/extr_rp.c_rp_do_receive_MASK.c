
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct rp_port {int rp_overflows; } ;
typedef int CHANNEL_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ) ;
 unsigned int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*,int,int) ;
 int FUNC_9 (struct tty*) ;

__attribute__((used)) static void FUNC_10(struct rp_port *VAR_12, struct tty *VAR_13,
   CHANNEL_t *VAR_14, unsigned int VAR_15)
{
 unsigned int VAR_16;
 int VAR_17, VAR_18, VAR_19 = 0;

 VAR_17 = FUNC_4(VAR_14);
 if(VAR_17 == 0)
  return;






 if(VAR_15 & (VAR_1 | VAR_0 | VAR_2 | VAR_3)) {
  if(!(VAR_15 & VAR_4)) {
   VAR_15 |= VAR_4;
   FUNC_3(VAR_14);
  }
 }





 FUNC_6(VAR_13);
 if(VAR_15 & VAR_4) {
  while(VAR_17) {
   VAR_16 = FUNC_1(VAR_14,FUNC_5(VAR_14));
   VAR_18 = VAR_16 & 0xff;

   if((VAR_16 & VAR_5) || (VAR_16 & VAR_6))
    VAR_19 |= VAR_9;
   else if (VAR_16 & VAR_7)
    VAR_19 |= VAR_11;
   else if (VAR_16 & VAR_8) {
    VAR_12->rp_overflows++;
    VAR_19 |= VAR_10;
   }

   FUNC_8(VAR_13, VAR_18, VAR_19);
   VAR_17--;
  }




  if(FUNC_4(VAR_14) == 0) {
   FUNC_2(VAR_14);
  }
 } else {
  VAR_17 = FUNC_4(VAR_14);
  while (VAR_17) {
   VAR_18 = FUNC_0(VAR_14,FUNC_5(VAR_14));
   FUNC_8(VAR_13, VAR_18 & 0xff, VAR_19);
   VAR_17--;
  }
 }
        FUNC_9(VAR_13);
        FUNC_7(VAR_13);
}
