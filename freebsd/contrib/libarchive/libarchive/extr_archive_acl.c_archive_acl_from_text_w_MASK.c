
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
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
 int FUNC_0 (struct archive_acl*,int,int,int,int,int const*,int) ;
 int FUNC_1 (struct archive_acl*,int) ;
 int FUNC_2 (int const*,int const*,int*) ;
 int FUNC_3 (int const*,int const*,int*) ;
 int FUNC_4 (int const*,int const*,int*) ;
 scalar_t__ FUNC_5 (int const*,int const*,int*) ;
 int FUNC_6 (int const**,int const**,int const**,int*) ;
 scalar_t__ FUNC_7 (int const*,char*,int) ;

int
FUNC_8(struct archive_acl *VAR_11, const wchar_t *VAR_12,
    int VAR_13)
{
 struct {
  const wchar_t *start;
  const wchar_t *end;
 } VAR_14[6], VAR_15;

 const wchar_t *VAR_16, *VAR_17;

 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 size_t VAR_29;
 wchar_t VAR_30;

 VAR_23 = VAR_8;
 VAR_25 = 0;

 switch (VAR_13) {
 case 129:
  VAR_13 = 132;
  VAR_10;
 case 132:
 case 131:
  VAR_18 = 5;
  break;
 case 130:
  VAR_18 = 6;
  break;
 default:
  return (VAR_7);
 }

 while (VAR_12 != ((void*)0) && *VAR_12 != L'\0') {




  VAR_19 = 0;
  do {
   const wchar_t *VAR_31, *VAR_32;
   FUNC_6(&VAR_12, &VAR_31, &VAR_32, &VAR_30);
   if (VAR_19 < VAR_18) {
    VAR_14[VAR_19].start = VAR_31;
    VAR_14[VAR_19].end = VAR_32;
   }
   ++VAR_19;
  } while (VAR_30 == L':');


  for (VAR_20 = VAR_19; VAR_20 < VAR_18; ++VAR_20)
   VAR_14[VAR_20].start = VAR_14[VAR_20].end = ((void*)0);

  if (VAR_14[0].start != ((void*)0) && *(VAR_14[0].start) == L'#') {

   continue;
  }

  VAR_20 = 0;
  VAR_22 = 0;
  VAR_28 = -1;
  VAR_27 = 0;
  VAR_15.start = VAR_15.end = ((void*)0);

  if (VAR_13 != 130) {
   VAR_16 = VAR_14[0].start;
   VAR_29 = VAR_14[0].end - VAR_14[0].start;
   if (*VAR_16 == L'd' && (VAR_29 == 1 || (VAR_29 >= 7
       && FUNC_7((VAR_16 + 1), L"efault", 6) == 0))) {
    VAR_24 = 131;
    if (VAR_29 > 7)
     VAR_14[0].start += 7;
    else
     VAR_20 = 1;
   } else
    VAR_24 = VAR_13;


   FUNC_4(VAR_14[VAR_20 + 1].start, VAR_14[VAR_20 + 1].end, &VAR_28);

   if (VAR_28 == -1 && VAR_19 > VAR_20+3)
    FUNC_4(VAR_14[VAR_20 + 3].start, VAR_14[VAR_20 + 3].end,
        &VAR_28);

   VAR_26 = 0;
   VAR_16 = VAR_14[VAR_20].start;
   VAR_17 = VAR_14[VAR_20].start + 1;
   VAR_29 = VAR_14[VAR_20].end - VAR_14[VAR_20].start;

   switch (*VAR_16) {
   case L'u':
    if (VAR_29 == 1 || (VAR_29 == 4
        && FUNC_7(VAR_17, L"ser", 3) == 0))
     VAR_26 = 128;
    break;
   case L'g':
    if (VAR_29 == 1 || (VAR_29 == 5
        && FUNC_7(VAR_17, L"roup", 4) == 0))
     VAR_26 = 135;
    break;
   case L'o':
    if (VAR_29 == 1 || (VAR_29 == 5
        && FUNC_7(VAR_17, L"ther", 4) == 0))
     VAR_26 = 133;
    break;
   case L'm':
    if (VAR_29 == 1 || (VAR_29 == 4
        && FUNC_7(VAR_17, L"ask", 3) == 0))
     VAR_26 = 134;
    break;
   default:
     break;
   }

   switch (VAR_26) {
   case 133:
   case 134:
    if (VAR_19 == (VAR_20 + 2)
        && VAR_14[VAR_20 + 1].start < VAR_14[VAR_20 + 1].end
        && FUNC_5(VAR_14[VAR_20 + 1].start,
        VAR_14[VAR_20 + 1].end, &VAR_27)) {

     VAR_22 = 1;
    } else if (VAR_19 == (VAR_20 + 3) &&
        VAR_14[VAR_20 + 1].start < VAR_14[VAR_20 + 1].end) {

     VAR_23 = VAR_9;
     continue;
    }
    break;
   case 128:
   case 135:
    if (VAR_28 != -1 ||
        VAR_14[VAR_20 + 1].start < VAR_14[VAR_20 + 1].end) {
     VAR_15 = VAR_14[VAR_20 + 1];
     if (VAR_26 == 128)
      VAR_26 = VAR_6;
     else
      VAR_26 = VAR_1;
    }
    break;
   default:

    VAR_23 = VAR_9;
    continue;
   }





   if (VAR_27 == 0 && !FUNC_5(VAR_14[VAR_20 + 2 - VAR_22].start,
       VAR_14[VAR_20 + 2 - VAR_22].end, &VAR_27)) {

    VAR_23 = VAR_9;
    continue;
   }
  } else {

   VAR_16 = VAR_14[0].start;
   VAR_29 = VAR_14[0].end - VAR_14[0].start;
   VAR_26 = 0;

   switch (VAR_29) {
   case 4:
    if (FUNC_7(VAR_16, L"user", 4) == 0)
     VAR_26 = VAR_6;
    break;
   case 5:
    if (FUNC_7(VAR_16, L"group", 5) == 0)
     VAR_26 = VAR_1;
    break;
   case 6:
    if (FUNC_7(VAR_16, L"owner@", 6) == 0)
     VAR_26 = 128;
    else if (FUNC_7(VAR_16, L"group@", VAR_29) == 0)
     VAR_26 = 135;
    break;
   case 9:
    if (FUNC_7(VAR_16, L"everyone@", 9) == 0)
     VAR_26 = VAR_0;
   default:
    break;
   }

   if (VAR_26 == 0) {

    VAR_23 = VAR_9;
    continue;
   } else if (VAR_26 == VAR_6 ||
       VAR_26 == VAR_1) {
    VAR_20 = 1;
    VAR_15 = VAR_14[1];
    FUNC_4(VAR_15.start, VAR_15.end, &VAR_28);
   } else
    VAR_20 = 0;

   if (!FUNC_3(VAR_14[1 + VAR_20].start,
       VAR_14[1 + VAR_20].end, &VAR_27)) {

    VAR_23 = VAR_9;
    continue;
   }
   if (!FUNC_2(VAR_14[2 + VAR_20].start,
       VAR_14[2 + VAR_20].end, &VAR_27)) {

    VAR_23 = VAR_9;
    continue;
   }
   VAR_16 = VAR_14[3 + VAR_20].start;
   VAR_29 = VAR_14[3 + VAR_20].end - VAR_14[3 + VAR_20].start;
   VAR_24 = 0;
   if (VAR_29 == 4) {
    if (FUNC_7(VAR_16, L"deny", 4) == 0)
     VAR_24 = VAR_5;
   } else if (VAR_29 == 5) {
    if (FUNC_7(VAR_16, L"allow", 5) == 0)
     VAR_24 = VAR_3;
    else if (FUNC_7(VAR_16, L"audit", 5) == 0)
     VAR_24 = VAR_4;
    else if (FUNC_7(VAR_16, L"alarm", 5) == 0)
     VAR_24 = VAR_2;
   }
   if (VAR_24 == 0) {

    VAR_23 = VAR_9;
    continue;
   }
   FUNC_4(VAR_14[4 + VAR_20].start, VAR_14[4 + VAR_20].end, &VAR_28);
  }


  VAR_21 = FUNC_0(VAR_11, VAR_24, VAR_27,
      VAR_26, VAR_28, VAR_15.start, VAR_15.end - VAR_15.start);
  if (VAR_21 < VAR_9)
   return (VAR_21);
  if (VAR_21 != VAR_8)
   VAR_23 = VAR_9;
  VAR_25 |= VAR_24;
 }


 FUNC_1(VAR_11, VAR_25);

 return (VAR_23);
}
