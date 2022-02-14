
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uep_softc {int evdev; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uep_softc*,int*) ;

__attribute__((used)) static void
FUNC_6(struct uep_softc *VAR_3, u_char *VAR_4)
{
 int32_t VAR_5, VAR_6;




 if ((VAR_4[0] & 0xFE) != 0x80) {
  FUNC_0("bad input packet format 0x%.2x\n", VAR_4[0]);
  return;
 }
 VAR_5 = (VAR_4[1] << 7) | VAR_4[2];
 VAR_6 = (VAR_4[3] << 7) | VAR_4[4];

 FUNC_1(2, "x %u y %u\n", VAR_5, VAR_6);
 FUNC_5(VAR_3, VAR_4);

}
