
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int ic_rxstream; int ic_txstream; int ic_htcaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_4, uint8_t *VAR_5)
{
 int VAR_6;
 uint8_t VAR_7;

 FUNC_0((VAR_4->ic_rxstream > 0 && VAR_4->ic_rxstream <= 4),
     ("ic_rxstream %d out of range", VAR_4->ic_rxstream));
 FUNC_0((VAR_4->ic_txstream > 0 && VAR_4->ic_txstream <= 4),
     ("ic_txstream %d out of range", VAR_4->ic_txstream));

 for (VAR_6 = 0; VAR_6 < VAR_4->ic_rxstream * 8; VAR_6++)
  FUNC_1(VAR_5, VAR_6);
 if ((VAR_4->ic_htcaps & VAR_0) &&
     (VAR_4->ic_htcaps & VAR_1))
  FUNC_1(VAR_5, 32);
 if (VAR_4->ic_htcaps & VAR_2) {
  if (VAR_4->ic_rxstream >= 2) {
   for (VAR_6 = 33; VAR_6 <= 38; VAR_6++)
    FUNC_1(VAR_5, VAR_6);
  }
  if (VAR_4->ic_rxstream >= 3) {
   for (VAR_6 = 39; VAR_6 <= 52; VAR_6++)
    FUNC_1(VAR_5, VAR_6);
  }
  if (VAR_4->ic_txstream >= 4) {
   for (VAR_6 = 53; VAR_6 <= 76; VAR_6++)
    FUNC_1(VAR_5, VAR_6);
  }
 }

 if (VAR_4->ic_rxstream != VAR_4->ic_txstream) {
  VAR_7 = 0x1;
  VAR_7 |= 0x2;
  VAR_7 |= (VAR_4->ic_txstream - 1) << 2;
  if (VAR_4->ic_htcaps & VAR_3)
   VAR_7 |= 0x16;
 } else
  VAR_7 = 0;
 VAR_5[12] = VAR_7;
}
