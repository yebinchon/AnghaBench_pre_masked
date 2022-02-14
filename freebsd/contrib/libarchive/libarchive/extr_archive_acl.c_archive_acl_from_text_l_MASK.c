
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive_acl {int dummy; } ;


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
 int FUNC_0 (struct archive_acl*,int,int,int,int,char const*,int,struct archive_string_conv*) ;
 int FUNC_1 (struct archive_acl*,int) ;
 int FUNC_2 (char const*,char const*,int*) ;
 int FUNC_3 (char const*,char const*,int*) ;
 int FUNC_4 (char const*,char const*,int*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char const**,char const**,char const**,char*) ;

int
FUNC_8(struct archive_acl *VAR_11, const char *VAR_12,
    int VAR_13, struct archive_string_conv *VAR_14)
{
 struct {
  const char *start;
  const char *end;
 } VAR_15[6], VAR_16;

 const char *VAR_17, *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 size_t VAR_30;
 char VAR_31;

 switch (VAR_13) {
 case 129:
  VAR_13 = 132;
  VAR_10;
 case 132:
 case 131:
  VAR_19 = 5;
  break;
 case 130:
  VAR_19 = 6;
  break;
 default:
  return (VAR_7);
 }

 VAR_24 = VAR_8;
 VAR_26 = 0;

 while (VAR_12 != ((void*)0) && *VAR_12 != '\0') {




  VAR_20 = 0;
  do {
   const char *VAR_32, *VAR_33;
   FUNC_7(&VAR_12, &VAR_32, &VAR_33, &VAR_31);
   if (VAR_20 < VAR_19) {
    VAR_15[VAR_20].start = VAR_32;
    VAR_15[VAR_20].end = VAR_33;
   }
   ++VAR_20;
  } while (VAR_31 == ':');


  for (VAR_21 = VAR_20; VAR_21 < VAR_19; ++VAR_21)
   VAR_15[VAR_21].start = VAR_15[VAR_21].end = ((void*)0);

  if (VAR_15[0].start != ((void*)0) && *(VAR_15[0].start) == '#') {

   continue;
  }

  VAR_21 = 0;
  VAR_23 = 0;
  VAR_29 = -1;
  VAR_28 = 0;
  VAR_16.start = VAR_16.end = ((void*)0);

  if (VAR_13 != 130) {
   VAR_17 = VAR_15[0].start;
   VAR_30 = VAR_15[0].end - VAR_15[0].start;
   if (*VAR_17 == 'd' && (VAR_30 == 1 || (VAR_30 >= 7
       && FUNC_6((VAR_17 + 1), "efault", 6) == 0))) {
    VAR_25 = 131;
    if (VAR_30 > 7)
     VAR_15[0].start += 7;
    else
     VAR_21 = 1;
   } else
    VAR_25 = VAR_13;


   FUNC_4(VAR_15[VAR_21 + 1].start, VAR_15[VAR_21 + 1].end, &VAR_29);

   if (VAR_29 == -1 && VAR_20 > (VAR_21 + 3))
    FUNC_4(VAR_15[VAR_21 + 3].start, VAR_15[VAR_21 + 3].end,
        &VAR_29);

   VAR_27 = 0;
   VAR_17 = VAR_15[VAR_21].start;
   VAR_18 = VAR_15[VAR_21].start + 1;
   VAR_30 = VAR_15[VAR_21].end - VAR_15[VAR_21].start;

   if (VAR_30 == 0) {
    VAR_24 = VAR_9;
    continue;
   }

   switch (*VAR_17) {
   case 'u':
    if (VAR_30 == 1 || (VAR_30 == 4
        && FUNC_6(VAR_18, "ser", 3) == 0))
     VAR_27 = 128;
    break;
   case 'g':
    if (VAR_30 == 1 || (VAR_30 == 5
        && FUNC_6(VAR_18, "roup", 4) == 0))
     VAR_27 = 135;
    break;
   case 'o':
    if (VAR_30 == 1 || (VAR_30 == 5
        && FUNC_6(VAR_18, "ther", 4) == 0))
     VAR_27 = 133;
    break;
   case 'm':
    if (VAR_30 == 1 || (VAR_30 == 4
        && FUNC_6(VAR_18, "ask", 3) == 0))
     VAR_27 = 134;
    break;
   default:
     break;
   }

   switch (VAR_27) {
   case 133:
   case 134:
    if (VAR_20 == (VAR_21 + 2)
        && VAR_15[VAR_21 + 1].start < VAR_15[VAR_21 + 1].end
        && FUNC_5(VAR_15[VAR_21 + 1].start,
        VAR_15[VAR_21 + 1].end, &VAR_28)) {

     VAR_23 = 1;
    } else if (VAR_20 == (VAR_21 + 3) &&
        VAR_15[VAR_21 + 1].start < VAR_15[VAR_21 + 1].end) {

     VAR_24 = VAR_9;
     continue;
    }
    break;
   case 128:
   case 135:
    if (VAR_29 != -1 ||
        VAR_15[VAR_21 + 1].start < VAR_15[VAR_21 + 1].end) {
     VAR_16 = VAR_15[VAR_21 + 1];
     if (VAR_27 == 128)
      VAR_27 = VAR_6;
     else
      VAR_27 = VAR_1;
    }
    break;
   default:

    VAR_24 = VAR_9;
    continue;
   }





   if (VAR_28 == 0 && !FUNC_5(VAR_15[VAR_21 + 2 - VAR_23].start,
       VAR_15[VAR_21 + 2 - VAR_23].end, &VAR_28)) {

    VAR_24 = VAR_9;
    continue;
   }
  } else {

   VAR_17 = VAR_15[0].start;
   VAR_30 = VAR_15[0].end - VAR_15[0].start;
   VAR_27 = 0;

   switch (VAR_30) {
   case 4:
    if (FUNC_6(VAR_17, "user", 4) == 0)
     VAR_27 = VAR_6;
    break;
   case 5:
    if (FUNC_6(VAR_17, "group", 5) == 0)
     VAR_27 = VAR_1;
    break;
   case 6:
    if (FUNC_6(VAR_17, "owner@", 6) == 0)
     VAR_27 = 128;
    else if (FUNC_6(VAR_17, "group@", 6) == 0)
     VAR_27 = 135;
    break;
   case 9:
    if (FUNC_6(VAR_17, "everyone@", 9) == 0)
     VAR_27 = VAR_0;
    break;
   default:
    break;
   }

   if (VAR_27 == 0) {

    VAR_24 = VAR_9;
    continue;
   } else if (VAR_27 == VAR_6 ||
       VAR_27 == VAR_1) {
    VAR_21 = 1;
    VAR_16 = VAR_15[1];
    FUNC_4(VAR_16.start, VAR_16.end, &VAR_29);
   } else
    VAR_21 = 0;

   if (!FUNC_3(VAR_15[1 + VAR_21].start,
       VAR_15[1 + VAR_21].end, &VAR_28)) {

    VAR_24 = VAR_9;
    continue;
   }
   if (!FUNC_2(VAR_15[2 + VAR_21].start,
       VAR_15[2 + VAR_21].end, &VAR_28)) {

    VAR_24 = VAR_9;
    continue;
   }
   VAR_17 = VAR_15[3 + VAR_21].start;
   VAR_30 = VAR_15[3 + VAR_21].end - VAR_15[3 + VAR_21].start;
   VAR_25 = 0;
   if (VAR_30 == 4) {
    if (FUNC_6(VAR_17, "deny", 4) == 0)
     VAR_25 = VAR_5;
   } else if (VAR_30 == 5) {
    if (FUNC_6(VAR_17, "allow", 5) == 0)
     VAR_25 = VAR_3;
    else if (FUNC_6(VAR_17, "audit", 5) == 0)
     VAR_25 = VAR_4;
    else if (FUNC_6(VAR_17, "alarm", 5) == 0)
     VAR_25 = VAR_2;
   }
   if (VAR_25 == 0) {

    VAR_24 = VAR_9;
    continue;
   }
   FUNC_4(VAR_15[4 + VAR_21].start, VAR_15[4 + VAR_21].end,
       &VAR_29);
  }


  VAR_22 = FUNC_0(VAR_11, VAR_25, VAR_28,
      VAR_27, VAR_29, VAR_16.start, VAR_16.end - VAR_16.start, VAR_14);
  if (VAR_22 < VAR_9)
   return (VAR_22);
  if (VAR_22 != VAR_8)
   VAR_24 = VAR_9;
  VAR_26 |= VAR_25;
 }


 FUNC_1(VAR_11, VAR_26);

 return (VAR_24);
}
