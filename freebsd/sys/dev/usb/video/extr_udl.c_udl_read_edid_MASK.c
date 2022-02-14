
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct udl_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct udl_softc*,int ,int ,int,int,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct udl_softc *VAR_3, uint8_t *VAR_4)
{
 uint8_t VAR_5[64];
 uint16_t VAR_6;
 int VAR_7;

 VAR_6 = 0;

 VAR_7 = FUNC_1(VAR_3, VAR_2,
     VAR_0, 0x00a1, (VAR_6 << 8), VAR_5, 64);
 if (VAR_7 != VAR_1)
  goto fail;
 FUNC_0(VAR_5 + 1, VAR_4 + VAR_6, 63);
 VAR_6 += 63;

 VAR_7 = FUNC_1(VAR_3, VAR_2,
     VAR_0, 0x00a1, (VAR_6 << 8), VAR_5, 64);
 if (VAR_7 != VAR_1)
  goto fail;
 FUNC_0(VAR_5 + 1, VAR_4 + VAR_6, 63);
 VAR_6 += 63;

 VAR_7 = FUNC_1(VAR_3, VAR_2,
     VAR_0, 0x00a1, (VAR_6 << 8), VAR_5, 3);
 if (VAR_7 != VAR_1)
  goto fail;
 FUNC_0(VAR_5 + 1, VAR_4 + VAR_6, 2);
fail:
 return (VAR_7);
}
