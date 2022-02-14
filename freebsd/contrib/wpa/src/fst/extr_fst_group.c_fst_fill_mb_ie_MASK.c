
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct multi_band_ie {size_t len; int band_id; int mb_ctrl; int fst_session_tmout; int chan; scalar_t__ op_class; struct multi_band_ie* bssid; scalar_t__ mb_connection_capability; int eid; } ;
typedef enum mb_band_id { ____Placeholder_mb_band_id } mb_band_id ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct multi_band_ie*,int const*,scalar_t__) ;
 int FUNC_1 (struct multi_band_ie*,int ,size_t) ;
 struct multi_band_ie* FUNC_2 (struct wpabuf*,size_t) ;

__attribute__((used)) static void FUNC_3(struct wpabuf *VAR_7, const u8 *VAR_8,
      const u8 *VAR_9, enum mb_band_id VAR_10, u8 VAR_11)
{
 struct multi_band_ie *VAR_12;
 size_t VAR_13 = sizeof(*VAR_12);

 if (VAR_9)
  VAR_13 += VAR_0;

 VAR_12 = FUNC_2(VAR_7, VAR_13);

 FUNC_1(VAR_12, 0, VAR_13);

 VAR_12->eid = VAR_6;
 VAR_12->len = VAR_13 - 2;




 VAR_12->mb_ctrl = VAR_5;
 VAR_12->mb_connection_capability = 0;

 if (VAR_8)
  FUNC_0(VAR_12->bssid, VAR_8, VAR_0);
 VAR_12->band_id = VAR_10;
 VAR_12->op_class = 0;
 VAR_12->chan = VAR_11;
 VAR_12->fst_session_tmout = VAR_1;

 if (VAR_9) {
  VAR_12->mb_ctrl |= VAR_3;
  FUNC_0(&VAR_12[1], VAR_9, VAR_0);
 }
}
