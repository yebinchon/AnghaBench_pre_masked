
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nge_softc {int nge_dev; } ;


 int FUNC_0 (struct nge_softc*,int ) ;
 int FUNC_1 (struct nge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct nge_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct nge_softc *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11;

 FUNC_3(VAR_9, VAR_5, VAR_6);

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (!(FUNC_0(VAR_9, VAR_5) & VAR_6))
   break;
  FUNC_2(1);
 }

 if (VAR_11 == VAR_7)
  FUNC_4(VAR_9->nge_dev, "reset never completed\n");


 FUNC_2(1000);





 FUNC_1(VAR_9, VAR_3, VAR_4);
 FUNC_1(VAR_9, VAR_3, 0);


 FUNC_1(VAR_9, VAR_8, 0);






 VAR_10 = FUNC_0(VAR_9, VAR_0);
 VAR_10 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_9, VAR_0, VAR_10);
}
