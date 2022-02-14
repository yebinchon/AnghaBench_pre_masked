
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct run_softc {int* txpow1; int* txpow2; int mac_ver; int mac_rev; } ;
typedef int int8_t ;
struct TYPE_4__ {scalar_t__ chan; } ;
struct TYPE_3__ {int n; int k; int r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (struct run_softc*) ;
 int FUNC_1 (struct run_softc*,int) ;
 int FUNC_2 (struct run_softc*,int,int*) ;
 int FUNC_3 (struct run_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct run_softc *VAR_9, u_int VAR_10)
{
 int8_t VAR_11, VAR_12;
 uint8_t VAR_13;
 int VAR_14;


 for (VAR_14 = 0; VAR_7[VAR_14].chan != VAR_10; VAR_14++);


 VAR_11 = VAR_9->txpow1[VAR_14];
 VAR_12 = VAR_9->txpow2[VAR_14];

 FUNC_3(VAR_9, 8, VAR_8[VAR_14].n);
 FUNC_3(VAR_9, 9, VAR_8[VAR_14].k & 0x0f);
 FUNC_2(VAR_9, 11, &VAR_13);
 VAR_13 = (VAR_13 & ~0x03) | (VAR_8[VAR_14].r & 0x03);
 FUNC_3(VAR_9, 11, VAR_13);

 FUNC_2(VAR_9, 49, &VAR_13);
 VAR_13 = (VAR_13 & ~0x3f) | (VAR_11 & 0x3f);

 if ((VAR_13 & 0x3f) > 0x27)
  VAR_13 = (VAR_13 & ~0x3f) | 0x27;
 FUNC_3(VAR_9, 49, VAR_13);

 if (VAR_9->mac_ver == 0x5392) {
  FUNC_2(VAR_9, 50, &VAR_13);
  VAR_13 = (VAR_13 & ~0x3f) | (VAR_12 & 0x3f);

  if ((VAR_13 & 0x3f) > 0x27)
   VAR_13 = (VAR_13 & ~0x3f) | 0x27;
  FUNC_3(VAR_9, 50, VAR_13);
 }

 FUNC_2(VAR_9, 1, &VAR_13);
 VAR_13 |= VAR_1 | VAR_0 | VAR_2 | VAR_4;
 if (VAR_9->mac_ver == 0x5392)
  VAR_13 |= VAR_3 | VAR_5;
 FUNC_3(VAR_9, 1, VAR_13);

 if (VAR_9->mac_ver != 0x5392) {
  FUNC_2(VAR_9, 2, &VAR_13);
  VAR_13 |= 0x80;
  FUNC_3(VAR_9, 2, VAR_13);
  FUNC_1(VAR_9, 10);
  VAR_13 &= 0x7f;
  FUNC_3(VAR_9, 2, VAR_13);
 }

 FUNC_0(VAR_9);

 if (VAR_9->mac_ver == 0x5392) {

  if (VAR_9->mac_rev >= 0x0223) {
   if (VAR_10 <= 4)
    VAR_13 = 0x0f;
   else if (VAR_10 >= 5 && VAR_10 <= 7)
    VAR_13 = 0x0e;
   else
    VAR_13 = 0x0d;
   FUNC_3(VAR_9, 23, VAR_13);

   if (VAR_10 <= 4)
    VAR_13 = 0x0c;
   else if (VAR_10 == 5)
    VAR_13 = 0x0b;
   else if (VAR_10 >= 6 && VAR_10 <= 7)
    VAR_13 = 0x0a;
   else if (VAR_10 >= 8 && VAR_10 <= 10)
    VAR_13 = 0x09;
   else
    VAR_13 = 0x08;
   FUNC_3(VAR_9, 59, VAR_13);
  } else {
   if (VAR_10 <= 11)
    VAR_13 = 0x0f;
   else
    VAR_13 = 0x0b;
   FUNC_3(VAR_9, 59, VAR_13);
  }
 } else {

  if (VAR_9->mac_rev >= 0x0502) {
   if (VAR_10 <= 11)
    VAR_13 = 0x43;
   else
    VAR_13 = 0x23;
   FUNC_3(VAR_9, 55, VAR_13);

   if (VAR_10 <= 11)
    VAR_13 = 0x0f;
   else if (VAR_10 == 12)
    VAR_13 = 0x0d;
   else
    VAR_13 = 0x0b;
   FUNC_3(VAR_9, 59, VAR_13);
  } else {
   FUNC_3(VAR_9, 55, 0x44);
   FUNC_3(VAR_9, 59, 0x8f);
  }
 }


 FUNC_2(VAR_9, 3, &VAR_13);
 VAR_13 |= VAR_6;
 FUNC_3(VAR_9, 3, VAR_13);
}
