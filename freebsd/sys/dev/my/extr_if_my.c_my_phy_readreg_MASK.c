
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct my_softc {TYPE_1__* my_info; } ;
struct TYPE_2__ {scalar_t__ my_did; } ;


 int FUNC_0 (struct my_softc*,scalar_t__) ;
 long FUNC_1 (struct my_softc*,int ) ;
 int FUNC_2 (struct my_softc*,int ,long) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct my_softc*) ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 long FUNC_5 (struct my_softc*,int ,int) ;

__attribute__((used)) static u_int16_t
FUNC_6(struct my_softc * VAR_6, int VAR_7)
{
 long VAR_8;
 int VAR_9, VAR_10;

 FUNC_4(VAR_6);

 if (VAR_6->my_info->my_did == VAR_0)
  VAR_10 = FUNC_0(VAR_6, VAR_5 + VAR_7 * 2);
 else {
  VAR_8 = FUNC_5(VAR_6, VAR_4, VAR_7);


  VAR_9 = 0x8000;
  VAR_10 = 0;
  while (VAR_9) {

   VAR_8 &= ~VAR_2;
   FUNC_2(VAR_6, VAR_1, VAR_8);


   VAR_8 = FUNC_1(VAR_6, VAR_1);
   if (VAR_8 & VAR_3)
    VAR_10 |= VAR_9;


   VAR_8 |= VAR_2;
   FUNC_2(VAR_6, VAR_1, VAR_8);
   FUNC_3(30);


   VAR_9 >>= 1;
  }


  VAR_8 &= ~VAR_2;
  FUNC_2(VAR_6, VAR_1, VAR_8);
 }

 return (u_int16_t) VAR_10;
}
