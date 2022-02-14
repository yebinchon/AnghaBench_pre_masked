
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct arswitch_softc {int page; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int ) ;
 struct arswitch_softc* FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(device_t VAR_0, uint32_t VAR_1, uint16_t *VAR_2,
    uint16_t *VAR_3)
{
 struct arswitch_softc *VAR_4 = FUNC_3(VAR_0);
 uint16_t VAR_5;

 VAR_5 = (VAR_1 >> 9) & 0x1ff;
 *VAR_2 = (VAR_1 >> 6) & 0x7;
 *VAR_3 = (VAR_1 >> 1) & 0x1f;

 if (VAR_4->page != VAR_5) {
  FUNC_1(FUNC_2(VAR_0), 0x18, 0, VAR_5);
  FUNC_0(2000);
  VAR_4->page = VAR_5;
 }
}
