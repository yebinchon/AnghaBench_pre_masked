
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stainforeq {size_t space; void* si; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211req {size_t i_len; scalar_t__ i_data; } ;
struct ieee80211com {int ic_sta; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (size_t,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,int *,size_t) ;
 int FUNC_3 (struct stainforeq*,struct ieee80211_node*) ;
 int FUNC_4 (struct stainforeq*,struct ieee80211_node*) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (int *,struct ieee80211vap*,int (*) (struct stainforeq*,struct ieee80211_node*),struct stainforeq*) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211vap *VAR_4, struct ieee80211req *VAR_5,
 struct ieee80211_node *VAR_6, size_t VAR_7)
{
 struct ieee80211com *VAR_8 = VAR_4->iv_ic;
 struct stainforeq VAR_9;
 size_t VAR_10;
 void *VAR_11;
 int VAR_12;

 VAR_12 = 0;
 VAR_9.space = 0;
 if (VAR_6 == ((void*)0)) {
  FUNC_6(&VAR_8->ic_sta, VAR_4, FUNC_4,
      &VAR_9);
 } else
  FUNC_4(&VAR_9, VAR_6);
 if (VAR_9.space > VAR_5->i_len)
  VAR_9.space = VAR_5->i_len;
 if (VAR_9.space > 0) {
  VAR_10 = VAR_9.space;

  VAR_11 = FUNC_1(VAR_10, VAR_3,
      VAR_1 | VAR_2);
  if (VAR_11 == ((void*)0)) {
   VAR_12 = VAR_0;
   goto bad;
  }
  VAR_9.si = VAR_11;
  if (VAR_6 == ((void*)0)) {
   FUNC_6(&VAR_8->ic_sta, VAR_4,
       FUNC_3, &VAR_9);
  } else
   FUNC_3(&VAR_9, VAR_6);
  VAR_5->i_len = VAR_10 - VAR_9.space;
  VAR_12 = FUNC_2(VAR_11, (uint8_t *) VAR_5->i_data+VAR_7, VAR_5->i_len);
  FUNC_0(VAR_11, VAR_3);
 } else
  VAR_5->i_len = 0;
bad:
 if (VAR_6 != ((void*)0))
  FUNC_5(VAR_6);
 return VAR_12;
}
