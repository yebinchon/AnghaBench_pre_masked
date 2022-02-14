
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct iwi_softc {int sc_dev; } ;
struct iwi_fw {char* data; size_t size; } ;


 int FUNC_0 (struct iwi_softc*,int ) ;
 int FUNC_1 (struct iwi_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct iwi_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct iwi_softc*,int) ;
 int FUNC_5 (struct iwi_softc*,int) ;
 int FUNC_6 (struct iwi_softc*,int,int) ;
 int FUNC_7 (struct iwi_softc*,int,int ) ;
 int FUNC_8 (struct iwi_softc*,int,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int const) ;

__attribute__((used)) static int
FUNC_11(struct iwi_softc *VAR_6, const struct iwi_fw *VAR_7)
{
 uint32_t VAR_8;
 const uint16_t *VAR_9;
 const char *VAR_10 = VAR_7->data;
 size_t VAR_11 = VAR_7->size;
 int VAR_12, VAR_13, VAR_14;

 FUNC_3(VAR_6);
 VAR_14 = 0;
 FUNC_1(VAR_6, VAR_1, FUNC_0(VAR_6, VAR_1) |
     VAR_5);
 for (VAR_13 = 0; VAR_13 < 5; VAR_13++) {
  if (FUNC_0(VAR_6, VAR_1) & VAR_3)
   break;
  FUNC_2(10);
 }
 if (VAR_13 == 5) {
  FUNC_9(VAR_6->sc_dev, "timeout waiting for master\n");
  VAR_14 = VAR_0;
  goto fail;
 }

 FUNC_8(VAR_6, 0x3000e0, 0x80000000);
 FUNC_2(5000);

 VAR_8 = FUNC_0(VAR_6, VAR_1);
 VAR_8 &= ~VAR_4;
 FUNC_1(VAR_6, VAR_1, VAR_8);

 FUNC_2(5000);
 FUNC_8(VAR_6, 0x3000e0, 0);
 FUNC_2(1000);
 FUNC_8(VAR_6, VAR_2, 1);
 FUNC_2(1000);
 FUNC_8(VAR_6, VAR_2, 0);
 FUNC_2(1000);
 FUNC_6(VAR_6, 0x200000, 0x00);
 FUNC_6(VAR_6, 0x200000, 0x40);
 FUNC_2(1000);


 for (VAR_9 = (const uint16_t *)VAR_10; VAR_11 > 0; VAR_9++, VAR_11 -= 2)
  FUNC_7(VAR_6, 0x200010, FUNC_10(*VAR_9));

 FUNC_6(VAR_6, 0x200000, 0x00);
 FUNC_6(VAR_6, 0x200000, 0x80);


 for (VAR_13 = 0; VAR_13 < 100; VAR_13++) {
  if (FUNC_4(VAR_6, 0x200000) & 1)
   break;
  FUNC_2(100);
 }
 if (VAR_13 == 100) {
  FUNC_9(VAR_6->sc_dev,
      "timeout waiting for ucode to initialize\n");
  VAR_14 = VAR_0;
  goto fail;
 }


 for (VAR_12 = 0; VAR_12 < 7; VAR_12++)
  FUNC_5(VAR_6, 0x200004);

 FUNC_6(VAR_6, 0x200000, 0x00);

fail:
 return VAR_14;
}
