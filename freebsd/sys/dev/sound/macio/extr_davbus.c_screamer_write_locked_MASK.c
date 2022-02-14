
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct davbus_softc {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct davbus_softc *VAR_3, u_int VAR_4, u_int VAR_5)
{
 u_int VAR_6;

 FUNC_1(VAR_5 == (VAR_5 & 0xfff), ("bad val"));

 while (FUNC_2(VAR_3->reg, VAR_1) & VAR_0)
  FUNC_0(100);

 VAR_6 = VAR_4;
 VAR_6 |= VAR_2;
 VAR_6 |= VAR_5;
 FUNC_3(VAR_3->reg, VAR_1, VAR_6);

 while (FUNC_2(VAR_3->reg, VAR_1) & VAR_0)
  FUNC_0(100);
}
