
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bce_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*) ;
 int FUNC_3 (struct bce_softc*) ;
 int FUNC_4 (struct bce_softc*) ;
 int FUNC_5 (struct bce_softc*,int,int *,int) ;
 int FUNC_6 (struct bce_softc*) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct bce_softc *VAR_3, u32 VAR_4, u8 *VAR_5,
 int VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_2);

 if (VAR_6 == 0)
  goto bce_nvram_read_exit;


 if ((VAR_7 = FUNC_2(VAR_3)) != 0)
  goto bce_nvram_read_exit;


 FUNC_4(VAR_3);

 VAR_10 = VAR_6;
 VAR_9 = VAR_4;
 VAR_11 = 0;

 VAR_8 = 0;

 if (VAR_9 & 3) {
  u8 VAR_12[4];
  u32 VAR_13;

  VAR_9 &= ~3;
  VAR_13 = 4 - (VAR_4 & 3);

  if (VAR_13 >= VAR_10) {
   VAR_13 = VAR_10;
   VAR_8 = VAR_0 | VAR_1;
  }
  else {
   VAR_8 = VAR_0;
  }

  VAR_7 = FUNC_5(VAR_3, VAR_9, VAR_12, VAR_8);

  if (VAR_7)
   return VAR_7;

  FUNC_7(VAR_5, VAR_12 + (VAR_4 & 3), VAR_13);

  VAR_9 += 4;
  VAR_5 += VAR_13;
  VAR_10 -= VAR_13;
 }

 if (VAR_10 & 3) {
  VAR_11 = 4 - (VAR_10 & 3);
  VAR_10 = (VAR_10 + 4) & ~3;
 }

 if (VAR_10 == 4) {
  u8 VAR_14[4];

  if (VAR_8)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_0 |
        VAR_1;

  VAR_7 = FUNC_5(VAR_3, VAR_9, VAR_14, VAR_8);

  FUNC_7(VAR_5, VAR_14, 4 - VAR_11);
 }
 else if (VAR_10 > 0) {
  u8 VAR_15[4];


  if (VAR_8)
   VAR_8 = 0;
  else
   VAR_8 = VAR_0;

  VAR_7 = FUNC_5(VAR_3, VAR_9, VAR_5, VAR_8);


  VAR_9 += 4;
  VAR_5 += 4;
  VAR_10 -= 4;

  while (VAR_10 > 4 && VAR_7 == 0) {
   VAR_7 = FUNC_5(VAR_3, VAR_9, VAR_5, 0);


   VAR_9 += 4;
   VAR_5 += 4;
   VAR_10 -= 4;
  }

  if (VAR_7)
   goto bce_nvram_read_locked_exit;

  VAR_8 = VAR_1;
  VAR_7 = FUNC_5(VAR_3, VAR_9, VAR_15, VAR_8);

  FUNC_7(VAR_5, VAR_15, 4 - VAR_11);
 }

bce_nvram_read_locked_exit:

 FUNC_3(VAR_3);
 FUNC_6(VAR_3);

bce_nvram_read_exit:
 FUNC_1(VAR_2);
 return VAR_7;
}
