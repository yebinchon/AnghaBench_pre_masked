
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct run_softc {int* txpow1; int mac_ver; int* txpow2; } ;
typedef void* int8_t ;
struct TYPE_2__ {int chan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct run_softc*,int ,char*,int ,int,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct run_softc*,scalar_t__,int*) ;

__attribute__((used)) static void
FUNC_2(struct run_softc *VAR_6)
{
 uint16_t VAR_7;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < 14; VAR_8 += 2) {
  FUNC_1(VAR_6, VAR_0 + VAR_8 / 2, &VAR_7);
  VAR_6->txpow1[VAR_8 + 0] = (int8_t)(VAR_7 & 0xff);
  VAR_6->txpow1[VAR_8 + 1] = (int8_t)(VAR_7 >> 8);

  if (VAR_6->mac_ver != 0x5390) {
   FUNC_1(VAR_6,
       VAR_1 + VAR_8 / 2, &VAR_7);
   VAR_6->txpow2[VAR_8 + 0] = (int8_t)(VAR_7 & 0xff);
   VAR_6->txpow2[VAR_8 + 1] = (int8_t)(VAR_7 >> 8);
  }
 }

 for (VAR_8 = 0; VAR_8 < 14; VAR_8++) {
  if (VAR_6->mac_ver >= 0x5390) {
   if (VAR_6->txpow1[VAR_8] < 0 || VAR_6->txpow1[VAR_8] > 39)
    VAR_6->txpow1[VAR_8] = 5;
  } else {
   if (VAR_6->txpow1[VAR_8] < 0 || VAR_6->txpow1[VAR_8] > 31)
    VAR_6->txpow1[VAR_8] = 5;
  }
  if (VAR_6->mac_ver > 0x5390) {
   if (VAR_6->txpow2[VAR_8] < 0 || VAR_6->txpow2[VAR_8] > 39)
    VAR_6->txpow2[VAR_8] = 5;
  } else if (VAR_6->mac_ver < 0x5390) {
   if (VAR_6->txpow2[VAR_8] < 0 || VAR_6->txpow2[VAR_8] > 31)
    VAR_6->txpow2[VAR_8] = 5;
  }
  FUNC_0(VAR_6, VAR_4,
      "chan %d: power1=%d, power2=%d\n",
      VAR_5[VAR_8].chan, VAR_6->txpow1[VAR_8], VAR_6->txpow2[VAR_8]);
 }

 for (VAR_8 = 0; VAR_8 < 40; VAR_8 += 2) {
  FUNC_1(VAR_6, VAR_2 + VAR_8 / 2, &VAR_7);
  VAR_6->txpow1[VAR_8 + 14] = (int8_t)(VAR_7 & 0xff);
  VAR_6->txpow1[VAR_8 + 15] = (int8_t)(VAR_7 >> 8);

  FUNC_1(VAR_6, VAR_3 + VAR_8 / 2, &VAR_7);
  VAR_6->txpow2[VAR_8 + 14] = (int8_t)(VAR_7 & 0xff);
  VAR_6->txpow2[VAR_8 + 15] = (int8_t)(VAR_7 >> 8);
 }

 for (VAR_8 = 0; VAR_8 < 40; VAR_8++ ) {
  if (VAR_6->mac_ver != 0x5592) {
   if (VAR_6->txpow1[14 + VAR_8] < -7 || VAR_6->txpow1[14 + VAR_8] > 15)
    VAR_6->txpow1[14 + VAR_8] = 5;
   if (VAR_6->txpow2[14 + VAR_8] < -7 || VAR_6->txpow2[14 + VAR_8] > 15)
    VAR_6->txpow2[14 + VAR_8] = 5;
  }
  FUNC_0(VAR_6, VAR_4,
      "chan %d: power1=%d, power2=%d\n",
      VAR_5[14 + VAR_8].chan, VAR_6->txpow1[14 + VAR_8],
      VAR_6->txpow2[14 + VAR_8]);
 }
}
