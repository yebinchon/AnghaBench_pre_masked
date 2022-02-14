
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct davbus_softc {int output_mask; int device_id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct davbus_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct davbus_softc *VAR_5, u_int VAR_6)
{
 u_int VAR_7;

 if (VAR_6 == VAR_5->output_mask) {
  return;
 }

 VAR_7 = VAR_2 | VAR_1;

 FUNC_0(("Enabled outputs: "));

 if (VAR_6 & (1 << 0)) {
  FUNC_0(("SPEAKER "));
  VAR_7 &= ~VAR_2;
 }
 if (VAR_6 & (1 << 1)) {
  FUNC_0(("HEADPHONES "));
  VAR_7 &= ~VAR_1;
 }

 FUNC_0(("\n"));

 if (VAR_5->device_id == 5 || VAR_5->device_id == 11) {
  FUNC_0(("Enabling programmable output.\n"));
  VAR_7 |= VAR_3;
 }
 if (VAR_5->device_id == 8 || VAR_5->device_id == 11) {
  VAR_7 &= ~VAR_2;

  if (VAR_6 & (1 << 0))
   VAR_7 |= VAR_4;
 }

 FUNC_1(VAR_5, VAR_0, VAR_7);
 VAR_5->output_mask = VAR_6;
}
