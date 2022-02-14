
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_frame const*,int *,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_8,
    const struct ieee80211_frame *VAR_9, const uint8_t *VAR_10)
{
 int VAR_11 = -1;
 int VAR_12 = -1;
 if (VAR_10[2] & VAR_2) {

  VAR_11 = VAR_1;
  VAR_12 = VAR_10[VAR_4];
 } else {

  VAR_11 = VAR_0;
  VAR_12 = VAR_10[VAR_3];
 }
 VAR_11 += VAR_12 * VAR_5;

 if(VAR_10[1] != (VAR_11)) {
  FUNC_0(VAR_8,
      VAR_6 | VAR_7,
      VAR_9, ((void*)0), "PREQ (AE=%s) with wrong len",
      VAR_10[2] & VAR_2 ? "1" : "0");
  return (-1);
 }
 return VAR_12;
}
