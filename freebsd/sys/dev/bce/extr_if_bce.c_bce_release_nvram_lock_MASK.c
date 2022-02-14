
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bce_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*,int ,char*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct bce_softc*,int ) ;
 int FUNC_5 (struct bce_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct bce_softc *VAR_7)
{
 u32 VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_0(VAR_3);




 FUNC_5(VAR_7, VAR_0, VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_4(VAR_7, VAR_0);
  if (!(VAR_8 & VAR_1))
   break;

  FUNC_3(5);
 }

 if (VAR_9 >= VAR_6) {
  FUNC_2(VAR_7, VAR_4, "Timeout releasing NVRAM lock!\n");
  VAR_10 = VAR_5;
 }

 FUNC_1(VAR_3);
 return (VAR_10);
}
