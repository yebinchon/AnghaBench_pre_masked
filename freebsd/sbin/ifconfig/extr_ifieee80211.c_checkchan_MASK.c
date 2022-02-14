
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req_chaninfo {int ic_nchans; int ic_chans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int * FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(const struct ieee80211req_chaninfo *VAR_6, int VAR_7, int VAR_8)
{
 VAR_8 &= ~VAR_5;





 if (FUNC_1(VAR_6->ic_chans, VAR_6->ic_nchans, VAR_7, VAR_8) != ((void*)0))
  return 1;
 if (VAR_8 & VAR_2) {






  return 1;
 }
 if ((VAR_8 & (VAR_3 | VAR_4)) == 0)
  return 0;
 if (FUNC_1(VAR_6->ic_chans, VAR_6->ic_nchans, VAR_7,
     VAR_8 &~ (VAR_3 | VAR_4)) == ((void*)0))
  return 0;
 if (VAR_8 & VAR_3) {
  return FUNC_0(VAR_6->ic_chans, VAR_6->ic_nchans,
      VAR_3 |
         (VAR_8 & (VAR_0 | VAR_1)));
 } else {
  return FUNC_0(VAR_6->ic_chans, VAR_6->ic_nchans,
      VAR_4 |
   (VAR_8 & (VAR_0 | VAR_1)));
 }
}
