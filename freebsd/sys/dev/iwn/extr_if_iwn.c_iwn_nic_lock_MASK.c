
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwn_softc*,int ) ;
 int FUNC_2 (struct iwn_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct iwn_softc *VAR_5)
{
 int VAR_6;


 FUNC_2(VAR_5, VAR_1, VAR_3);


 for (VAR_6 = 0; VAR_6 < 1000; VAR_6++) {
  if ((FUNC_1(VAR_5, VAR_1) &
       (VAR_2 | VAR_4)) ==
      VAR_2)
   return 0;
  FUNC_0(10);
 }
 return VAR_0;
}
