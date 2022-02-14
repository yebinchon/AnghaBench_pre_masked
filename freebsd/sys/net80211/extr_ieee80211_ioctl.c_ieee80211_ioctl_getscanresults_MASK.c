
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scanreq {int space; void* sr; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211req {int i_len; int i_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ieee80211vap*,int ,struct scanreq*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211vap *VAR_7,
 struct ieee80211req *VAR_8)
{
 struct scanreq VAR_9;
 int VAR_10;

 if (VAR_8->i_len < sizeof(struct scanreq))
  return VAR_0;

 VAR_10 = 0;
 VAR_9.space = 0;
 FUNC_3(VAR_7, VAR_6, &VAR_9);
 if (VAR_9.space > VAR_8->i_len)
  VAR_9.space = VAR_8->i_len;
 if (VAR_9.space > 0) {
  uint32_t VAR_11;
  void *VAR_12;

  VAR_11 = VAR_9.space;

  VAR_12 = FUNC_1(VAR_11, VAR_4,
      VAR_2 | VAR_3);
  if (VAR_12 == ((void*)0))
   return VAR_1;
  VAR_9.sr = VAR_12;
  FUNC_3(VAR_7, VAR_5, &VAR_9);
  VAR_8->i_len = VAR_11 - VAR_9.space;
  VAR_10 = FUNC_2(VAR_12, VAR_8->i_data, VAR_8->i_len);
  FUNC_0(VAR_12, VAR_4);
 } else
  VAR_8->i_len = 0;

 return VAR_10;
}
