
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct urtw_softc {int dummy; } ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct urtw_softc*,int ,int*) ;
 int FUNC_2 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct urtw_softc *VAR_9, uint8_t VAR_10, uint32_t *VAR_11)
{
 int VAR_12;
 int16_t VAR_13;
 uint8_t VAR_14 = 12, VAR_15 = 6;
 uint16_t VAR_16, VAR_17, VAR_18, VAR_19;
 uint32_t VAR_20 = ((uint32_t)(VAR_10 & 0x1f)) << 27;
 uint32_t VAR_21 = 0x80000000, VAR_22 = 0;
 usb_error_t VAR_23;

 FUNC_1(VAR_9, VAR_6, &VAR_16);
 FUNC_1(VAR_9, VAR_3, &VAR_17);
 FUNC_1(VAR_9, VAR_8, &VAR_18);
 FUNC_2(VAR_9, VAR_3, VAR_17 | VAR_5);
 FUNC_2(VAR_9, VAR_8, VAR_18 | VAR_5);
 VAR_16 &= ~VAR_5;
 FUNC_2(VAR_9, VAR_6, VAR_16 | VAR_1);
 FUNC_0(5);
 FUNC_2(VAR_9, VAR_6, VAR_16);
 FUNC_0(5);

 for (VAR_12 = 0; VAR_12 < (VAR_15 / 2); VAR_12++, VAR_21 = VAR_21 >> 1) {
  VAR_13 = ((VAR_20 & VAR_21) != 0) ? 1 : 0;

  FUNC_2(VAR_9, VAR_6, VAR_13 | VAR_16);
  FUNC_0(2);
  FUNC_2(VAR_9, VAR_6, VAR_13 | VAR_16 |
      VAR_0);
  FUNC_0(2);
  FUNC_2(VAR_9, VAR_6, VAR_13 | VAR_16 |
      VAR_0);
  FUNC_0(2);
  VAR_21 = VAR_21 >> 1;
  if (VAR_12 == 2)
   break;
  VAR_13 = ((VAR_20 & VAR_21) != 0) ? 1 : 0;
  FUNC_2(VAR_9, VAR_6, VAR_13 | VAR_16 |
      VAR_0);
  FUNC_0(2);
  FUNC_2(VAR_9, VAR_6, VAR_13 | VAR_16 |
      VAR_0);
  FUNC_0(2);
  FUNC_2(VAR_9, VAR_6, VAR_13 | VAR_16);
  FUNC_0(1);
 }
 FUNC_2(VAR_9, VAR_6, VAR_13 | VAR_16 | VAR_2 |
     VAR_0);
 FUNC_0(2);
 FUNC_2(VAR_9, VAR_6, VAR_13 | VAR_16 | VAR_2);
 FUNC_0(2);
 FUNC_2(VAR_9, VAR_6, VAR_16 | VAR_2);
 FUNC_0(2);

 VAR_21 = 0x800;
 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++, VAR_21 = VAR_21 >> 1) {
  FUNC_2(VAR_9, VAR_6,
      VAR_16 | VAR_2);
  FUNC_0(2);
  FUNC_2(VAR_9, VAR_6,
      VAR_16 | VAR_2 | VAR_0);
  FUNC_0(2);
  FUNC_2(VAR_9, VAR_6,
      VAR_16 | VAR_2 | VAR_0);
  FUNC_0(2);
  FUNC_2(VAR_9, VAR_6,
      VAR_16 | VAR_2 | VAR_0);
  FUNC_0(2);

  FUNC_1(VAR_9, VAR_4, &VAR_19);
  VAR_22 |= ((VAR_19 & VAR_0) ? VAR_21 : 0);
  FUNC_2(VAR_9, VAR_6,
      VAR_16 | VAR_2);
  FUNC_0(2);
 }

 FUNC_2(VAR_9, VAR_6, VAR_16 | VAR_1 |
     VAR_2);
 FUNC_0(2);

 FUNC_2(VAR_9, VAR_3, VAR_17);
 FUNC_2(VAR_9, VAR_8, VAR_18);
 FUNC_2(VAR_9, VAR_6, VAR_7);

 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_22;
fail:
 return (VAR_23);
}
