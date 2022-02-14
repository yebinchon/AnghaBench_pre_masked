
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct cgem_softc {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cgem_softc*,int ) ;
 int FUNC_3 (struct cgem_softc*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_6(struct cgem_softc *VAR_0, u_char VAR_1[])
{
 int VAR_2;
 uint32_t VAR_3;


 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  uint32_t VAR_4 = FUNC_2(VAR_0, FUNC_1(VAR_2));
  uint32_t VAR_5 = FUNC_2(VAR_0, FUNC_0(VAR_2)) & 0xffff;
  if (VAR_4 != 0 || VAR_5 != 0) {
   VAR_1[0] = VAR_4 & 0xff;
   VAR_1[1] = (VAR_4 >> 8) & 0xff;
   VAR_1[2] = (VAR_4 >> 16) & 0xff;
   VAR_1[3] = (VAR_4 >> 24) & 0xff;
   VAR_1[4] = VAR_5 & 0xff;
   VAR_1[5] = (VAR_5 >> 8) & 0xff;
   break;
  }
 }


 if (VAR_2 == 4) {
  VAR_3 = FUNC_4();

  VAR_1[0] = 'b';
  VAR_1[1] = 's';
  VAR_1[2] = 'd';
  VAR_1[3] = (VAR_3 >> 16) & 0xff;
  VAR_1[4] = (VAR_3 >> 8) & 0xff;
  VAR_1[5] = VAR_3 & 0xff;

  FUNC_5(VAR_0->dev, "no mac address found, assigning "
         "random: %02x:%02x:%02x:%02x:%02x:%02x\n",
         VAR_1[0], VAR_1[1], VAR_1[2],
         VAR_1[3], VAR_1[4], VAR_1[5]);
 }


 FUNC_3(VAR_0, FUNC_1(0), (VAR_1[3] << 24) |
     (VAR_1[2] << 16) | (VAR_1[1] << 8) | VAR_1[0]);
 FUNC_3(VAR_0, FUNC_0(0), (VAR_1[5] << 8) | VAR_1[4]);

 for (VAR_2 = 1; VAR_2 < 4; VAR_2++) {
  FUNC_3(VAR_0, FUNC_1(VAR_2), 0);
  FUNC_3(VAR_0, FUNC_0(VAR_2), 0);
 }
}
