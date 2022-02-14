
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arswitch_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct arswitch_softc*) ;
 int FUNC_2 (struct arswitch_softc*,int) ;

__attribute__((used)) static int
FUNC_3(struct arswitch_softc *VAR_1)
{
 int VAR_2;
 int VAR_3;


 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 != 0)
  return (VAR_3);



 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {

  FUNC_2(VAR_1, VAR_2);




 }


 FUNC_0(1000);

 return (0);
}
