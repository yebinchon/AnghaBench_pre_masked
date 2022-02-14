
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct my_softc {TYPE_1__* my_info; } ;
struct TYPE_2__ {scalar_t__ my_did; } ;


 int FUNC_0 (struct my_softc*,scalar_t__,int) ;
 int FUNC_1 (struct my_softc*,int ,long) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct my_softc*) ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 long FUNC_4 (struct my_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct my_softc * VAR_6, int VAR_7, int VAR_8)
{
 long VAR_9;
 int VAR_10;

 FUNC_3(VAR_6);

 if (VAR_6->my_info->my_did == VAR_0)
  FUNC_0(VAR_6, VAR_5 + VAR_7 * 2, VAR_8);
 else {
  VAR_9 = FUNC_4(VAR_6, VAR_4, VAR_7);


  VAR_10 = 0x8000;
  while (VAR_10) {

   VAR_9 &= ~(VAR_2 + VAR_3);
   if (VAR_10 & VAR_8)
    VAR_9 |= VAR_3;
   FUNC_1(VAR_6, VAR_1, VAR_9);
   FUNC_2(1);


   VAR_9 |= VAR_2;
   FUNC_1(VAR_6, VAR_1, VAR_9);
   FUNC_2(1);


   VAR_10 >>= 1;
  }


  VAR_9 &= ~VAR_2;
  FUNC_1(VAR_6, VAR_1, VAR_9);
 }
 return;
}
