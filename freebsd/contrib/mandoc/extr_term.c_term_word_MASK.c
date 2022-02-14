
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int flags; scalar_t__ enc; int col; int ti; size_t (* width ) (struct termp*,int) ;TYPE_1__* tcol; int type; scalar_t__ skipvsp; } ;
struct roffsu {int dummy; } ;
typedef enum mandoc_esc { ____Placeholder_mandoc_esc } mandoc_esc ;
struct TYPE_2__ {size_t offset; int rmargin; int lastcol; char* buf; } ;


 char const VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_18 ;
 char* FUNC_0 (char const*,struct roffsu*,int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (struct termp*,char const) ;
 int FUNC_3 (struct termp*,char const*,size_t) ;
 int FUNC_4 (struct termp*,int) ;
 int FUNC_5 (char const**,char const**,int*) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (char const*,int) ;
 char* FUNC_9 (char const*,int,size_t*) ;
 size_t FUNC_10 (char const*,char*) ;
 size_t FUNC_11 (char const*) ;
 size_t FUNC_12 (struct termp*,int) ;
 int FUNC_13 (struct termp*) ;
 int FUNC_14 (struct termp*,int ) ;
 int FUNC_15 (struct termp*,struct roffsu*) ;
 size_t FUNC_16 (struct termp*,char const*) ;

void
FUNC_17(struct termp *VAR_19, const char *VAR_20)
{
 struct roffsu VAR_21;
 const char VAR_22[2] = { VAR_0, 0 };
 const char *VAR_23, *VAR_24;
 int VAR_25, VAR_26;
 size_t VAR_27, VAR_28, VAR_29;
 enum mandoc_esc VAR_30;

 if ((VAR_19->flags & VAR_11) == 0) {
  if ((VAR_19->flags & VAR_14) == 0) {
   if ((VAR_19->flags & VAR_9) == 0) {
    FUNC_2(VAR_19, ' ');
    if (VAR_19->flags & VAR_16)
     FUNC_2(VAR_19, ' ');
   } else
    FUNC_2(VAR_19, VAR_0);
  }
  if (VAR_19->flags & VAR_15)
   VAR_19->flags |= VAR_9;
  if (VAR_19->flags & VAR_13)
   VAR_19->flags |= VAR_14;
  else
   VAR_19->flags &= ~VAR_14;
  VAR_19->flags &= ~(VAR_16 | VAR_12);
  VAR_19->skipvsp = 0;
 }

 while ('\0' != *VAR_20) {
  if ('\\' != *VAR_20) {
   if (VAR_10 & VAR_19->flags) {
    if (' ' == *VAR_20) {
     FUNC_3(VAR_19, VAR_22, 1);
     VAR_20++;
     continue;
    }
    VAR_29 = FUNC_10(VAR_20, "\\ ");
   } else
    VAR_29 = FUNC_10(VAR_20, "\\");
   FUNC_3(VAR_19, VAR_20, VAR_29);
   VAR_20 += (int)VAR_29;
   continue;
  }

  VAR_20++;
  VAR_30 = FUNC_5(&VAR_20, &VAR_23, &VAR_25);
  switch (VAR_30) {
  case 128:
   VAR_26 = FUNC_7(VAR_23 + 1, VAR_25 - 1);
   break;
  case 133:
   VAR_26 = FUNC_6(VAR_23, VAR_25);
   if (VAR_26 < 0)
    continue;
   break;
  case 130:
   if (VAR_19->enc == VAR_2) {
    VAR_24 = FUNC_9(VAR_23, VAR_25, &VAR_29);
    if (VAR_24 != ((void*)0))
     FUNC_3(VAR_19, VAR_24, VAR_29);
   } else {
    VAR_26 = FUNC_8(VAR_23, VAR_25);
    if (VAR_26 > 0)
     FUNC_4(VAR_19, VAR_26);
   }
   continue;
  case 129:
   VAR_26 = *VAR_23;
   break;
  case 141:
   FUNC_14(VAR_19, VAR_4);
   continue;
  case 139:
   FUNC_14(VAR_19, VAR_6);
   continue;
  case 142:
   FUNC_14(VAR_19, VAR_3);
   continue;
  case 143:
  case 140:
  case 137:
   FUNC_14(VAR_19, VAR_5);
   continue;
  case 138:
   FUNC_13(VAR_19);
   continue;
  case 145:
   FUNC_2(VAR_19, '\n');
   continue;
  case 134:
   if (VAR_19->flags & VAR_7)
    VAR_19->flags &= ~VAR_7;
   else if (*VAR_20 == '\0')
    VAR_19->flags |= (VAR_14 | VAR_12);
   continue;
  case 144:
   if (VAR_19->type == VAR_17)
    FUNC_3(VAR_19, "pdf", 3);
   else if (VAR_19->type == VAR_18)
    FUNC_3(VAR_19, "ps", 2);
   else if (VAR_19->enc == VAR_2)
    FUNC_3(VAR_19, "ascii", 5);
   else
    FUNC_3(VAR_19, "utf8", 4);
   continue;
  case 135:
   if (*VAR_23 == '|') {
    VAR_23++;
    VAR_26 = -VAR_19->col;
   } else
    VAR_26 = 0;
   if (FUNC_0(VAR_23, &VAR_21, VAR_1) == ((void*)0))
    continue;
   VAR_26 += FUNC_15(VAR_19, &VAR_21);
   if (VAR_26 > 0)
    while (VAR_26-- > 0)
     FUNC_2(VAR_19, VAR_0);
   else if (VAR_19->col > (size_t)(-VAR_26))
    VAR_19->col += VAR_26;
   else {
    VAR_26 += VAR_19->col;
    VAR_19->col = 0;
    if (VAR_19->tcol->offset > (size_t)(-VAR_26)) {
     VAR_19->ti += VAR_26;
     VAR_19->tcol->offset += VAR_26;
    } else {
     VAR_19->ti -= VAR_19->tcol->offset;
     VAR_19->tcol->offset = 0;
    }
   }
   continue;
  case 136:
   if ((VAR_24 = FUNC_0(VAR_23, &VAR_21, VAR_1)) == ((void*)0))
    continue;
   VAR_26 = FUNC_15(VAR_19, &VAR_21);
   if (VAR_26 <= 0) {
    if (VAR_19->tcol->rmargin <= VAR_19->tcol->offset)
     continue;
    VAR_28 = VAR_19->tcol->rmargin - VAR_19->tcol->offset;
   } else
    VAR_28 = VAR_26;
   if (*VAR_24 == VAR_23[-1])
    VAR_26 = -1;
   else if (*VAR_24 == '\\') {
    VAR_23 = VAR_24 + 1;
    VAR_30 = FUNC_5(&VAR_23, &VAR_24, &VAR_25);
    switch (VAR_30) {
    case 128:
     VAR_26 = FUNC_7(VAR_24 + 1, VAR_25 - 1);
     break;
    case 133:
     VAR_26 = FUNC_6(VAR_24, VAR_25);
     break;
    case 130:
     VAR_26 = FUNC_8(VAR_24, VAR_25);
     break;
    case 129:
     VAR_26 = *VAR_23;
     break;
    default:
     VAR_26 = -1;
     break;
    }
   } else
    VAR_26 = *VAR_24;
   if (VAR_26 < 0x20 || (VAR_26 > 0x7E && VAR_26 < 0xA0))
    VAR_26 = '_';
   if (VAR_19->enc == VAR_2) {
    VAR_24 = FUNC_1(VAR_26);
    VAR_27 = FUNC_16(VAR_19, VAR_24);
    VAR_29 = FUNC_11(VAR_24);
   } else
    VAR_27 = (*VAR_19->width)(VAR_19, VAR_26);
   while (VAR_28 >= VAR_27) {
    if (VAR_19->enc == VAR_2)
     FUNC_3(VAR_19, VAR_24, VAR_29);
    else
     FUNC_4(VAR_19, VAR_26);
    VAR_28 -= VAR_27;
   }
   continue;
  case 131:
   VAR_19->flags |= VAR_7;
   continue;
  case 132:
   VAR_24 = VAR_23 + VAR_25;
   while (VAR_23 < VAR_24) {
    if (*VAR_23 == '\\') {
     FUNC_5(&VAR_23, ((void*)0), ((void*)0));
     continue;
    }
    FUNC_4(VAR_19, *VAR_23++);
    if (VAR_23 < VAR_24) {
     if (VAR_19->flags & VAR_8)
      VAR_19->flags |= VAR_7;
     else
      VAR_19->flags |= VAR_8;
    }
   }

   if (VAR_19->tcol->lastcol > 2 &&
       (VAR_19->tcol->buf[VAR_19->tcol->lastcol - 1] == ' ' ||
        VAR_19->tcol->buf[VAR_19->tcol->lastcol - 1] == '\t'))
    VAR_19->tcol->lastcol -= 2;
   if (VAR_19->col > VAR_19->tcol->lastcol)
    VAR_19->col = VAR_19->tcol->lastcol;
   continue;
  default:
   continue;
  }






  if (VAR_19->enc == VAR_2) {
   VAR_24 = FUNC_1(VAR_26);
   FUNC_3(VAR_19, VAR_24, FUNC_11(VAR_24));
  } else {
   if ((VAR_26 < 0x20 && VAR_26 != 0x09) ||
       (VAR_26 > 0x7E && VAR_26 < 0xA0))
    VAR_26 = 0xFFFD;
   FUNC_4(VAR_19, VAR_26);
  }
 }
 VAR_19->flags &= ~VAR_10;
}
