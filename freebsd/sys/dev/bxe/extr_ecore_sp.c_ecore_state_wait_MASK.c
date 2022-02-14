
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {scalar_t__ panic; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct bxe_softc*,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int,unsigned long*) ;
 int VAR_2 ;
 int FUNC_5 (struct bxe_softc*,int ) ;
 int VAR_3 ;
 int FUNC_6 () ;

__attribute__((used)) static inline int FUNC_7(struct bxe_softc *VAR_4, int VAR_5,
       unsigned long *VAR_6)
{

 int VAR_7 = 5000;


 if (FUNC_0(VAR_4))
  VAR_7 *= 20;

 FUNC_3(VAR_4, "waiting for state to become %d\n", VAR_5);

 FUNC_2();
 while (VAR_7--) {
  if (!FUNC_4(VAR_5, VAR_6)) {



   return VAR_1;
  }

  FUNC_5(VAR_4, VAR_3);

  if (VAR_4->panic)
   return VAR_0;
 }


 FUNC_1("timeout waiting for state %d\n", VAR_5);




 return VAR_2;
}
