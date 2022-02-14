
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nge_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nge_softc*) ;

__attribute__((used)) static void
FUNC_3(struct nge_softc *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_4 | VAR_0;




 for (VAR_6 = 0x400; VAR_6; VAR_6 >>= 1) {
  if (VAR_5 & VAR_6) {
   FUNC_1(VAR_2);
  } else {
   FUNC_0(VAR_2);
  }
  FUNC_2(VAR_3);
  FUNC_1(VAR_1);
  FUNC_2(VAR_3);
  FUNC_0(VAR_1);
  FUNC_2(VAR_3);
 }
}
