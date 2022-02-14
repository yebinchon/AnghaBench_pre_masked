
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct davbus_softc {int output_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct davbus_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct davbus_softc *VAR_4, u_int VAR_5)
{
 u_int VAR_6 = 0;

 if (VAR_5 == VAR_4->output_mask)
  return;
 FUNC_0(("Enabled outputs:"));
 if (VAR_5 & (1 << 0)) {
  FUNC_0((" SPEAKER"));
  VAR_6 |= VAR_3;
 }
 if (VAR_5 & (1 << 1)) {
  FUNC_0((" HEADPHONES"));
  VAR_6 |= VAR_1 | VAR_2;
 }
 FUNC_0(("\n"));

 FUNC_1(VAR_4, VAR_0, VAR_6);
 VAR_4->output_mask = VAR_5;
}
