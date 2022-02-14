
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netlbl_lsm_secattr_catmap {scalar_t__ startbit; int* bitmap; struct netlbl_lsm_secattr_catmap* next; } ;
typedef int NETLBL_CATMAP_MAPTYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_0(struct netlbl_lsm_secattr_catmap *VAR_5,
       u32 VAR_6)
{
 struct netlbl_lsm_secattr_catmap *VAR_7 = VAR_5;
 u32 VAR_8;
 u32 VAR_9;
 NETLBL_CATMAP_MAPTYPE VAR_10;
 NETLBL_CATMAP_MAPTYPE VAR_11;

 if (VAR_6 > VAR_7->startbit) {
  while (VAR_6 >= (VAR_7->startbit + VAR_4)) {
   VAR_7 = VAR_7->next;
   if (VAR_7 == ((void*)0))
    return -VAR_0;
  }
  VAR_8 = (VAR_6 - VAR_7->startbit) / VAR_3;
  VAR_9 = VAR_6 - VAR_7->startbit -
      (VAR_3 * VAR_8);
 } else {
  VAR_8 = 0;
  VAR_9 = 0;
 }
 VAR_10 = VAR_1 << VAR_9;

 for (;;) {
  VAR_11 = VAR_7->bitmap[VAR_8];
  while (VAR_10 != 0 && (VAR_11 & VAR_10) != 0) {
   VAR_10 <<= 1;
   VAR_9++;
  }

  if (VAR_10 != 0)
   return VAR_7->startbit +
    (VAR_3 * VAR_8) +
    VAR_9 - 1;
  else if (++VAR_8 >= VAR_2) {
   if (VAR_7->next == ((void*)0))
    return VAR_7->startbit + VAR_4 - 1;
   VAR_7 = VAR_7->next;
   VAR_8 = 0;
  }
  VAR_10 = VAR_1;
  VAR_9 = 0;
 }

 return -VAR_0;
}
