
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ieee80211_channel {int ic_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int,char*,char const*,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_channel*,int,int ) ;
 int FUNC_4 (struct ieee80211_channel*,int,int ) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*,char**,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_18, int VAR_19)
{

 const char *VAR_20;
 int VAR_21;
 int VAR_22 = 0;

 VAR_21 = 0;

 VAR_20 = FUNC_5(VAR_18, ':');
 if (VAR_20 != ((void*)0)) {
  for (VAR_20++; FUNC_1((int) *VAR_20); VAR_20++) {

   int VAR_23 = *VAR_20;
   if (FUNC_2(VAR_23))
    VAR_23 = FUNC_7(VAR_23);
   switch (VAR_23) {
   case 'a':
    VAR_21 |= VAR_0;
    break;
   case 'b':
    VAR_21 |= VAR_1;
    break;
   case 'g':
    VAR_21 |= VAR_2;
    break;
   case 'v':
    VAR_22 = 1;

   case 'h':
   case 'n':
    VAR_21 |= 0x80000000;
    break;
   case 'd':
    VAR_21 |= VAR_10;
    break;
   case 't':

    if ((VAR_21 & (VAR_9|0x80000000)) == 0)
     VAR_21 |= VAR_10;
    break;
   case 's':
    VAR_21 |= VAR_9;
    break;
   default:
    FUNC_0(-1, "%s: Invalid channel attribute %c\n",
        VAR_18, *VAR_20);
   }
  }
 }
 VAR_20 = FUNC_5(VAR_18, '/');
 if (VAR_20 != ((void*)0)) {
  char *VAR_24;
  u_long VAR_25 = FUNC_6(VAR_20+1, &VAR_24, 10);

  switch (VAR_25) {
  case 5:
   VAR_21 |= VAR_8;
   break;
  case 10:
   VAR_21 |= VAR_3;
   break;
  case 20:

   VAR_21 |= VAR_5;
   break;
  case 40:
  case 80:
  case 160:

   if (VAR_25 == 80)
    VAR_21 |= VAR_16;
   else if (VAR_25 == 160)
    VAR_21 |= VAR_12;


   if (VAR_24 != ((void*)0) && *VAR_24 == '+')
    VAR_21 |= VAR_7;
   else if (VAR_24 != ((void*)0) && *VAR_24 == '-')
    VAR_21 |= VAR_6;
   break;
  default:
   FUNC_0(-1, "%s: Invalid channel width\n", VAR_18);
  }
 }




 if ((VAR_21 & 0x80000000) == 0) {







  VAR_21 &= ~VAR_4;
  VAR_21 &= ~VAR_11;
 } else {





  VAR_21 &= ~0x80000000;
  if ((VAR_21 & VAR_4) == 0) {
   struct ieee80211_channel VAR_26;




   if (VAR_19 > 255)
    FUNC_4(&VAR_26, VAR_19, 0);
   else
    FUNC_3(&VAR_26, VAR_19, 0);
   VAR_21 |= (VAR_26.ic_flags & VAR_4);
  }





  if (VAR_22 && (VAR_21 & VAR_4)) {




   if (VAR_21 & VAR_16)
    ;
   else if (VAR_21 & VAR_5)
    VAR_21 |= VAR_13;
   else if (VAR_21 & VAR_7)
    VAR_21 |= VAR_15;
   else if (VAR_21 & VAR_6)
    VAR_21 |= VAR_14;
  }
 }
 return VAR_21;

}
