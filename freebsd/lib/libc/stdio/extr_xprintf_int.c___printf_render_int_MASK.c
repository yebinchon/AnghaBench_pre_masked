
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union arg {char intmaxarg; char uintmaxarg; char ulongarg; char uintarg; scalar_t__ intarg; scalar_t__ longarg; } ;
typedef char uintmax_t ;
typedef char u_long ;
struct printf_info {int spec; char showsign; int prec; int width; scalar_t__ left; int pad; scalar_t__ alt; scalar_t__ is_char; scalar_t__ is_short; scalar_t__ is_long; scalar_t__ is_ptrdiff; scalar_t__ is_size; scalar_t__ is_intmax; scalar_t__ is_quad; scalar_t__ is_long_double; scalar_t__ group; } ;
struct __printf_io {int dummy; } ;
struct TYPE_2__ {char* thousands_sep; char* grouping; } ;


 int VAR_0 ;
 char VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct __printf_io*) ;
 scalar_t__ FUNC_1 (struct __printf_io*,int,int) ;
 scalar_t__ FUNC_2 (struct __printf_io*,char const*,int) ;
 char* FUNC_3 (char,char*,int,char const*,int,char,char const*) ;
 char* FUNC_4 (char,char*,int,char const*,int,char,char const*) ;
 char* VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int) ;
 TYPE_1__* FUNC_7 () ;
 int VAR_4 ;

int
FUNC_8(struct __printf_io *VAR_5, const struct printf_info *VAR_6, const void *const *VAR_7)
{
 const union arg *VAR_8;
 char VAR_9[VAR_0];
 char *VAR_10, *VAR_11;
 char VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 const char *VAR_18, *VAR_19;
 char VAR_20;
 const char *VAR_21;
 uintmax_t VAR_22;
 int VAR_23;

 VAR_23 = 0;
 VAR_18 = ((void*)0);
 VAR_19 = VAR_2;
 VAR_12 = '\0';
 VAR_11 = VAR_9 + sizeof VAR_9 - 1;

 if (VAR_6->group) {
  VAR_20 = *(FUNC_7()->thousands_sep);
  VAR_21 = FUNC_7()->grouping;
  VAR_14 = 1;
 } else {
  VAR_20 = 0;
  VAR_21 = ((void*)0);
  VAR_14 = 0;
 }

 switch(VAR_6->spec) {
 case 'd':
 case 'i':
  VAR_15 = 10;
  VAR_16 = 1;
  break;
 case 'X':
  VAR_19 = VAR_3;

 case 'x':
  VAR_15 = 16;
  VAR_16 = 0;
  break;
 case 'u':
 case 'U':
  VAR_15 = 10;
  VAR_16 = 0;
  break;
 case 'o':
 case 'O':
  VAR_15 = 8;
  VAR_16 = 0;
  break;
 default:
  FUNC_6(VAR_4, "pi->spec = '%c'\n", VAR_6->spec);
  FUNC_5(1 == 0);
 }
 VAR_8 = VAR_7[0];

 if (VAR_16)
  VAR_12 = VAR_6->showsign;

 if (VAR_6->is_long_double || VAR_6->is_quad || VAR_6->is_intmax ||
     VAR_6->is_size || VAR_6->is_ptrdiff) {
  if (VAR_16 && VAR_8->intmaxarg < 0) {
   VAR_22 = -VAR_8->intmaxarg;
   VAR_12 = '-';
  } else
   VAR_22 = VAR_8->uintmaxarg;
 } else if (VAR_6->is_long) {
  if (VAR_16 && VAR_8->longarg < 0) {
   VAR_22 = (u_long)-VAR_8->longarg;
   VAR_12 = '-';
  } else
   VAR_22 = VAR_8->ulongarg;
 } else if (VAR_6->is_short) {
  if (VAR_16 && (short)VAR_8->intarg < 0) {
   VAR_22 = -(short)VAR_8->intarg;
   VAR_12 = '-';
  } else
   VAR_22 = (unsigned short)VAR_8->uintarg;
 } else if (VAR_6->is_char) {
  if (VAR_16 && (signed char)VAR_8->intarg < 0) {
   VAR_22 = -(signed char)VAR_8->intarg;
   VAR_12 = '-';
  } else
   VAR_22 = (unsigned char)VAR_8->uintarg;
 } else {
  if (VAR_16 && VAR_8->intarg < 0) {
   VAR_22 = (unsigned)-VAR_8->intarg;
   VAR_12 = '-';
  } else
   VAR_22 = VAR_8->uintarg;
 }
 if (VAR_22 <= VAR_1)
  VAR_10 = FUNC_4(VAR_22, VAR_11, VAR_15, VAR_19, VAR_14, VAR_20, VAR_21);
 else
  VAR_10 = FUNC_3(VAR_22, VAR_11, VAR_15, VAR_19, VAR_14, VAR_20, VAR_21);

 VAR_13 = 0;
 if (VAR_22 == 0) {
   ;
  if (VAR_6->prec == 0 && !(VAR_6->alt && VAR_15 == 8))
   VAR_10 = VAR_11;
 } else if (VAR_6->alt) {
  if (VAR_15 == 8)
   *--VAR_10 = '0';
  if (VAR_15 == 16) {
   if (VAR_6->spec == 'x')
    VAR_18 = "0x";
   else
    VAR_18 = "0X";
   VAR_13 += 2;
  }
 }
 VAR_13 += VAR_11 - VAR_10;
 if (VAR_12)
  VAR_13++;






 if (VAR_6->prec > (VAR_11 - VAR_10))
  VAR_17 = VAR_6->prec - (VAR_11 - VAR_10);
 else if (VAR_6->prec != -1)
  VAR_17 = 0;
 else if (VAR_6->pad == '0' && VAR_6->width > VAR_13 && !VAR_6->left)
  VAR_17 = VAR_6->width - VAR_13;
 else
  VAR_17 = 0;

 VAR_13 += VAR_17;

 while (VAR_17 > 0 && VAR_10 > VAR_9) {
  *--VAR_10 = '0';
  VAR_17--;
 }

 if (VAR_13 < VAR_0) {
  if (VAR_12) {
   *--VAR_10 = VAR_12;
  } else if (VAR_18 != ((void*)0)) {
   *--VAR_10 = VAR_18[1];
   *--VAR_10 = VAR_18[0];
  }
  if (VAR_6->width > (VAR_11 - VAR_10) && !VAR_6->left) {
   VAR_13 = VAR_6->width - (VAR_11 - VAR_10);
   while (VAR_13 > 0 && VAR_10 > VAR_9) {
    *--VAR_10 = ' ';
    VAR_13--;
   }
   if (VAR_13)
    VAR_23 += FUNC_1(VAR_5, VAR_13, 0);
  }
 } else {
  if (!VAR_6->left && VAR_6->width > VAR_13)
   VAR_23 += FUNC_1(VAR_5, VAR_6->width - VAR_13, 0);
  if (VAR_12 != '\0')
   VAR_23 += FUNC_2(VAR_5, &VAR_12, 1);
  else if (VAR_18 != ((void*)0))
   VAR_23 += FUNC_2(VAR_5, VAR_18, 2);
  if (VAR_17 > 0)
   VAR_23 += FUNC_1(VAR_5, VAR_17, 1);
 }

 VAR_23 += FUNC_2(VAR_5, VAR_10, VAR_11 - VAR_10);
 if (VAR_6->width > VAR_23 && VAR_6->left)
  VAR_23 += FUNC_1(VAR_5, VAR_6->width - VAR_23, 0);
 FUNC_0(VAR_5);
 return (VAR_23);
}
