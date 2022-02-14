
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct run_softc {int ntxchains; int* txpow1; int* txpow2; int* txpow3; } ;
typedef void* int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct run_softc*,int,int*) ;

__attribute__((used)) static void
FUNC_1(struct run_softc *VAR_8)
{
 uint16_t VAR_9, VAR_10;
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < 14; VAR_11 += 2) {
  VAR_9 = (VAR_8->ntxchains == 3) ? VAR_2 :
      VAR_0;
  FUNC_0(VAR_8, VAR_9 + VAR_11 / 2, &VAR_10);
  VAR_8->txpow1[VAR_11 + 0] = (int8_t)(VAR_10 & 0xff);
  VAR_8->txpow1[VAR_11 + 1] = (int8_t)(VAR_10 >> 8);

  VAR_9 = (VAR_8->ntxchains == 3) ? VAR_3 :
      VAR_1;
  FUNC_0(VAR_8, VAR_9 + VAR_11 / 2, &VAR_10);
  VAR_8->txpow2[VAR_11 + 0] = (int8_t)(VAR_10 & 0xff);
  VAR_8->txpow2[VAR_11 + 1] = (int8_t)(VAR_10 >> 8);

  if (VAR_8->ntxchains == 3) {
   FUNC_0(VAR_8, VAR_4 + VAR_11 / 2,
       &VAR_10);
   VAR_8->txpow3[VAR_11 + 0] = (int8_t)(VAR_10 & 0xff);
   VAR_8->txpow3[VAR_11 + 1] = (int8_t)(VAR_10 >> 8);
  }
 }

 for (VAR_11 = 0; VAR_11 < 14; VAR_11++) {
  if (VAR_8->txpow1[VAR_11] > 31)
   VAR_8->txpow1[VAR_11] = 5;
  if (VAR_8->txpow2[VAR_11] > 31)
   VAR_8->txpow2[VAR_11] = 5;
  if (VAR_8->ntxchains == 3) {
   if (VAR_8->txpow3[VAR_11] > 31)
    VAR_8->txpow3[VAR_11] = 5;
  }
 }

 for (VAR_11 = 0; VAR_11 < 40; VAR_11 += 2) {
  FUNC_0(VAR_8, VAR_5 + VAR_11 / 2, &VAR_10);
  VAR_8->txpow1[VAR_11 + 14] = (int8_t)(VAR_10 & 0xff);
  VAR_8->txpow1[VAR_11 + 15] = (int8_t)(VAR_10 >> 8);

  FUNC_0(VAR_8, VAR_6 + VAR_11 / 2, &VAR_10);
  VAR_8->txpow2[VAR_11 + 14] = (int8_t)(VAR_10 & 0xff);
  VAR_8->txpow2[VAR_11 + 15] = (int8_t)(VAR_10 >> 8);

  if (VAR_8->ntxchains == 3) {
   FUNC_0(VAR_8, VAR_7 + VAR_11 / 2,
       &VAR_10);
   VAR_8->txpow3[VAR_11 + 14] = (int8_t)(VAR_10 & 0xff);
   VAR_8->txpow3[VAR_11 + 15] = (int8_t)(VAR_10 >> 8);
  }
 }
}
