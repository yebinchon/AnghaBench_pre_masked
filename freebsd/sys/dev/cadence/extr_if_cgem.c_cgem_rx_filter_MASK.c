
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cgem_softc {int ifp; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cgem_softc*,int ) ;
 int FUNC_1 (struct cgem_softc*,int ,int) ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct cgem_softc *VAR_10)
{
 if_t VAR_11 = VAR_10->ifp;
 uint32_t VAR_12[2] = { 0, 0 };
 uint32_t VAR_13;

 VAR_13 = FUNC_0(VAR_10, VAR_2);

 VAR_13 &= ~(VAR_4 |
       VAR_5 |
       VAR_3);

 if ((FUNC_3(VAR_11) & VAR_8) != 0)
  VAR_13 |= VAR_3;
 else {
  if ((FUNC_3(VAR_11) & VAR_7) == 0)
   VAR_13 |= VAR_5;
  if ((FUNC_3(VAR_11) & VAR_6) != 0) {
   VAR_12[0] = 0xffffffff;
   VAR_12[1] = 0xffffffff;
  } else
   FUNC_2(VAR_11, VAR_9, VAR_12);

  if (VAR_12[0] != 0 || VAR_12[1] != 0)
   VAR_13 |= VAR_4;
 }

 FUNC_1(VAR_10, VAR_1, VAR_12[0]);
 FUNC_1(VAR_10, VAR_0, VAR_12[1]);
 FUNC_1(VAR_10, VAR_2, VAR_13);
}
