
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic_softc {scalar_t__ internal_codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct aic_softc*,int ) ;
 int FUNC_3 (struct aic_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct aic_softc *VAR_7)
{
 int VAR_8;

 FUNC_3(VAR_7, VAR_0, VAR_5);


 VAR_8 = 0;
 if (VAR_7->internal_codec) {
  VAR_8 |= (VAR_4);
 } else {
  VAR_8 |= (VAR_6 | VAR_2);
 }
 VAR_8 |= (VAR_1);
 VAR_8 |= (FUNC_1(8));
 VAR_8 |= (FUNC_0(7));
 FUNC_3(VAR_7, VAR_0, VAR_8);

 VAR_8 = FUNC_2(VAR_7, VAR_0);
 VAR_8 |= (VAR_3);
 FUNC_3(VAR_7, VAR_0, VAR_8);

 return (0);
}
