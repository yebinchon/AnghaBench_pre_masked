
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct i2s_softc {int output_mask; int port_mtx; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct i2s_softc*,int) ;
 int FUNC_2 (struct i2s_softc*,int) ;
 int FUNC_3 (struct i2s_softc*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0, u_int VAR_1)
{
 struct i2s_softc *VAR_2 = VAR_0;

 if (VAR_1 == VAR_2->output_mask)
  return;

 FUNC_4(&VAR_2->port_mtx);

 FUNC_3(VAR_2, 1);
 FUNC_1(VAR_2, 1);
 FUNC_2(VAR_2, 1);

 FUNC_0(("enabled outputs: "));

 if (VAR_1 & (1 << 0)) {
  FUNC_0(("SPEAKER "));
  FUNC_3(VAR_2, 0);
 }
 if (VAR_1 & (1 << 1)) {
  FUNC_0(("HEADPHONE "));
  FUNC_1(VAR_2, 0);
 }
 if (VAR_1 & (1 << 2)) {
  FUNC_0(("LINEOUT "));
  FUNC_2(VAR_2, 0);
 }

 FUNC_0(("\n"));
 VAR_2->output_mask = VAR_1;

 FUNC_5(&VAR_2->port_mtx);
}
