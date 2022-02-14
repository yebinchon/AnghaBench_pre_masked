
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_ds_plcp_hdr {int i_service; int i_length; int i_signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static __inline void
FUNC_3(struct ieee80211_ds_plcp_hdr *VAR_4, int VAR_5,
     uint8_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = VAR_5 * VAR_3;
 VAR_7 = FUNC_0(VAR_9 * 2, VAR_6);

 VAR_8 = VAR_1;
 if (VAR_6 == (11 * 2)) {
  int VAR_10;





  VAR_10 = VAR_7 * 11;
  if (VAR_10 - VAR_9 >= VAR_3)
   VAR_8 |= VAR_0;
 }

 VAR_4->i_signal = FUNC_2(VAR_6, VAR_2);
 VAR_4->i_service = VAR_8;
 VAR_4->i_length = FUNC_1(VAR_7);

}
