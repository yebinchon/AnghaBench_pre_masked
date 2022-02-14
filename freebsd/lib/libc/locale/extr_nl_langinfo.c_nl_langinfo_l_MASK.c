
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int nl_item ;
typedef TYPE_2__* locale_t ;
struct TYPE_24__ {scalar_t__ thousands_sep; scalar_t__ decimal_point; } ;
struct TYPE_23__ {scalar_t__ md_order; scalar_t__* alt_month; scalar_t__* mon; scalar_t__* month; scalar_t__* wday; scalar_t__* weekday; scalar_t__ pm; scalar_t__ am; scalar_t__ ampm_fmt; scalar_t__ X_fmt; scalar_t__ x_fmt; scalar_t__ c_fmt; } ;
struct TYPE_22__ {char p_cs_precedes; char n_cs_precedes; } ;
struct TYPE_21__ {char* csym; } ;
struct TYPE_20__ {char* __encoding; } ;
struct TYPE_19__ {TYPE_1__* runes; } ;
struct TYPE_18__ {scalar_t__ nostr; scalar_t__ yesstr; scalar_t__ noexpr; scalar_t__ yesexpr; } ;
struct TYPE_17__ {char* mon_decimal_point; scalar_t__ currency_symbol; } ;
 char VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_14__* FUNC_1 (TYPE_2__*) ;


 size_t FUNC_2 (int const) ;
 TYPE_12__* FUNC_3 (TYPE_2__*) ;
 TYPE_10__* FUNC_4 (TYPE_2__*) ;
 TYPE_8__* FUNC_5 (TYPE_2__*) ;
 TYPE_6__* FUNC_6 (TYPE_2__*) ;
 TYPE_4__* FUNC_7 (TYPE_2__*) ;
 char* FUNC_8 (char*,int) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char const*,char*,int) ;

char *
FUNC_13(nl_item VAR_1, locale_t VAR_2)
{
   char *VAR_3, *VAR_4;
   const char *VAR_5;
   FUNC_0(VAR_2);

   switch (VAR_1) {
 case 164:
  VAR_5 = FUNC_1(VAR_2)->runes->__encoding;
  if (FUNC_9(VAR_5, "EUC-CN") == 0)
   VAR_3 = "eucCN";
  else if (FUNC_9(VAR_5, "EUC-JP") == 0)
   VAR_3 = "eucJP";
  else if (FUNC_9(VAR_5, "EUC-KR") == 0)
   VAR_3 = "eucKR";
  else if (FUNC_9(VAR_5, "EUC-TW") == 0)
   VAR_3 = "eucTW";
  else if (FUNC_9(VAR_5, "BIG5") == 0)
   VAR_3 = "Big5";
  else if (FUNC_9(VAR_5, "MSKanji") == 0)
   VAR_3 = "SJIS";
  else if (FUNC_9(VAR_5, "NONE") == 0)
   VAR_3 = "US-ASCII";
  else if (FUNC_12(VAR_5, "NONE:", 5) == 0)
   VAR_3 = (char *)(VAR_5 + 5);
  else
   VAR_3 = (char *)VAR_5;
  break;
 case 153:
  VAR_3 = (char *) FUNC_6(VAR_2)->c_fmt;
  break;
 case 155:
  VAR_3 = (char *) FUNC_6(VAR_2)->x_fmt;
  break;
 case 131:
  VAR_3 = (char *) FUNC_6(VAR_2)->X_fmt;
  break;
 case 130:
  VAR_3 = (char *) FUNC_6(VAR_2)->ampm_fmt;
  break;
 case 165:
  VAR_3 = (char *) FUNC_6(VAR_2)->am;
  break;
 case 134:
  VAR_3 = (char *) FUNC_6(VAR_2)->pm;
  break;
 case 162: case 161: case 160:
 case 159: case 158: case 157: case 156:
  VAR_3 = (char*) FUNC_6(VAR_2)->weekday[FUNC_2(162)];
  break;
 case 197: case 196: case 195:
 case 194: case 193: case 192: case 191:
  VAR_3 = (char*) FUNC_6(VAR_2)->wday[FUNC_2(197)];
  break;
 case 148: case 144: case 143: case 142:
 case 141: case 140: case 139: case 138:
 case 137: case 147: case 146: case 145:
  VAR_3 = (char*) FUNC_6(VAR_2)->month[FUNC_2(148)];
  break;
 case 190: case 186: case 185: case 184:
 case 183: case 182: case 181: case 180:
 case 179: case 189: case 188: case 187:
  VAR_3 = (char*) FUNC_6(VAR_2)->mon[FUNC_2(190)];
  break;
 case 178: case 174: case 173: case 172:
 case 171: case 170: case 169: case 168:
 case 167: case 177: case 176: case 175:
  VAR_3 = (char*)
      FUNC_6(VAR_2)->alt_month[FUNC_2(178)];
  break;
 case 152:

  VAR_3 = "";
  break;
 case 151:

  VAR_3 = "";
  break;
 case 150:

  VAR_3 = "";
  break;
 case 149:

  VAR_3 = "";
  break;
 case 166:

  VAR_3 = "";
  break;
 case 133:
  VAR_3 = (char*) FUNC_5(VAR_2)->decimal_point;
  break;
 case 132:
  VAR_3 = (char*) FUNC_5(VAR_2)->thousands_sep;
  break;
 case 129:
  VAR_3 = (char*) FUNC_3(VAR_2)->yesexpr;
  break;
 case 136:
  VAR_3 = (char*) FUNC_3(VAR_2)->noexpr;
  break;





 case 128:
  VAR_3 = (char*) FUNC_3(VAR_2)->yesstr;
  break;
 case 135:
  VAR_3 = (char*) FUNC_3(VAR_2)->nostr;
  break;



 case 163:
  VAR_3 = "";
  VAR_4 = (char*) FUNC_4(VAR_2)->currency_symbol;
  if (*VAR_4 != '\0') {
   char VAR_6 = FUNC_7(VAR_2)->p_cs_precedes;

   if (VAR_6 == FUNC_7(VAR_2)->n_cs_precedes) {
    char VAR_7 = '\0';

    if (VAR_6 == VAR_0) {
     if (FUNC_9(VAR_4, FUNC_4(VAR_2)->mon_decimal_point) == 0)
      VAR_7 = '.';
    } else
     VAR_7 = VAR_6 ? '-' : '+';
    if (VAR_7 != '\0') {
     int VAR_8 = FUNC_11(VAR_4);

     if ((VAR_2->csym = FUNC_8(VAR_2->csym, VAR_8 + 2)) != ((void*)0)) {
      *VAR_2->csym = VAR_7;
      FUNC_10(VAR_2->csym + 1, VAR_4);
      VAR_3 = VAR_2->csym;
     }
    }
   }
  }
  break;
 case 154:
  VAR_3 = (char *) FUNC_6(VAR_2)->md_order;
  break;
 default:
  VAR_3 = "";
   }
   return (VAR_3);
}
